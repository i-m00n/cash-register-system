#include "cashRegisterSystem.h"

void cashRegisterSystem::payOperation(char type, QLabel* priceBefore, QLabel* priceAfter,
    QPushButton* checkButton, QLineEdit* phoneNumberField,
    QWidget* cartContent) {

    Database db("mydatabase.db");
    db.beginTransaction();

    try {
        db.updateCustomerTotalPaid(phoneNumberField->text().toStdString(), priceAfter->text().toFloat(), type);
        QHashIterator<QString, QList<QVariant>> i(myHash);
        while (i.hasNext()) {
            i.next();
            // name, quantity, type(add, subtract)
            db.updateProductQuantity(i.key().toStdString(), i.value().at(0).toInt(), updateType(type));

            // name, quantity, price
            float price = check_discount(priceAfter, priceBefore, checkButton, phoneNumberField, i.value().at(1).toFloat());
            string operation_type = m_ui->admin_order_type_cmb->currentText().toUtf8().constData();
            db.insertOrUpdateOperation(i.key().toStdString(), i.value().at(0).toInt(), price, operation_type, type);
        }
        db.commitTransaction();
    }
    catch (...) {
        db.rollbackTransaction();
        QMessageBox::warning(this, QString::fromUtf8("خطأ"), QString::fromUtf8(".حدث خطأ أثناء إتمام العملية، يرجى المحاولة مرة أخرى"));
    }

    DeleteAll(priceBefore, priceAfter, checkButton, phoneNumberField, cartContent);
    db.~Database();
}


float cashRegisterSystem::check_discount(QLabel* priceAfter, QLabel* priceBefore, QPushButton* checkButton, QLineEdit* phoneNumberField, float price) {
    const QString phoneNumber = phoneNumberField->text();
    if (phoneNumber.isEmpty()) {
        QMessageBox msg;
        msg.setText("Phone number is empty");
        msg.exec();
        return 0;
    }

    Database* db = new Database("mydatabase.db");
    QString customerClass = "";
    // Execute the query and process the result
    float minDiscount = 0;
    if (db->checkPhoneNumber(phoneNumber.toStdString(), customerClass)) {

        float adminDiscount = 1 - (m_ui->discount_spinbox->value() / 100);

        if (customerClass == "طالب" || customerClass == "عميل مهم") {

            // giving the priority to the admin discount
            if (adminDiscount == 1) minDiscount = PHONE_DISCOUNT;
            else minDiscount = adminDiscount;

            // giving the priority to the rank
            //minDiscount = min(adminDiscount, PHONE_DISCOUNT);

            // if pressed on (check discount) button to update price after
            if (price == SLOT_PRICE) {
                price = priceBefore->text().toFloat();
                price *= minDiscount;
                priceAfter->setText(QString::number(price));
            }
            // if called in payOperation to apply discount on every product's price before inserting it in database
            else {
                // apply discount ONLY if discount button is clicked
                if (priceBefore->text().toFloat() != priceAfter->text().toFloat()) {
                    price *= minDiscount;
                }
                db->~Database();
                return price;
            }
        }
        else if (customerClass == "عميل عادي") {
            // updates price after every time entering this condition
            if (price == SLOT_PRICE) price = adminDiscount;
            else price *= adminDiscount;

            float before = priceBefore->text().toFloat();
            before *= adminDiscount;
            priceAfter->setText(QString::number(before));
            // close database
            db->~Database();
            // returnung adminDiscount when cicking on onPayment
            return price;
        }
    }
    else {
        // No match found in the database
        goMakeAccount(phoneNumber);
    }

    //close the database
    db->~Database();
    // Return the result
    return minDiscount;
}

