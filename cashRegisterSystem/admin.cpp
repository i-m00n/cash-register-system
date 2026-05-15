#include "cashRegisterSystem.h"
#include <QDebug>

void cashRegisterSystem::on_add_item_clicked() {
    if (m_ui->item_name_item->text() == "" || m_ui->item_price_item->text() == "" || m_ui->item_quantity_item->text() == "") {
        QMessageBox::warning(this,QString::fromUtf8("warning"),QString::fromUtf8("برجاء ادخال البيانات كاملة"));
        return;
    }

    Database db("mydatabase.db");
    string Items_Names = m_ui->item_name_item->text().toUtf8().constData();
    string Items_Prices = m_ui->item_price_item->text().toUtf8().constData();
    int Quantity = m_ui->item_quantity_item->text().toInt();
    QString typeQString = m_ui->item_type_item->currentText();
    string type = typeQString.toUtf8().constData();   
    db.insertProdRows(Items_Names, Items_Prices, Quantity, type);
    m_ui->item_name_quantity->addItem(QString::fromUtf8(Items_Names.c_str()));
    m_ui->item_name_price->addItem(QString::fromUtf8(Items_Names.c_str()));
	QMessageBox msg;
	msg.setText("عملية ناجحة");
	msg.exec();
	m_ui->item_name_item->clear();
	m_ui->item_price_item->clear();
	m_ui->item_quantity_item->clear();
    m_ui->item_type_item->setCurrentIndex(0);

    db.~Database();

    m_AdminProductIsUpdated = true;
    m_UserProductIsUpdated = true;
}

void cashRegisterSystem::on_remove_item_clicked() {
    if (m_ui->item_name_item->text() == "") {
        QMessageBox::warning(this, QString::fromUtf8("warning"), QString::fromUtf8("برجاء ادخال البيانات كاملة"));
        return;
    }

    Database db("mydatabase.db");
    QString Items_Names = m_ui->item_name_item->text();
    db.DeleteProdRow(Items_Names.toUtf8().constData());
    int index = m_ui->item_name_quantity->findText(Items_Names); // find the index of the item
    int index2 = m_ui->item_name_price->findText(Items_Names); // find the index of the item
    if (index != -1 && index2 != -1)
    {
        m_ui->item_name_quantity->removeItem(index); // remove the item by index
        m_ui->item_name_price->removeItem(index2); // remove the item by index
    }
    QMessageBox msg;
    msg.setText("تم الحذف بنجاح");
    msg.exec();
    m_ui->item_name_item->clear();

    db.~Database();

    m_AdminProductIsUpdated = true;
    m_UserProductIsUpdated = true;
}

void cashRegisterSystem::on_add_category_clicked() {
    if (m_ui->category_name->text() == "") {
        QMessageBox::warning(this, QString::fromUtf8("warning"), QString::fromUtf8("برجاء ادخال البيانات كاملة"));
        return;
    }

    const QString categoryName = m_ui->category_name->text();

    // Open the "categories.txt" file in append mode
    QFile file("categories.txt");
    if (!file.open(QIODevice::Append | QIODevice::Text))
        return;

    // Create a QTextStream object to write to the file
    QTextStream out(&file);

    // ADD THIS LINE:
    out.setCodec("UTF-8");

    // Append the category name to the file followed by a new line character
    out << categoryName << "\n";

    // Close the file
    file.close();

    // Clear the categories lists
    m_ui->admin_categories_list->clear();
    m_ui->user_categories_list->clear();

    // Set the flags for updated product lists
    m_AdminProductIsUpdated = true;
    m_UserProductIsUpdated = true;

    // Clear the input field for category name
    m_ui->category_name->clear();

    // Update categories combo box to edit its items
    m_ui->item_type_item->addItem(categoryName);

    // Clear const_catigories
    const_categories.clear();
}

