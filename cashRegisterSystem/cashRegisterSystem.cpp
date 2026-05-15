#include "cashRegisterSystem.h"

cashRegisterSystem::cashRegisterSystem(QWidget* parent)
    : QMainWindow(parent), m_ui(new Ui::cashRegisterSystem2Class)
{
    m_AdminProductIsUpdated = true;
    m_UserProductIsUpdated = true;

    m_ProductsDB = NULL;
    m_customersDB = NULL;
    m_OperationsDB = NULL;
    withDiscount = true;
    TotalBalanceForOperation = 0;
    TotalBalanceForOperationDiscounted = 0;
    m_ui->setupUi(this);
    m_ui->password_field->setEchoMode(QLineEdit::Password);
    i = 0;
    m_ui->class_box->addItem("عميل عادي");
    m_ui->class_box->addItem("عميل مهم");
    m_ui->class_box->addItem("طالب");
    QApplication::setWindowIcon(QIcon("icon.ico"));
    isAdmin = false;

    m_ui->discount_spinbox->setDecimals(0);
    m_ui->discount_spinbox->setPrefix("% ");

    Add_Item_names();
    //connects
    connect(m_ui->item_name_price, QOverload<int>::of(&QComboBox::currentIndexChanged), this, &cashRegisterSystem::onPriceComboIndexChanged);

    connect(m_ui->formsStackedWidget, SIGNAL(currentChanged(int)), this, SLOT(onPageChanged(int)));

    // set the date for the QDateEdit widget
    m_ui->date_search_from->setDate(QDate::currentDate());
    m_ui->date_search_to->setDate(QDate::currentDate());
    m_ui->dateEdit_user->setDate(QDate::currentDate());

    m_ui->dateEdit_user->setDisabled(true);
    m_ui->dateEdit_user->setHidden(true);
    m_ui->nav_frame->setHidden(true);

    // Validators
    QIntValidator* validator = new QIntValidator(0, INT_MAX, parent);
    m_ui->phoneSearch->setValidator(validator);
    m_ui->new_customer_phone->setValidator(validator);
    m_ui->admin_phone_number->setValidator(validator);
    m_ui->user_phone_number->setValidator(validator);
    m_ui->formsStackedWidget->setCurrentIndex(0);

}

cashRegisterSystem::~cashRegisterSystem()
{
    delete m_ui;
}

void cashRegisterSystem::onPageChanged(int index) {
    if (index == 5) {
        if (m_AdminProductIsUpdated) {
            m_ui->admin_categories_list->setLayoutDirection(Qt::RightToLeft);
            showCategoriesList(m_ui->admin_categories_list, m_ui->admin_products_scroll_area);
            showAllProducts(m_ui->admin_productsVerticalLayout,m_ui->admin_cartVerticalLayout,m_ui->admin_price_before,m_ui->admin_price_after,m_ui->admin_cartScrollArea,m_ui->admin_check_discount,m_ui->admin_phone_number);
            m_AdminProductIsUpdated = false;
        }
    }
    else if (index == 1) {
        if (m_UserProductIsUpdated) {
            m_ui->user_categories_list->setLayoutDirection(Qt::RightToLeft);
            showCategoriesList(m_ui->user_categories_list, m_ui->user_products_scroll_area);
            showAllProducts(m_ui->user_productsVerticalLayout, m_ui->user_cartVerticalLayout, m_ui->user_price_before, m_ui->user_price_after, m_ui->user_cartScrollArea, m_ui->user_check_discount, m_ui->user_phone_number);
            m_UserProductIsUpdated = false;
        }
    }
    else if (index == 2) {
        fillCategories();
    }
}

