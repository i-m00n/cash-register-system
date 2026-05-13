#include "cashRegisterSystem.h"

float cashRegisterSystem::on_admin_check_discount_clicked(float price) {
    return check_discount(m_ui->admin_price_after, m_ui->admin_price_before, m_ui->admin_check_discount, m_ui->admin_phone_number, price);
}

void cashRegisterSystem::on_admin_cancel_order_clicked()
{
    DeleteAll(m_ui->admin_price_before, m_ui->admin_price_after, m_ui->admin_check_discount, m_ui->admin_phone_number, m_ui->admin_cart_contents);
}

void cashRegisterSystem::confirmPayOperation_admin(char operationType) {
    const QString phoneNumber = m_ui->admin_phone_number->text();
    Database* db = new Database("mydatabase.db");
    QString customerClass = "";
    if (db->checkPhoneNumber(phoneNumber.toStdString(), customerClass)) {
        printReceipt(m_ui->admin_price_after, m_ui->admin_price_before);
        payOperation(operationType, m_ui->admin_price_before, m_ui->admin_price_after, m_ui->admin_check_discount, m_ui->admin_phone_number, m_ui->admin_cart_contents);
    }
    else {
        // No match found in the database
        goMakeAccount(phoneNumber);
    }
}

void cashRegisterSystem::on_admin_retrieve_clicked()
{
    confirmPayOperation_admin('-');
}

void cashRegisterSystem::on_admin_sell_clicked()
{
    confirmPayOperation_admin('+');
}