void cashRegisterSystem::on_remove_category_clicked() {
    if (m_ui->category_name->text() == "") {
        QMessageBox::warning(this, QString::fromUtf8("warning"), QString::fromUtf8("برجاء ادخال البيانات كاملة"));
        return;
    }

    const QString categoryName = m_ui->category_name->text();

    // Open the file for reading and writing
    QFile file("categories.txt");
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text)) {
        QMessageBox::warning(this, QString::fromUtf8("open file error"), QString::fromUtf8("couldn't open categories file"));
        return;
    }

    // Create a temporary file
    QFile tempFile("TEMPcategories.txt");
    if (!tempFile.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::warning(this, QString::fromUtf8("open file error"), QString::fromUtf8("couldn't open TEMPcategories file"));
        file.close();
        return;
    }

    // Set up QTextStream for reading from the original file
    QTextStream in(&file);

    // Set up QTextStream for writing to the temporary file
    QTextStream out(&tempFile);

    // Read and process each line from the original file
    while (!in.atEnd()) {
        QString line = in.readLine();
        if (line != categoryName) {
            // Write the line to the temporary file if it doesn't match the line to delete
            out << line << "\n";
        }
    }

    // Close both files
    file.close();
    tempFile.close();

    // Remove the original file
    QFile::remove("categories.txt");

    // Rename the temporary file to the original file name
    tempFile.rename("categories.txt");

    // Clear the categories lists
    m_ui->admin_categories_list->clear();
    m_ui->user_categories_list->clear();

    // Set the flags for updated product lists
    m_AdminProductIsUpdated = true;
    m_UserProductIsUpdated = true;

    // Clear the input field for category name
    m_ui->category_name->clear();

    // Update categories combo box to edit its items
    int index = m_ui->item_type_item->findText(categoryName); // find the index of the item
    if (index != -1)
    {
        m_ui->item_type_item->removeItem(index); // remove the item by index
    }

    // Clear const_catigories
    const_categories.clear();
}

void cashRegisterSystem::on_add_quantity_clicked() {
    if (m_ui->item_quantity_quantity->text() == "") {
        QMessageBox::warning(this, QString::fromUtf8("warning"), QString::fromUtf8("برجاء ادخال البيانات كاملة"));
        return;
    }

    Database db("mydatabase.db");
    string item_name = m_ui->item_name_quantity->currentText().toUtf8().constData();
    int item_Quantity = m_ui->item_quantity_quantity->text().toInt();
    db.updateProductQuantity(item_name, item_Quantity,'+');
    QMessageBox msg;
    msg.setText(QString::fromUtf8("عملية ناجحة"));
    msg.exec();

    m_ui->item_name_quantity->setCurrentIndex(0);
    m_ui->item_quantity_quantity->clear();

    db.~Database();

    m_AdminProductIsUpdated = true;
    m_UserProductIsUpdated = true;
}

void cashRegisterSystem::on_remove_quantity_clicked() {
    if (m_ui->item_quantity_quantity->text() == "") {
        QMessageBox::warning(this, QString::fromUtf8("warning"), QString::fromUtf8("برجاء ادخال البيانات كاملة"));
        return;
    }

    Database db("mydatabase.db");
    string item_name = m_ui->item_name_quantity->currentText().toUtf8().constData();
    int item_Quantity = m_ui->item_quantity_quantity->text().toInt();
    db.updateProductQuantity(item_name, item_Quantity, '-');
    QMessageBox msg;
    msg.setText(QString::fromUtf8("عملية ناجحة"));
    msg.exec();

    m_ui->item_quantity_quantity->clear();
    m_ui->item_name_quantity->setCurrentIndex(0);

    m_AdminProductIsUpdated = true;
    m_UserProductIsUpdated = true;
}

void cashRegisterSystem::on_edit_price_clicked() {
    if (m_ui->item_price_price->text() == "") {
        QMessageBox::warning(this, QString::fromUtf8("warning"), QString::fromUtf8("برجاء ادخال البيانات كاملة"));
        return;
    }

    Database db("mydatabase.db");
    string item_name = m_ui->item_name_price->currentText().toUtf8().constData();
    string item_price = m_ui->item_price_price->text().toUtf8().constData();
    db.editProductPrice(item_name, item_price);
    QMessageBox msg;
    msg.setText(QString::fromUtf8("عملية ناجحة"));
    msg.exec();

    m_ui->item_name_price->setCurrentIndex(0);
    m_ui->item_price_price->clear();

    db.~Database();

    m_AdminProductIsUpdated = true;
    m_UserProductIsUpdated = true;
}

void cashRegisterSystem::Show_Sell_window_Admin() {
    sellOperation.clear();
    Show_window("sell", m_ui->sell_operations_contents,m_ui->sell_VLayout,m_ui->opType, m_ui->date_search_from, m_ui->date_search_to);
}

void cashRegisterSystem::Show_retrieve_window_Admin() {
    retrieveOperation.clear();
    Show_window("retrieve", m_ui->return_operations_contents,m_ui->return_VLayout, m_ui->opType, m_ui->date_search_from, m_ui->date_search_to);
}

void cashRegisterSystem::Update_total_Admin() {
    Show_total_window(m_ui->total_VLayout, m_ui->day_total_income, m_ui->total_operations_contents);
}

