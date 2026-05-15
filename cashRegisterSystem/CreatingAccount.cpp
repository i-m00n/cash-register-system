#include "cashRegisterSystem.h"

void cashRegisterSystem::on_add_new_clicked()
{
    Database db("mydatabase.db");
    QString newName = m_ui->new_customer_name->text();
    string newName1 = newName.toStdString();
    QString newPhone = m_ui->new_customer_phone->text();
    string newPhone1 = newPhone.toStdString();
    int newClassIndex = m_ui->class_box->currentIndex();
    string newClass = "عميل عادي";

    if (newClassIndex == 1) {
        newClass = "عميل مهم"; // 
    }
    else if (newClassIndex == 2) {
        newClass = "طالب"; //
    }
    if (newName.isEmpty() || newPhone.isEmpty()) {
        QMessageBox::information(this, "الحالة ", "عميلة خاطئة ");
    }
    else {
        db.insertCustomerRows(newName1, newPhone1, 0, newClass);
        QMessageBox::information(this, "الحالة ", "عميلة ناجحة ");
        m_ui->new_customer_name->clear();
        m_ui->new_customer_phone->clear();
    }
    m_ui->class_box->setCurrentIndex(0);
}

void cashRegisterSystem::on_remove_customer_clicked()
{
    Database db("mydatabase.db");
    string Items_Names = m_ui->new_customer_phone->text().toUtf8().constData();
    db.DeleteCustomerRow(Items_Names);

    QMessageBox::information(this,"الحالة","تم الحذف بنجاح");

    m_ui->new_customer_phone->clear();

    db.~Database();

    m_ui->class_box->setCurrentIndex(0);
}