void cashRegisterSystem::DeleteAll(QLabel* priceBefore, QLabel* priceAfter,
    QPushButton* checkButton, QLineEdit* phoneNumberField,
    QWidget* cartContent) {

    QLayout* layout = cartContent->layout(); // Get the layout of the scroll area widget
    if (layout != nullptr) {
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
    myHash.clear();
    TotalBalanceForOperation = 0;
    m_ui->discount_spinbox->setValue(0);
    phoneNumberField->setText("");
    priceAfter->setText(QString::number(TotalBalanceForOperation));
    priceBefore->setText(QString::number(TotalBalanceForOperation));
    checkButton->setDisabled(false);
    m_ui->admin_order_type_cmb->setCurrentIndex(0);
    withDiscount = false;
}


void cashRegisterSystem::Delete_On_Click(QPushButton* del, float totalPrice, QString name, int quantity,
    QLabel* priceBefore, QLabel* priceAfter,
    QPushButton* checkButton, QLineEdit* phoneNumberField)
{
    QList<QVariant> values = myHash[name];
    values[0] = values[0].toInt() - quantity;
    values[1] = values[1].toFloat() - totalPrice;

    if (values[0] == 0) myHash.remove(name);
    else myHash[name] = values;

    QFrame* layout = MappingLayout.take(del);

    float discount = check_discount(priceAfter, priceBefore, checkButton, phoneNumberField);
    TotalBalanceForOperation -= totalPrice;
    //TotalBalanceForOperationDiscounted = discount * TotalBalanceForOperation;

    priceBefore->setText(QString::number(TotalBalanceForOperation));
    //priceAfter->setText(QString::number(TotalBalanceForOperationDiscounted));
    priceAfter->setText(QString::number(TotalBalanceForOperation));

    while (layout->layout()->count() != 0) {
        QLayoutItem* item = layout->layout()->takeAt(0);
        delete item->widget();
        delete item;
    }
    delete layout;

}

void cashRegisterSystem::on_name_button_clicked(double quantity, QString name, float pricePerEach,
    QVBoxLayout* cartVerticalLayout, QLabel* priceBefore, QLabel* priceAfter,
    QScrollArea* cartScrollArea, QPushButton* checkButton, QLineEdit* phoneNumberField)
{
    float totalPrice = pricePerEach * quantity;
    QFrame* frame = new QFrame;
    QHBoxLayout* layout = new QHBoxLayout(frame);
    frame->setMaximumHeight(50);
    QLabel* names = new QLabel(name);
    names->setStyleSheet("border: none; font-size:14px; font-weight:bold;");

    QLabel* quantities = new QLabel(tr("x%1").arg(quantity));
    quantities->setStyleSheet("border: none; font-size:16px;");

    QLabel* pricesPerEach = new QLabel(tr("%1").arg(pricePerEach));
    pricesPerEach->setStyleSheet("border: none; font-size:16px;");

    QLabel* totPrice = new QLabel(tr("%1").arg(totalPrice));
    totPrice->setStyleSheet("border: none; font-size:16px;");

    Delete_button.push_back(new QPushButton(QString::fromUtf8("حذف")));
    layout->addWidget(names);
    layout->addWidget(quantities);
    layout->addWidget(pricesPerEach);
    layout->addWidget(totPrice);
    layout->addWidget(Delete_button.back());
    layout->setAlignment(Qt::AlignTop);
    Delete_button.back()->setObjectName("btnName_1");
    Delete_button.back()->setCursor(Qt::PointingHandCursor);
    cartVerticalLayout->addWidget(frame);
    TotalBalanceForOperation += totalPrice;

    priceBefore->setText(QString::number(TotalBalanceForOperation));
    priceAfter->setText(QString::number(TotalBalanceForOperation));

    QWidget* scrollWidget = cartScrollArea->widget();
    QVBoxLayout* scrollLayout = qobject_cast<QVBoxLayout*>(scrollWidget->layout());

    if (!scrollLayout) {
        // Create a new layout if one doesn't exist
        scrollLayout = new QVBoxLayout(scrollWidget);
        scrollWidget->setLayout(scrollLayout);
    }

    QSpacerItem* spacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);
    scrollLayout->insertItem(0, spacer);
    scrollLayout->insertWidget(1, frame);

    connect(Delete_button.back(), &QPushButton::clicked, [this, btn = Delete_button.back(), totalPrice, names, quantity, priceBefore, priceAfter,
        checkButton, phoneNumberField]() {
        Delete_On_Click(btn, totalPrice, names->text(), quantity, priceBefore, priceAfter,
            checkButton, phoneNumberField);
    });
    frame->setObjectName("CartFrame");
    QString commonInternalStyle = 
    "QLabel { color: #1A2E23; font-weight: bold; font-size: 14px; border: none; background: transparent; }"
    "QPushButton { "
    "  background-color: #1E5C3A; "
    "  color: #FAFAF6; "
    "  border-radius: 6px; "
    "  font-weight: bold; "
    "  padding: 4px 8px; "
    "  font-size: 13px; "
    "}"
    "QPushButton::hover { background-color: #16432A; }";

if (i % 2 == 0) {
    frame->setStyleSheet(
        "#cartItem {"
        "  background-color: #F5F2EA;" // Darker beige
        "  border: 1.5px solid #C8B89A;"
        "  border-radius: 8px;"
        "  margin: 5px;"
        "}" + commonInternalStyle
    );
} else {
    frame->setStyleSheet(
        "#cartItem {"
        "  background-color: #FAFAF6;" // Lighter cream
        "  border: 1.5px solid #C8B89A;"
        "  border-radius: 8px;"
        "  margin: 5px;"
        "}" + commonInternalStyle
    );
}

    i++;

    // Add a spacer at the end of the layout to prevent the last item from sticking to the top
    QSpacerItem* bottomSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Expanding);
    scrollLayout->addItem(bottomSpacer);

    MappingLayout.insert(Delete_button.back(), frame);
    QList<QVariant> values;
    if (myHash.contains(name)) {
        values = myHash[name];
        values[0] = values[0].toInt() + quantity;
        values[1] = values[1].toFloat() + totalPrice;
        myHash[name] = values;
    }
    else {
        values << quantity << totalPrice;
        myHash.insert(name, values);
    }
}