void cashRegisterSystem::Show_Sell_window_User() {
    sellOperation.clear();
    Show_window("sell", m_ui->sell_operations_contents_user, m_ui->sell_VLayout_user, m_ui->opType_user, m_ui->dateEdit_user, m_ui->dateEdit_user);
}

void cashRegisterSystem::Show_retrieve_window_User() {
    retrieveOperation.clear();
    Show_window("retrieve", m_ui->return_operations_contents_user, m_ui->return_VLayout_user, m_ui->opType_user, m_ui->dateEdit_user, m_ui->dateEdit_user);
}

void cashRegisterSystem::Update_total_User() {
    Show_total_window(m_ui->total_VLayout_user, m_ui->day_total_income_user,m_ui->total_operations_contents_user);
}

void cashRegisterSystem::Show_total_window(QVBoxLayout* VLayout, QTextBrowser* day_total_income, QWidget* total_operations_contents) {
    clear_vertical_layout(VLayout);

    int quantity = 0;
    float prices = 0;
    int index = 0;
    float TotalPrice = 0;

    // if exists in (sell and retrieve) OR (sell only)
    QHashIterator<QList<QString>, QList<QVariant>> i(sellOperation);
    while (i.hasNext()) {
        QFrame* f = new QFrame();
        QHBoxLayout* hLayout = new QHBoxLayout(f);
        i.next();
        if (retrieveOperation.contains(i.key())) {
            QList<QVariant> updatedValue = i.value();
            quantity = updatedValue.at(0).toInt() - retrieveOperation.value(i.key()).at(0).toInt();
            prices = updatedValue.at(1).toFloat() - retrieveOperation.value(i.key()).at(1).toFloat();
        }
        else {
            quantity = i.value().at(0).toInt();
            prices = i.value().at(1).toFloat();
        }
        f->setObjectName("TotalFrame");

        if (index % 2 == 1){
            f->setStyleSheet(
            "#TotalFrame{"
            "background-color:#F5F2EA;"
            "border:1px solid #C8B89A;"
            "border-radius:10px;"
            "margin:5px;"
            "padding:6px;"
            "}"
            "QLabel{"
            "font-weight:bold;"
            "font-size:16px;"
            "color:black;"
            "background:transparent;"
            "border:none;"
            "}"
        );}

        if (index % 2 == 0){
            f->setStyleSheet(
                "#TotalFrame{"
                "background-color:#FAFAF6;"
                "border:1px solid #C8B89A;"
                "border-radius:10px;"
                "margin:5px;"
                "padding:6px;"
                "}"
                "QLabel{"
                "font-weight:bold;"
                "font-size:16px;"
                "color:black;"
                "background:transparent;"
                "border:none;"
                "}"
        );}

        QLabel* name = new QLabel(i.key().at(0));
        QLabel* opType = new QLabel(i.key().at(1));
        QLabel* PriceLabel = new QLabel(QString::fromUtf8("السعر : ") + QString::number(prices));
        QLabel* Quantitylabel = new QLabel(QString::fromUtf8("الكمية :")+QString::number(quantity));
        name->setStyleSheet("border:none;");
        opType->setStyleSheet("border:none;");
        Quantitylabel->setStyleSheet("border:none;");
        PriceLabel->setStyleSheet("border:none;");
        hLayout->addWidget(Quantitylabel);
        hLayout->addWidget(PriceLabel);
        hLayout->addWidget(opType);
        hLayout->addWidget(name);
        VLayout->addWidget(f);
        TotalPrice += prices;
        index++;
    }
    index = 0;

    // if exists in (retrieve only)
    QHashIterator<QList<QString>, QList<QVariant>> j(retrieveOperation);
    while (j.hasNext())
    {
        QFrame* f = new QFrame();
        QHBoxLayout* hLayout = new QHBoxLayout(f);
        j.next();
        
        if (!sellOperation.contains(j.key()))
        {
            quantity = j.value().at(0).toInt();
            prices = j.value().at(1).toFloat();
            QLabel* name = new QLabel(j.key().at(0));
            QLabel* opType = new QLabel(j.key().at(1));
            QLabel* PriceLabel = new QLabel(QString::fromUtf8("السعر : ") + QString::number(prices));
            QLabel* Quantitylabel = new QLabel(QString::fromUtf8("الكمية : ") + QString::number(quantity));
            name->setStyleSheet("border:none;");
            Quantitylabel->setStyleSheet("border:none;");
            PriceLabel->setStyleSheet("border:none;");
            if (index % 2 == 1) f->setStyleSheet("QFrame{background-color:rgba(184, 184, 184, 255)}");
            hLayout->addWidget(Quantitylabel);
            hLayout->addWidget(PriceLabel);
            hLayout->addWidget(opType);
            hLayout->addWidget(name);
            VLayout->addWidget(f);
            TotalPrice -= prices;
            index++;
        }
    }

    day_total_income->setStyleSheet("font-size:16px; font-weight:bold");
    day_total_income->setText(QString::number(TotalPrice));
        if (total_operations_contents->layout() == nullptr) {
            total_operations_contents->setLayout(VLayout);  
    }
}

