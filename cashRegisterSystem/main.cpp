#include "cashRegisterSystem.h"
#include "database.h"
#include <QtWidgets/QApplication>
#include <QFile>

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    QFile styleFile("titos_theme.qss");
    if (styleFile.open(QFile::ReadOnly)) {
        a.setStyleSheet(styleFile.readAll());
        styleFile.close();
    }
    cashRegisterSystem w;
    Database* db = new Database("mydatabase.db");
    db->initialize(); 
    db->DeleteProdRow("");
    w.show();

    return a.exec();
}