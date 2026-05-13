#include "cashRegisterSystem.h"

void cashRegisterSystem::on_main_menu_clicked()
{
    if (isAdmin)
        m_ui->formsStackedWidget->setCurrentIndex(5);
    else
        m_ui->formsStackedWidget->setCurrentIndex(1);
}

void cashRegisterSystem::on_product_menu_clicked()
{
    generateProductsTable();
    GenrateTypesForCombo();
    m_ui->formsStackedWidget->setCurrentIndex(4);
}

void cashRegisterSystem::on_customers_menu_clicked() {
    search();
    m_ui->formsStackedWidget->setCurrentIndex(3);
}

void cashRegisterSystem::on_logout_clicked() {

    m_ui->nav_frame->setHidden(true);

    if (isAdmin) {
        DeleteAll(m_ui->admin_price_before, m_ui->admin_price_after, m_ui->admin_check_discount, m_ui->admin_phone_number, m_ui->admin_cart_contents);
        m_ui->formsStackedWidget->setCurrentIndex(0);
    }
    else {
        DeleteAll(m_ui->user_price_before, m_ui->user_price_after, m_ui->user_check_discount, m_ui->user_phone_number, m_ui->user_cart_contents);
        m_ui->formsStackedWidget->setCurrentIndex(0);
    }
}

void cashRegisterSystem::on_go_to_admin_form_clicked() {
    m_ui->formsStackedWidget->setCurrentIndex(2);
    m_ui->opType->setCurrentIndex(0);
}

void cashRegisterSystem::on_go_to_sales_preview_user_clicked() {
    m_ui->formsStackedWidget->setCurrentIndex(8);
    m_ui->opType_user->setCurrentIndex(0);
}