void cashRegisterSystem::Show_window(string type, QWidget* scrollContents, QVBoxLayout* VLayout, QComboBox* opType, QDateEdit* date_search_from, QDateEdit* date_search_to) {
    clear_vertical_layout(VLayout);

    sqlite3_stmt* stmt;
    int rc = sqlite3_open("mydatabase.db", &m_OperationsDB);
    std::stringstream ss;
    ss << "select * from Operations where type = '"<<type<<"'";

    m_date_from = date_search_from->date();
    m_date_to = date_search_to->date();

    string date_from_str = m_date_from.toString("yyyy-MM-dd").toStdString();
    string date_to_str = m_date_to.toString("yyyy-MM-dd").toStdString();

    ss.str(ss.str() + " AND date >= '" + date_from_str + "' AND date <= '" + date_to_str + "'");

    Optype = opType->currentIndex();
    if (Optype != 0) {
        if (Optype == 1) {
            ss.str(ss.str() + " AND operation_type = 'طلب عادي'");
        }else if (Optype == 2) {
            ss.str(ss.str() + " AND operation_type = 'طلب اونلاين'");
        }else if (Optype == 3) {
            ss.str(ss.str() + " AND operation_type = 'طلب جملة'");
        }
    }

    QString query = QString::fromStdString(ss.str());
    rc = sqlite3_prepare_v2(m_OperationsDB, query.toUtf8(), -1, &stmt, NULL);

    int i = 0;
    while (sqlite3_step(stmt) == SQLITE_ROW) {
        QFrame* f = new QFrame();
        QHBoxLayout* hLayout = new QHBoxLayout(f);
        string name = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 0));
        int Quantity_Sell = sqlite3_column_int(stmt, 1);
        string price = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 2));
        string opType = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 4));
        float p = stof(price);
        QLabel* names = new QLabel(QString("%1").arg(QString::fromUtf8(name.c_str())));
        QLabel* opTypes = new QLabel(QString("%1").arg(QString::fromUtf8(opType.c_str())));
        QLabel* Quantities = new QLabel(QString("الكمية : %1 ").arg(to_string(Quantity_Sell).c_str()));
        QLabel* pricesLabel = new QLabel(QString("السعر : %1").arg(QString::number(p)));
        f->setObjectName("OpFrame");
        if (i % 2 == 1){
            f->setStyleSheet(
                "#OpFrame{"
                "background-color:#F5F2EA;"
                "border:1px solid #C8B89A;"
                "border-radius:10px;"
                "margin:5px;"
                "padding:6px;"
                "}"
                "QLabel{"
                "font-weight:bold;"
                "font-size:16px;"
                "color:black;"
                "background:transparent;"
                "border:none;"
                "}"
            );}

        if (i % 2 == 0){
            f->setStyleSheet(
                "#OpFrame{"
                "background-color:#FAFAF6;"
                "border:1px solid #C8B89A;"
                "border-radius:10px;"
                "margin:5px;"
                "padding:6px;"
                "}"
                "QLabel{"
                "font-weight:bold;"
                "font-size:16px;"
                "color:black;"
                "background:transparent;"
                "border:none;"
                "}"
            );}
            
        hLayout->addWidget(Quantities);
        hLayout->addWidget(pricesLabel);
        hLayout->addWidget(opTypes);
        hLayout->addWidget(names);
        VLayout->addWidget(f);
        i++;
        QList<QString>key;
        key << QString::fromUtf8(name.c_str()) << QString::fromUtf8(opType.c_str());
        if (type == "sell") {
            InsertInHashOperations(sellOperation, key, p, Quantity_Sell);
        }
        else {
            InsertInHashOperations(retrieveOperation, key, p, Quantity_Sell);
        }
    }
    if (scrollContents->layout() == nullptr) {
        scrollContents->setLayout(VLayout);
    }
    sqlite3_finalize(stmt);
    sqlite3_close(m_OperationsDB);
}