void cashRegisterSystem::populateProductList(QVBoxLayout* productsVerticalLayout, QLabel* productType,
    QVBoxLayout* cartVerticalLayout, QLabel* priceBefore, QLabel* priceAfter,
    QScrollArea* cartScrollArea, QPushButton* checkButton,
    QLineEdit* phoneNumberField)
{
    sqlite3_stmt* stmt;
    int rc = sqlite3_open("mydatabase.db", &m_ProductsDB);
    if (rc != SQLITE_OK) {
        QMessageBox::warning(this, "oh no", "Cannot open database");
        sqlite3_close(m_ProductsDB);
    }
    std::stringstream ss;
    ss << "select * from products where type ='" << productType->text().toStdString() << "'";
    QString query = QString::fromStdString(ss.str());
    rc = sqlite3_prepare_v2(m_ProductsDB, query.toUtf8().constData(), -1, &stmt, NULL);
    if (rc != SQLITE_OK) {
        QMessageBox::warning(this, "oh no", query);
        sqlite3_finalize(stmt);
        sqlite3_close(m_ProductsDB);
    }

    int verticalItems = 0;
    int horizontalItems = 4;
    QLabel* nameLabel;
    QVector<QPushButton*> add_button;
    QDoubleSpinBox* quantityBox;
    int i = 0;
    QFrame* GridFrame = new QFrame;
    QGridLayout* grid = new QGridLayout(GridFrame);
    grid->setAlignment(Qt::AlignRight);

    // ── Tito's palette ──────────────────────────────────────────
    // Even card:  cream surface  #F5F2EA  |  border #C8B89A
    // Odd card:   white surface  #FAFAF6  |  border #C8B89A
    // Button:     deep green     #1E5C3A  |  hover  #2D7A50
    // SpinBox:    tan border     #C8B89A
    // Label:      dark text      #1A2E23
    // ────────────────────────────────────────────────────────────

    const QString btnStyle =
        "QPushButton{"
        "  font-size:12px;"
        "  background-color:#1E5C3A;"
        "  color:#FAFAF6;"
        "  border-radius:8px;"
        "  font-weight:bold;"
        "  padding:4px;"
        "}"
        "QPushButton:hover{"
        "  background-color:#2D7A50;"
        "}";

    const QString spinStyle =
        "QDoubleSpinBox{"
        "  border:1.5px solid #C8B89A;"
        "  border-radius:5px;"
        "  background:transparent;"
        "  color:#1A2E23;"
        "}"
        "QDoubleSpinBox:hover{"
        "  background-color:#E8EDE5;"
        "  border-color:#2D7A50;"
        "}"
        "QDoubleSpinBox::down-arrow{image:url(:/cashRegisterSystem2/media/arrow-down.png);}"
        "QDoubleSpinBox::up-arrow{image:url(:/cashRegisterSystem2/media/arrow-up.png);}";

    while (sqlite3_step(stmt) == SQLITE_ROW) {
        double quantity = sqlite3_column_double(stmt, 1);
        const char* name = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 0));
        const char* price = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 2));

        QFrame* frame = new QFrame;
        QVBoxLayout* vboxLayout = new QVBoxLayout(frame);

        nameLabel = new QLabel(QString::fromUtf8(name));
        nameLabel->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        nameLabel->setStyleSheet("border:none; font-size:12px; font-weight:bold; color:#1A2E23;");
        nameLabel->setAlignment(Qt::AlignRight);

        QPushButton* temp = new QPushButton("!اضافة للسلة");
        temp->setStyleSheet(btnStyle);
        temp->setCursor(Qt::PointingHandCursor);
        add_button.push_back(temp);

        quantityBox = new QDoubleSpinBox();
        quantityBox->setStyleSheet(spinStyle);

        QLabel* lab = new QLabel(QString("السعر: %1").arg(QString::fromUtf8(price)));
        lab->setStyleSheet("border:none; font-size:14px; color:#5A7060;");
        lab->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

        float price_val = lab->text().split(" ")[1].toFloat();

        add_button.back()->setObjectName("btnName_1");
        quantityBox->setValue(1.00f);
        quantityBox->setObjectName("quantityBox_1");
        quantityBox->setMinimum(1);
        quantityBox->setMaximum(9999999);

        connect(add_button.back(), &QPushButton::clicked, [this, quantityBox, nameLabel, price_val, cartVerticalLayout, priceBefore,
            priceAfter, cartScrollArea, checkButton, phoneNumberField]() {
                on_name_button_clicked(quantityBox->value(), nameLabel->text(), price_val, cartVerticalLayout, priceBefore,
                    priceAfter, cartScrollArea, checkButton, phoneNumberField);
            });

        vboxLayout->addWidget(nameLabel);
        vboxLayout->addWidget(lab);
        vboxLayout->addWidget(quantityBox);
        vboxLayout->addWidget(add_button.back());

        // Alternate between cream and white cards
        frame->setObjectName("cartItem");
        if (i % 2 == 0) {
            frame->setStyleSheet(
                "#cartItem{"
                "  background-color:#F5F2EA;"
                "  border:1.5px solid #C8B89A;"
                "  border-radius:8px;"
                "  margin:5px;"
                "}"
            );
        } else {
            frame->setStyleSheet(
                "#cartItem{"
                "  background-color:#FAFAF6;"
                "  border:1.5px solid #C8B89A;"
                "  border-radius:8px;"
                "  margin:5px;"
                "}"
            );
        }

        frame->setMaximumSize(149, 156);
        grid->addWidget(frame, verticalItems, horizontalItems);
        horizontalItems--;
        if (horizontalItems == 0) {
            verticalItems++;
            horizontalItems = 4;
        }
        i++;
    }

    productType->setStyleSheet(
        "QLabel{"
        "  padding:5px;"
        "  margin-right:10px;"
        "  font-size:18px;"
        "  color:#1E5C3A;"
        "  font-weight:bold;"
        "}"
    );
    productsVerticalLayout->addWidget(productType);
    productsVerticalLayout->addWidget(GridFrame);

    sqlite3_finalize(stmt);
    sqlite3_close(m_ProductsDB);
}