char cashRegisterSystem::updateType(char type) {
    return  (type == '-') ? '+' : '-';
}

void cashRegisterSystem::printReceipt(QLabel* priceAfter, QLabel* priceBefore) {
    QPrinter printer(QPrinter::HighResolution);
    printer.setPrinterName("My Printer");

    // QPageSize pageSize(QSizeF(160, 100), QPageSize::Millimeter, "Custom 80x160");
    // QPageLayout pageLayout(pageSize, QPageLayout::Portrait, QMarginsF(0, 0, 0, 0)); // create a page layout
    // printer.setPageLayout(pageLayout); // set the page layout for the printer

    float Discount = abs((1 - (priceAfter->text().toFloat() / priceBefore->text().toFloat())) * 100);
    QDateTime currentDateTime = QDateTime::currentDateTime();

    QPrintDialog dialog(&printer, this);
    if (dialog.exec() == QDialog::Accepted) {

        QString header =
            "<body style = 'text-align: center'; >"
            "<h1>TITO`S Coffee</h1>"
            "<p>+20 11 1648 0658 </p>"
            "<p>العنوان: 208ط شارع البوابة التانية القديمه بجوار جزارة الهضبة حدايق الاهرام</p>"
            "<br>"
            "_______________________________________";
            // "<body style = 'text-align: center'; >"
            // "<h1>Ali Baba!</h1>"
            // "<p>+20 10 9226 2446 </p>"
            // "<p>3 Taha Hussein El yamama Zamalek Center</p>"
            // "<br>"
            // "_______________________________________";

        QString body = "";

        QHash<QString, QList<QVariant>>::iterator it;
        for (it = myHash.begin(); it != myHash.end(); ++it) {
            QString key = it.key();
            QList<QVariant> value = it.value();
            body += "<p> x" + value.at(0).toString() + "  " + key + "      " + value.at(1).toString() + "EGP</p>";
        }
        QString price_with_discount_on =
            "<p>Before Discount: " + priceBefore->text() + "EGP </p>"
            "<p>Discount: " + QString::number(Discount) + " % </p>"
            "<p>After Discount:" + priceAfter->text() + "EGP </p>";
        QString price_with_discount_off =
            "<p>Total Price: " + priceBefore->text() + "EGP </p>";

        QString price = (priceAfter->text() == priceBefore->text()) ? price_with_discount_off : price_with_discount_on;
        QString tail = "_______________________________________"
            + price +
            "<p> " + currentDateTime.date().toString() + " " + currentDateTime.time().toString() + " </p>"
            "<h3>Thanks for ordering!</h3>"
            "</body>";

        m_ui->receipt->insertHtml(header + body + tail);

        m_ui->receipt->setAlignment(Qt::AlignCenter);
        m_ui->receipt->print(&printer);
        m_ui->receipt->clear();
    }
}

void cashRegisterSystem::goMakeAccount(const QString phoneNumber) {
    QMessageBox msgBox;
    msgBox.setText("No customer found with this phone number.");
    msgBox.setIcon(QMessageBox::Warning);
    msgBox.setStandardButtons(QMessageBox::Close | QMessageBox::Ok);
    msgBox.setDefaultButton(QMessageBox::Close);
    int ret = msgBox.exec();
    if (ret == QMessageBox::Ok) {
        m_ui->formsStackedWidget->setCurrentIndex(3);
        m_ui->new_customer_phone->setText(phoneNumber);
    }
}
