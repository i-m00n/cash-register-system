#include "cashRegisterSystem.h"

void cashRegisterSystem::on_Search_btn_clicked()
{
    m_ui->tableView->model()->removeRows(0, m_ui->tableView->model()->rowCount());
    search();
}

void cashRegisterSystem::search()
{
    phonesearch = m_ui->phoneSearch->text().toStdString();
    namesearch = m_ui->nameSearch->text().toStdString();
    rank = m_ui->ranksearch->currentIndex();
    sqlite3_stmt* stmt;
    int rc = sqlite3_open("mydatabase.db", &m_ProductsDB);
    if (rc != SQLITE_OK) {
        QMessageBox::warning(this, "oh no", "Cannot open database");
        sqlite3_close(m_ProductsDB);
    }
    string ss = "SELECT * FROM customers WHERE 1=1";
    if (!namesearch.empty()) {
        ss += " AND name LIKE '%" + namesearch + "%'";
    }
    if (!phonesearch.empty()) {
        ss += " AND phone_number LIKE '%" + phonesearch + "%'";
    }
    if (rank != NULL) {
        if (rank == 2) {
            ss += " AND class = 'عميل مهم'";
        }
        else if (rank == 3) {
            ss += " AND class = 'طالب'";
        }else if (rank == 1) {
            ss += " AND class = 'عميل عادي'";
        }
    }
    QString query = QString::fromStdString(ss);
    rc = sqlite3_prepare_v2(m_ProductsDB, query.toUtf8().constData(), -1, &stmt, NULL);

    if (rc != SQLITE_OK) {
        QMessageBox::warning(this, "oh no", query);
        sqlite3_finalize(stmt);
        sqlite3_close(m_ProductsDB);
    }

    QStandardItemModel* model = new QStandardItemModel(this);
    model->setHorizontalHeaderLabels({ "الفئة", "اجمالي المدفوع", "رقم الهاتف", "الاسم" });
    while (sqlite3_step(stmt) == SQLITE_ROW) {
        const char* name = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 0));
        const char* phone_number = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 1));
        float total_paid = sqlite3_column_double(stmt, 2);
        const char* customerClass = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 3));

        QList<QStandardItem*> items;
        items.append(new QStandardItem(QString(customerClass)));
        items.append(new QStandardItem(QString::number(total_paid)));
        items.append(new QStandardItem(QString(phone_number)));
        items.append(new QStandardItem(QString(name)));

        for (int i = 0; i < items.count(); ++i) {
            // Set the Qt::ItemIsEditable flag to false for each item
            items.at(i)->setFlags(items.at(i)->flags() & ~Qt::ItemIsEditable);
            items.at(i)->setTextAlignment(Qt::AlignRight | Qt::AlignVCenter);
        }   
        model->appendRow(items);
    }

    sqlite3_finalize(stmt);
    sqlite3_close(m_ProductsDB);

    m_ui->tableView->setModel(model);
    m_ui->tableView->horizontalHeader()->setDefaultAlignment(Qt::AlignRight);
    m_ui->tableView->horizontalHeader()->setStretchLastSection(true);
    m_ui->tableView->verticalHeader()->setDefaultSectionSize(35);
}