void cashRegisterSystem::InsertInHashOperations(QHash<QList<QString>, QList<QVariant>> &Operation, QList<QString>key,float price,int Quantity_Sell) {
    QList<QVariant> values;

    if (Operation.contains(key)) {
        values = Operation[key];
        values[0] = values[0].toInt() + Quantity_Sell;
        values[1] = values[1].toFloat() + price;
        Operation[key] = values;
    }
    else {
        values << Quantity_Sell << price;
        Operation.insert(key, values);
    }
}

void cashRegisterSystem::Add_Item_names() {
    sqlite3* db;
    int rc = sqlite3_open("mydatabase.db", &db);
    if (rc == SQLITE_OK) {
        sqlite3_stmt* stmt;
        const char* query = "SELECT name FROM Products";
        rc = sqlite3_prepare_v2(db, query, -1, &stmt, NULL);

        if (rc == SQLITE_OK) {
            m_ui->item_name_quantity->clear();
            m_ui->item_name_price->clear();

            while (sqlite3_step(stmt) == SQLITE_ROW) {
                const char* value = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 0));
                m_ui->item_name_quantity->addItem(QString::fromUtf8(value));
                m_ui->item_name_price->addItem(QString::fromUtf8(value));
            }
            sqlite3_finalize(stmt);
        }
        sqlite3_close(db);
    }
}

void cashRegisterSystem::onPriceComboIndexChanged(int index) {
    QString selectedProductName = m_ui->item_name_price->itemText(index);
    Database db("mydatabase.db");
    string price = db.selectProductPrice(selectedProductName.toStdString());
    m_ui->item_price_price->setText(QString::fromUtf8(price.c_str()));
    db.~Database();
}

void cashRegisterSystem::on_OPsearch_clicked()
{
    Show_Sell_window_Admin();
    Show_retrieve_window_Admin();
    Update_total_Admin();
}

void cashRegisterSystem::on_OPsearch_user_clicked() {
    Show_Sell_window_User();
    Show_retrieve_window_User();
    Update_total_User();
}

void cashRegisterSystem::on_back_to_main_clicked() {
    if (isAdmin)
        m_ui->formsStackedWidget->setCurrentIndex(5);
    else
        m_ui->formsStackedWidget->setCurrentIndex(1);
}

void cashRegisterSystem::clear_vertical_layout(QVBoxLayout* VLayout) {
    QLayout* layout = VLayout->layout();
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

void cashRegisterSystem::fillCategories() {
    m_ui->item_type_item->clear();
    for (auto category : const_categories) {
        m_ui->item_type_item->addItem(category->text());
    }
}

void cashRegisterSystem::on_edit_admin_clicked() {
    m_ui->formsStackedWidget->setCurrentIndex(7);
}

void cashRegisterSystem::on_delete_all_products_clicked() {
    QMessageBox msgBox;
    msgBox.setText(u8"متأكد من انك تريد حذف جميع المنتجات؟");
    QPushButton* sureButton = msgBox.addButton(u8"نعم متأكد", QMessageBox::AcceptRole);
    QPushButton* cancelButton = msgBox.addButton(u8"إلغاء", QMessageBox::RejectRole);
    int result = msgBox.exec();
    if (result == QMessageBox::AcceptRole) {
        backupDatabase();
        Database db("mydatabase.db");
        db.DeleteAllProdRow();
        db.~Database();

        QMessageBox::information(this, u8"عملية ناجحة", u8"تم حذف جميع المنتجات");

        m_AdminProductIsUpdated = true;
        m_UserProductIsUpdated = true;
    }
    else if (result == QMessageBox::RejectRole) {
        msgBox.close();
    }
}

void cashRegisterSystem::backupDatabase() {
    // Source database file
    QString sourceDatabasePath = "mydatabase.db";

    // Destination backup folder
    QString backupFolderPath = "backup/";

    // Ensure the backup folder exists
    QDir().mkpath(backupFolderPath);

    // Create a unique backup file name (e.g., based on current date/time)
    QString backupFileName = QString("backup_%1.db").arg(QDateTime::currentDateTime().toString("yyyyMMdd_HHmmss"));

    // Full path of the backup file
    QString backupFilePath = QDir(backupFolderPath).filePath(backupFileName);

    // Copy the database file to the backup folder
    if (QFile::copy(sourceDatabasePath, backupFilePath)) {
        qDebug() << "Database backup successful. Backup file: " << backupFilePath;
    }
    else {
        qDebug() << "Database backup failed.";
    }
}