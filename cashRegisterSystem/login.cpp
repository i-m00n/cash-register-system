#include "cashRegisterSystem.h"
void cashRegisterSystem::on_login_btn_clicked()
{
    QString name = cashRegisterSystem::m_ui->username_field->text();
    QString password = m_ui->password_field->text();
    bool goAdmin = true;
    if (name == "admin" && password == "13579") {
        QMessageBox::information(this, "Login", "Welcome Admin!");
        isAdmin = true;
        m_ui->formsStackedWidget->setCurrentIndex(5);
        goAdmin = false;
    }
    else if (name == "user" && password == "55555")
    {
        QMessageBox::information(this, "Login", "Welcome USER!");
        isAdmin = false;
        m_ui->formsStackedWidget->setCurrentIndex(1);
        goAdmin = true;
    }
    else {
        m_ui->username_field->setText("");
        m_ui->password_field->setText("");
        return;
    }
    m_ui->nav_frame->setHidden(false);
    m_ui->go_to_admin_form->setHidden(goAdmin);
    m_ui->go_to_sales_preview_user->setHidden(isAdmin);

    m_ui->username_field->setText("");
    m_ui->password_field->setText("");
}