// void cashRegisterSystem::populateProductList(QVBoxLayout* productsVerticalLayout, QLabel* productType,
//     QVBoxLayout* cartVerticalLayout, QLabel* priceBefore, QLabel* priceAfter,
//     QScrollArea* cartScrollArea, QPushButton* checkButton,
//     QLineEdit* phoneNumberField)
// {
//     //preparing for adding products grid layout
//     sqlite3_stmt* stmt;
//     int rc = sqlite3_open("mydatabase.db", &m_ProductsDB);
//     if (rc != SQLITE_OK) {
//         QMessageBox::warning(this, "oh no", "Cannot open database");
//         sqlite3_close(m_ProductsDB);
//     }
//     std::stringstream ss;
//     ss << "select * from products where type ='" << productType->text().toStdString() << "'";
//     QString query = QString::fromStdString(ss.str());
//     rc = sqlite3_prepare_v2(m_ProductsDB, query.toUtf8().constData(), -1, &stmt, NULL);
//     if (rc != SQLITE_OK) {
//         QMessageBox::warning(this, "oh no", query);
//         sqlite3_finalize(stmt);
//         sqlite3_close(m_ProductsDB);
//     }
//     //Creating a grid layout...

//     int verticalItems = 0;
//     int horizontalItems = 4;
//     QLabel* nameLabel;
//     QVector<QPushButton*> add_button;
//     QDoubleSpinBox* quantityBox;
//     int i = 0;
//     QFrame* GridFrame = new QFrame;
//     QGridLayout* grid = new QGridLayout(GridFrame);
//     grid->setAlignment(Qt::AlignRight);
//     while (sqlite3_step(stmt) == SQLITE_ROW) {
//         double quantity = sqlite3_column_double(stmt, 1);
//         const char* name = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 0));
//         const char* price = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 2));
//         QFrame* frame = new QFrame;
//         QVBoxLayout* vboxLayout = new QVBoxLayout(frame);
//         nameLabel = new QLabel(QString::fromUtf8(name));
//         nameLabel->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
//         nameLabel->setStyleSheet("border: none; font-size:12px; font-weight:bold;");
//         nameLabel->setAlignment(Qt::AlignRight);

//         //Assigning the strings to widgets...
//         QPushButton* temp = new QPushButton("!اضافة للسلة");
//         temp->setStyleSheet("QPushButton{font-size:12px; background-color:rgba(185, 191, 193, 1); padding:2px; color:#323638; border-radius:10px;font-weight:bold; padding:2px;} QPushButton::hover{background-color: rgba(200,171,151,0.5);}");
//         temp->setCursor(Qt::PointingHandCursor);
        
//         add_button.push_back(temp);
        
//         quantityBox = new QDoubleSpinBox();
//         QLabel* lab = new QLabel(QString("السعر: %1").arg(QString::fromUtf8(price)));
//         lab->setStyleSheet("border: none; font-size:16px;");

//         float price_val = lab->text().split(" ")[1].toFloat();
//         quantityBox->setStyleSheet("QDoubleSpinBox{"
//             "border:1px solid rgba(120, 91, 71, 1);"
//             "border-radius:5px;"
//             "background:transparent;}"
//             "QDoubleSpinBox::hover{"
//             "background-color: rgba(185, 191, 193, 1);"
//             "border:none;}"
//             "QDoubleSpinBox::down-arrow{"
//             "image:url(:/cashRegisterSystem2/media/arrow-down.png);}"
//             "QDoubleSpinBox::up-arrow{image:url(:/cashRegisterSystem2/media/arrow-up.png);}");
//         //Setting up the lable style sheet
//         //Creating horizontal line with desired properties...
//         //Setting up the pushbutton with the on-hover changes...
//         add_button.back()->setObjectName("btnName_1");
//         quantityBox->setValue(1.00f);
//         lab->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
//         //Setting up quantityBox proberties
//         quantityBox->setObjectName("quantityBox_1");

//         connect(add_button.back(), &QPushButton::clicked, [this, quantityBox, nameLabel, price_val, cartVerticalLayout, priceBefore,
//             priceAfter, cartScrollArea, checkButton, phoneNumberField]() {
//                 on_name_button_clicked(quantityBox->value(), nameLabel->text(), price_val, cartVerticalLayout, priceBefore,
//                     priceAfter, cartScrollArea, checkButton, phoneNumberField);
//             });
//         quantityBox->setMinimum(1);
//         quantityBox->setMaximum(9999999);

