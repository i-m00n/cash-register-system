#include "cashRegisterSystem.h"

void cashRegisterSystem::on_searchprobuctsBTN_clicked()
{
    m_ui->prodtable->model()->removeRows(0, m_ui->prodtable->model()->rowCount());
    generateProductsTable();
}

void cashRegisterSystem::on_BackFromProductsBTN_clicked()
{
    if (isAdmin)
        m_ui->formsStackedWidget->setCurrentIndex(5);
    else
        m_ui->formsStackedWidget->setCurrentIndex(1);
}

void cashRegisterSystem::generateProductsTable()
{
    productNameSearch = m_ui->ProdNameSearch->text().toStdString();
    ProductType = m_ui->ProdTypeSearch->currentIndex();
    sqlite3_stmt* stmt;
    int rc = sqlite3_open("mydatabase.db", &m_ProductsDB);
    if (rc != SQLITE_OK) {
        QMessageBox::warning(this, "oh no", "Cannot open database");
        sqlite3_close(m_ProductsDB);
    }
    string ss = "SELECT * FROM Products WHERE 1=1";
    if (!productNameSearch.empty()) {
        ss += " AND name LIKE '%" + productNameSearch + "%'";
    }
    if (ProductType != 0) {
        ss += " AND type = '" + m_ui->ProdTypeSearch->itemText(ProductType).toStdString() + "'";
    }
    QString query = QString::fromStdString(ss);
    rc = sqlite3_prepare_v2(m_ProductsDB, query.toUtf8().constData(), -1, &stmt, NULL);

    if (rc != SQLITE_OK) {
        QMessageBox::warning(this, "oh no", query);
        sqlite3_finalize(stmt);
        sqlite3_close(m_ProductsDB);
    }
    QStandardItemModel* model = new QStandardItemModel(this);
    model->setHorizontalHeaderLabels({ QString::fromUtf8("النوع"), QString::fromUtf8("الكمية"), QString::fromUtf8("السعر"), QString::fromUtf8("الاسم") });
    while (sqlite3_step(stmt) == SQLITE_ROW) {
        const char* name = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 0));
        const char* price = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 2));
        int quantity = sqlite3_column_int(stmt, 1);
        const char* type = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 3));

        QList<QStandardItem*> items;
        items.append(new QStandardItem(QString(type)));
        items.append(new QStandardItem(QString::number(quantity)));
        items.append(new QStandardItem(QString(price)));
        items.append(new QStandardItem(QString(name)));

        for (int i = 0; i < items.count(); i++) {
            // Set the Qt::ItemIsEditable flag to false for each item
            items.at(i)->setFlags(items.at(i)->flags() & ~Qt::ItemIsEditable);
            items.at(i)->setTextAlignment(Qt::AlignRight | Qt::AlignVCenter);
        }
        model->appendRow(items);
    }

    sqlite3_finalize(stmt);
    sqlite3_close(m_ProductsDB);

    m_ui->prodtable->setModel(model);

    m_ui->prodtable->horizontalHeader()->setDefaultAlignment(Qt::AlignRight);
    m_ui->prodtable->horizontalHeader()->setStretchLastSection(true);

    m_ui->prodtable->verticalHeader()->setDefaultSectionSize(35);
}

void cashRegisterSystem::GenrateTypesForCombo()
{
    sqlite3_stmt* stmt;
    int rc = sqlite3_open("mydatabase.db", &m_ProductsDB);
    if (rc != SQLITE_OK) {
        QMessageBox::warning(this, "oh no", "Cannot open database");
        sqlite3_close(m_ProductsDB);
    }
    string ss = "SELECT DISTINCT type FROM Products";

    // Prepare the statement
    rc = sqlite3_prepare_v2(m_ProductsDB, ss.c_str(), -1, &stmt, NULL);

    if (rc == SQLITE_OK) {
        m_ui->ProdTypeSearch->clear();
        QString all = QString::fromUtf8("الكل");
        m_ui->ProdTypeSearch->addItem(all, QVariant(all));
        // Iterate over the rows and add each type to the combobox
        while (sqlite3_step(stmt) == SQLITE_ROW) {
            const char* type = (const char*)sqlite3_column_text(stmt, 0);
            QString qtype = QString::fromUtf8(type);
            m_ui->ProdTypeSearch->addItem(qtype, QVariant(qtype));
        }

        // Finalize the statement
        sqlite3_finalize(stmt);
    }
    sqlite3_close(m_ProductsDB);
}