//         vboxLayout->addWidget(nameLabel);
//         vboxLayout->addWidget(lab);
//         vboxLayout->addWidget(quantityBox);
//         vboxLayout->addWidget(add_button.back());
//         frame->setObjectName("cartItem");
//         frame->setStyleSheet("#cartItem{background-color:rgba(200,171,151,0.5); border-radius:5px; margin:5px;}");
//         if (i % 2 == 1) {
//             frame->setStyleSheet("#cartItem{background-color:rgba(200,200,200,1); border-radius:5px; margin:5px;}");
//             temp->setStyleSheet("QPushButton{font-size:12px; background-color:rgba(200, 171, 151, 0.5); padding:2px; color:#323638; border-radius:10px;font-weight:bold; padding:2px;} QPushButton::hover{background-color: rgba(185, 191, 193, 1);}");
//              quantityBox->setStyleSheet("QDoubleSpinBox{"
//             "border:1px solid rgba(120, 91, 71, 1);"
//             "border-radius:5px;"
//             "background:transparent;}"
//             "QDoubleSpinBox::hover{"
//             "background-color: rgba(200,171,151,0.5);"
//             "border:none;}"
//             "QDoubleSpinBox::down-arrow{"
//             "image:url(:/cashRegisterSystem2/media/arrow-down.png);}"
//             "QDoubleSpinBox::up-arrow{image:url(:/cashRegisterSystem2/media/arrow-up.png);}");
//         };
//         frame->setMaximumSize(149, 156);
//         //adding all the widgets to the previously cretaed grid layout...
//         grid->addWidget(frame, verticalItems, horizontalItems);
//         horizontalItems--;
//         if (horizontalItems == 0)
//         {
//             verticalItems++;
//             horizontalItems = 4;
//         }
//         i++;
//     }
//     productType->setStyleSheet("QLabel{padding:5px; margin-right:10px; font-size:18px; color:#323638; font-weight:bold;}");
//     productsVerticalLayout->addWidget(productType);
//     productsVerticalLayout->addWidget(GridFrame);

//     sqlite3_finalize(stmt);
//     sqlite3_close(m_ProductsDB);
// }

void cashRegisterSystem::showAllProducts(QVBoxLayout* productsVerticalLayout, QVBoxLayout* cartVerticalLayout, QLabel* priceBefore, QLabel* priceAfter, QScrollArea* cartScrollArea, QPushButton* checkDiscount, QLineEdit* phoneNumber) {
    if(!productsVerticalLayout->isEmpty())clearProducts(productsVerticalLayout);
    for (auto category : clone_categories)
        populateProductList(productsVerticalLayout, category, cartVerticalLayout, priceBefore, priceAfter, cartScrollArea, checkDiscount, phoneNumber);
}

void cashRegisterSystem::clearProducts(QVBoxLayout* productsContent) {
    QLayout* layout = productsContent; // Get the layout of the widget
    if (layout != nullptr) {

        // Remove and delete the items within the layout
        QLayoutItem* child = nullptr;
        while ((child = layout->takeAt(0)) != nullptr) {
            QWidget* widget = child->widget();
            if (widget) {
                layout->removeWidget(widget);
                delete widget;
            }
            delete child;
        }
    }
}

void cashRegisterSystem::showCategoriesList(QListWidget* categoriesList, QScrollArea* productsScrollArea) {
    if (categoriesList->count() == 0) {
        if (const_categories.isEmpty()) {
            QFile file("categories.txt");
            if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
                return;
            QTextStream in(&file);
            while (!in.atEnd()) {
                const QString line = in.readLine();
                categoriesList->addItem(line);
                const_categories.append(makeLabel(line));
            }
        }
        else {
            for (auto category : const_categories) {
                categoriesList->addItem(category->text());
            }
        }
    }
    clone_categories.clear();
    makeQListCopy(clone_categories, const_categories);

    //connects
    connect(categoriesList, &QListWidget::currentRowChanged, [=](int row) {
        itemClickedHandler(row, productsScrollArea);
        });
}

void cashRegisterSystem::itemClickedHandler(int row, QScrollArea* productsScrollArea) {
    int yMargin = productsScrollArea->height() - clone_categories[row]->height();
    productsScrollArea->ensureWidgetVisible(clone_categories[row], 0, yMargin);
}

QLabel* cashRegisterSystem::makeLabel(const QString& content) {
    QLabel* label = new QLabel(content, this);
    label->setStyleSheet("font-size:20px;");
    return label;
}

void cashRegisterSystem::makeQListCopy(QList<QLabel*>& clone_categories, QList<QLabel*>& const_categories) {
    for (QLabel* label : const_categories) {
        QLabel* newLabel = new QLabel(label->text());
        newLabel->setStyleSheet("font-size:20px;");
        clone_categories.append(newLabel);
    }
}
