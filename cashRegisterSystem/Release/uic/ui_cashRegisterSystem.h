/********************************************************************************
** Form generated from reading UI file 'cashRegisterSystem.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CASHREGISTERSYSTEM_H
#define UI_CASHREGISTERSYSTEM_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cashRegisterSystem2Class
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_10;
    QFrame *nav_frame;
    QHBoxLayout *horizontalLayout;
    QPushButton *main_menu;
    QPushButton *product_menu;
    QPushButton *customers_menu;
    QPushButton *go_to_admin_form;
    QPushButton *go_to_sales_preview_user;
    QSpacerItem *horizontalSpacer;
    QPushButton *logout;
    QStackedWidget *formsStackedWidget;
    QWidget *login;
    QVBoxLayout *verticalLayout_3;
    QFrame *Login_frame;
    QGridLayout *gridLayout_5;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QFrame *gridFrame;
    QGridLayout *gridLayout_11;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_3;
    QGridLayout *gridLayout_8;
    QPushButton *login_btn;
    QLineEdit *username_field;
    QLineEdit *password_field;
    QPushButton *username_label;
    QPushButton *passwordlabel;
    QSpacerItem *horizontalSpacer_5;
    QWidget *user_main_form;
    QGridLayout *gridLayout_9;
    QFrame *user_main_frame;
    QGridLayout *gridLayout;
    QFrame *user_products_frame;
    QGridLayout *gridLayout_7;
    QScrollArea *user_products_scroll_area;
    QWidget *user_products_scroll_area_content;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *user_productsVerticalLayout;
    QFrame *user_cart_frame;
    QGridLayout *gridLayout_2;
    QGridLayout *user_gridLayout_7;
    QPushButton *user_phone_number_label;
    QLineEdit *user_phone_number;
    QScrollArea *user_cartScrollArea;
    QWidget *user_cart_contents;
    QWidget *layoutWidget;
    QVBoxLayout *user_cartVerticalLayout;
    QHBoxLayout *user_horizontalLayout_4;
    QPushButton *user_check_discount;
    QLabel *user_price_after;
    QLabel *user_price_after_const;
    QLabel *user_price_before;
    QLabel *user_price_before_const;
    QHBoxLayout *user_horizontalLayout_5;
    QPushButton *user_cancel_order;
    QPushButton *user_retrieve;
    QPushButton *user_sell;
    QFrame *user_categories_list_frame;
    QGridLayout *gridLayout_4;
    QListWidget *user_categories_list;
    QWidget *admin_form;
    QGridLayout *gridLayout_20;
    QFrame *frame;
    QGridLayout *gridLayout_21;
    QFrame *frame_4;
    QGridLayout *gridLayout_44;
    QLabel *label_23;
    QFrame *return_operations_frame;
    QGridLayout *gridLayout_47;
    QScrollArea *scrollArea_6;
    QWidget *return_operations_contents;
    QGridLayout *gridLayout_48;
    QVBoxLayout *return_VLayout;
    QLabel *label_25;
    QLabel *label_24;
    QFrame *sell_operations_frame;
    QGridLayout *gridLayout_45;
    QScrollArea *scrollArea_5;
    QWidget *sell_operations_contents;
    QGridLayout *gridLayout_46;
    QVBoxLayout *sell_VLayout;
    QFrame *total_operations_frame;
    QGridLayout *gridLayout_49;
    QScrollArea *scrollArea_7;
    QWidget *total_operations_contents;
    QGridLayout *gridLayout_50;
    QVBoxLayout *total_VLayout;
    QVBoxLayout *verticalLayout_9;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_14;
    QComboBox *opType;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_4;
    QDateEdit *date_search_from;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_5;
    QDateEdit *date_search_to;
    QLabel *label_5;
    QPushButton *OPsearch;
    QSpacerItem *verticalSpacer_6;
    QFrame *Total_of_the_day;
    QGridLayout *gridLayout_18;
    QTextBrowser *day_total_income;
    QLabel *label_26;
    QSpacerItem *horizontalSpacer_22;
    QPushButton *edit_admin;
    QWidget *customers_form;
    QGridLayout *gridLayout_33;
    QFrame *customers_frame;
    QGridLayout *gridLayout_32;
    QFrame *frame_2;
    QGridLayout *gridLayout_29;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *Search_btn;
    QSpacerItem *horizontalSpacer_14;
    QComboBox *ranksearch;
    QLabel *label_33;
    QLineEdit *phoneSearch;
    QLabel *label_34;
    QLineEdit *nameSearch;
    QLabel *label_35;
    QFrame *add_customer_frame;
    QGridLayout *gridLayout_31;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *remove_customer;
    QPushButton *add_new;
    QSpacerItem *horizontalSpacer_15;
    QComboBox *class_box;
    QLabel *classLable;
    QLineEdit *new_customer_phone;
    QLabel *phoneLable;
    QLineEdit *new_customer_name;
    QLabel *nameLable;
    QTableView *tableView;
    QWidget *products_form;
    QGridLayout *gridLayout_37;
    QFrame *search_products_frame;
    QGridLayout *gridLayout_38;
    QFrame *frame_3;
    QGridLayout *gridLayout_35;
    QGridLayout *gridLayout_36;
    QSpacerItem *horizontalSpacer_17;
    QLabel *ProdNameLabel;
    QLineEdit *ProdNameSearch;
    QComboBox *ProdTypeSearch;
    QPushButton *searchprobuctsBTN;
    QLabel *ProdTypeLabel;
    QSpacerItem *horizontalSpacer_18;
    QTableView *prodtable;
    QWidget *admin_main_form;
    QGridLayout *gridLayout_17;
    QFrame *admin_main_frame;
    QGridLayout *gridLayout_3;
    QFrame *admin_products_frame;
    QGridLayout *gridLayout_13;
    QScrollArea *admin_products_scroll_area;
    QWidget *admin_products_scroll_area_content;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *admin_productsVerticalLayout;
    QFrame *admin_cart_frame;
    QGridLayout *gridLayout_15;
    QGridLayout *gridLayout_16;
    QComboBox *admin_order_type_cmb;
    QPushButton *admin_phone_number_label;
    QLabel *admin_discount_label;
    QDoubleSpinBox *discount_spinbox;
    QLineEdit *admin_phone_number;
    QScrollArea *admin_cartScrollArea;
    QWidget *admin_cart_contents;
    QWidget *layoutWidget1;
    QVBoxLayout *admin_cartVerticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *admin_check_discount;
    QLabel *admin_price_after;
    QLabel *admin_price_after_const;
    QLabel *admin_price_before;
    QLabel *admin_price_before_const;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *admin_cancel_order;
    QPushButton *admin_retrieve;
    QPushButton *admin_sell;
    QFrame *admin_categories_list_frame;
    QGridLayout *gridLayout_12;
    QListWidget *admin_categories_list;
    QWidget *page;
    QGridLayout *gridLayout_14;
    QTextBrowser *receipt;
    QWidget *page_2;
    QGridLayout *gridLayout_6;
    QFrame *control_frame;
    QGridLayout *gridLayout_52;
    QFrame *controllingProducts;
    QGridLayout *gridLayout_55;
    QLabel *label_10;
    QLabel *label_15;
    QSpacerItem *horizontalSpacer_25;
    QLabel *label_16;
    QComboBox *item_type_item;
    QLabel *label_17;
    QPushButton *add_item;
    QLabel *label_18;
    QPushButton *remove_item;
    QLineEdit *item_name_item;
    QLineEdit *item_price_item;
    QLineEdit *item_quantity_item;
    QFrame *controllingQuantity;
    QGridLayout *gridLayout_54;
    QComboBox *item_name_quantity;
    QPushButton *add_quantity;
    QPushButton *remove_quantity;
    QSpacerItem *horizontalSpacer_24;
    QLabel *label_22;
    QLineEdit *item_quantity_quantity;
    QLabel *label_31;
    QLabel *label_9;
    QFrame *controllingCategories;
    QGridLayout *gridLayout_19;
    QPushButton *add_category;
    QLabel *label_19;
    QLabel *label_32;
    QSpacerItem *horizontalSpacer_7;
    QLineEdit *category_name;
    QPushButton *remove_category;
    QFrame *controllingPrice;
    QGridLayout *gridLayout_53;
    QLabel *label_30;
    QLabel *label_29;
    QComboBox *item_name_price;
    QSpacerItem *horizontalSpacer_23;
    QLabel *label_13;
    QLineEdit *item_price_price;
    QPushButton *edit_price;
    QFrame *critical_options;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *delete_all_products;
    QWidget *user_sales_preview;
    QGridLayout *gridLayout_28;
    QFrame *frame_5;
    QGridLayout *gridLayout_24;
    QFrame *frame_6;
    QGridLayout *gridLayout_76;
    QLabel *label_48;
    QFrame *return_operations_frame_user;
    QGridLayout *gridLayout_77;
    QScrollArea *scrollArea_17;
    QWidget *return_operations_contents_user;
    QGridLayout *gridLayout_78;
    QVBoxLayout *return_VLayout_user;
    QLabel *label_49;
    QLabel *label_50;
    QFrame *sell_operations_frame_user;
    QGridLayout *gridLayout_79;
    QScrollArea *scrollArea_18;
    QWidget *sell_operations_contents_user;
    QGridLayout *gridLayout_80;
    QVBoxLayout *sell_VLayout_user;
    QFrame *total_operations_frame_user;
    QGridLayout *gridLayout_81;
    QScrollArea *scrollArea_19;
    QWidget *total_operations_contents_user;
    QGridLayout *gridLayout_82;
    QVBoxLayout *total_VLayout_user;
    QVBoxLayout *verticalLayout_12;
    QSpacerItem *verticalSpacer_11;
    QLabel *label_51;
    QComboBox *opType_user;
    QDateEdit *dateEdit_user;
    QPushButton *OPsearch_user;
    QSpacerItem *verticalSpacer_12;
    QFrame *Total_of_the_day_user;
    QGridLayout *gridLayout_27;
    QTextBrowser *day_total_income_user;
    QLabel *label_55;
    QSpacerItem *horizontalSpacer_user;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *cashRegisterSystem2Class)
    {
        if (cashRegisterSystem2Class->objectName().isEmpty())
            cashRegisterSystem2Class->setObjectName("cashRegisterSystem2Class");
        cashRegisterSystem2Class->resize(1366, 823);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cashRegisterSystem2Class->sizePolicy().hasHeightForWidth());
        cashRegisterSystem2Class->setSizePolicy(sizePolicy);
        cashRegisterSystem2Class->setMaximumSize(QSize(16777215, 16777215));
        centralWidget = new QWidget(cashRegisterSystem2Class);
        centralWidget->setObjectName("centralWidget");
        centralWidget->setStyleSheet(QString::fromUtf8("#centralWidget{background-color:rgba(185,191,193,0.3);\n"
"}\n"
""));
        gridLayout_10 = new QGridLayout(centralWidget);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName("gridLayout_10");
        nav_frame = new QFrame(centralWidget);
        nav_frame->setObjectName("nav_frame");
        nav_frame->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"font-size:15px;\n"
"font-weight:bold;\n"
"color:rgb(97, 90, 84);\n"
"}\n"
"QPushButton::hover{\n"
"color:black;\n"
"border-bottom:1px  solid black;\n"
"}\n"
"QFrame{\n"
"border-radius:3px;\n"
"background-color: rgba(248, 170, 112,0.7);\n"
"}"));
        nav_frame->setFrameShape(QFrame::StyledPanel);
        nav_frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(nav_frame);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName("horizontalLayout");
        main_menu = new QPushButton(nav_frame);
        main_menu->setObjectName("main_menu");
        main_menu->setMinimumSize(QSize(110, 30));
        main_menu->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(main_menu);

        product_menu = new QPushButton(nav_frame);
        product_menu->setObjectName("product_menu");
        product_menu->setMinimumSize(QSize(110, 30));
        product_menu->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(product_menu);

        customers_menu = new QPushButton(nav_frame);
        customers_menu->setObjectName("customers_menu");
        customers_menu->setMinimumSize(QSize(110, 30));
        customers_menu->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(customers_menu);

        go_to_admin_form = new QPushButton(nav_frame);
        go_to_admin_form->setObjectName("go_to_admin_form");
        go_to_admin_form->setMinimumSize(QSize(110, 30));
        go_to_admin_form->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(go_to_admin_form);

        go_to_sales_preview_user = new QPushButton(nav_frame);
        go_to_sales_preview_user->setObjectName("go_to_sales_preview_user");
        go_to_sales_preview_user->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(go_to_sales_preview_user);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        logout = new QPushButton(nav_frame);
        logout->setObjectName("logout");
        logout->setMinimumSize(QSize(110, 30));
        logout->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(logout);


        gridLayout_10->addWidget(nav_frame, 0, 0, 1, 1);

        formsStackedWidget = new QStackedWidget(centralWidget);
        formsStackedWidget->setObjectName("formsStackedWidget");
        formsStackedWidget->setCursor(QCursor(Qt::ArrowCursor));
        formsStackedWidget->setStyleSheet(QString::fromUtf8(""));
        login = new QWidget();
        login->setObjectName("login");
        login->setMaximumSize(QSize(1366, 768));
        verticalLayout_3 = new QVBoxLayout(login);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName("verticalLayout_3");
        Login_frame = new QFrame(login);
        Login_frame->setObjectName("Login_frame");
        Login_frame->setCursor(QCursor(Qt::ArrowCursor));
        Login_frame->setStyleSheet(QString::fromUtf8("#login_btn{\n"
"border-radius:5px;\n"
"font-size:18px;\n"
"background:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #c8ab97, stop: 1 #e2d4c9);\n"
"color:#313131;\n"
"font-weight:bold;\n"
"margin:5px;\n"
"}\n"
"#login_btn::hover{\n"
"background-color:#e2d4c9;\n"
"}\n"
"#Login_frame{\n"
"background-image: url(:/cashRegisterSystem2/icons/Background.jpg);   \n"
" border-radius: 10px;\n"
"}\n"
"#username_field,#password_field{\n"
"border-bottom: 2px solid  #c8ab97;\n"
"border-radius:1px;\n"
"color:#958071;\n"
"font-size:16px;\n"
"font-weight:bold;\n"
"margin:0px 5px;\n"
"background:transparent;\n"
"}\n"
"QLabel {\n"
"font-size:18px;\n"
"font-weight:bold;\n"
"background-color:black;\n"
"border-radius:0;\n"
"border:none;\n"
"background:transparent;\n"
"margin-right:5px;\n"
"background-image: url(:/logo/logo/username.jpg);\n"
"width:16px;\n"
"height:16px;\n"
"}\n"
"QGridLayout{\n"
"border-radius:2px;\n"
"}\n"
"#gridFrame{\n"
"background-color:rgba(185,191,193,0.5);\n"
"b"
                        "order-radius:50%;\n"
"}\n"
""));
        Login_frame->setFrameShape(QFrame::StyledPanel);
        Login_frame->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(Login_frame);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName("gridLayout_5");
        horizontalSpacer_3 = new QSpacerItem(670, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_3, 2, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer, 0, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_2, 3, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_2, 2, 0, 1, 1);

        gridFrame = new QFrame(Login_frame);
        gridFrame->setObjectName("gridFrame");
        gridFrame->setMinimumSize(QSize(400, 200));
        gridFrame->setStyleSheet(QString::fromUtf8(""));
        gridFrame->setFrameShape(QFrame::StyledPanel);
        gridFrame->setFrameShadow(QFrame::Raised);
        gridLayout_11 = new QGridLayout(gridFrame);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName("gridLayout_11");
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_4, 1, 2, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_11->addItem(verticalSpacer_4, 0, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_11->addItem(verticalSpacer_3, 2, 1, 1, 1);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setSpacing(6);
        gridLayout_8->setObjectName("gridLayout_8");
        login_btn = new QPushButton(gridFrame);
        login_btn->setObjectName("login_btn");
        login_btn->setMinimumSize(QSize(0, 40));
        login_btn->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_8->addWidget(login_btn, 3, 0, 1, 2);

        username_field = new QLineEdit(gridFrame);
        username_field->setObjectName("username_field");
        username_field->setMinimumSize(QSize(196, 40));
        username_field->setMaximumSize(QSize(300, 16777215));

        gridLayout_8->addWidget(username_field, 1, 0, 1, 1);

        password_field = new QLineEdit(gridFrame);
        password_field->setObjectName("password_field");
        password_field->setMinimumSize(QSize(196, 40));
        password_field->setMaximumSize(QSize(300, 16777215));

        gridLayout_8->addWidget(password_field, 2, 0, 1, 1);

        username_label = new QPushButton(gridFrame);
        username_label->setObjectName("username_label");
        username_label->setMaximumSize(QSize(32, 16777215));
        username_label->setStyleSheet(QString::fromUtf8("background:transparent;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/cashRegisterSystem2/icons/user (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/cashRegisterSystem2/icons/profile.png"), QSize(), QIcon::Normal, QIcon::On);
        username_label->setIcon(icon);
        username_label->setIconSize(QSize(40, 40));

        gridLayout_8->addWidget(username_label, 1, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        passwordlabel = new QPushButton(gridFrame);
        passwordlabel->setObjectName("passwordlabel");
        passwordlabel->setStyleSheet(QString::fromUtf8("border:none;\n"
"background:transparent;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/cashRegisterSystem2/icons/padlock.png"), QSize(), QIcon::Normal, QIcon::Off);
        passwordlabel->setIcon(icon1);
        passwordlabel->setIconSize(QSize(40, 40));

        gridLayout_8->addWidget(passwordlabel, 2, 1, 1, 1);


        gridLayout_11->addLayout(gridLayout_8, 1, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_5, 1, 0, 1, 1);


        gridLayout_5->addWidget(gridFrame, 2, 2, 1, 1, Qt::AlignTop);


        verticalLayout_3->addWidget(Login_frame);

        formsStackedWidget->addWidget(login);
        user_main_form = new QWidget();
        user_main_form->setObjectName("user_main_form");
        user_main_form->setStyleSheet(QString::fromUtf8(""));
        gridLayout_9 = new QGridLayout(user_main_form);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName("gridLayout_9");
        user_main_frame = new QFrame(user_main_form);
        user_main_frame->setObjectName("user_main_frame");
        user_main_frame->setStyleSheet(QString::fromUtf8("QListWidget{\n"
"border: 2px solid rgba(200,171,151,0.5);\n"
"background-color:rgba(240,240,240,0.7);\n"
"border-radius:10px;\n"
"}\n"
"QScrollArea{\n"
"border:2px solid  #e2d4c9;\n"
"border-radius:5px;\n"
"background-color:rgba(245,250,245,0.5);\n"
"}\n"
"#user_phone_number_label{\n"
"border:none;\n"
"}\n"
"QLineEdit{\n"
"background:transparent;\n"
"border-radius:2px;\n"
"border-bottom:2px solid rgba(200,171,151,0.5);\n"
"letter-spacing: 2px;\n"
"color:rgba(120, 91, 71, 1);\n"
"font-size:14px;\n"
"font-weight:bold;\n"
"\n"
"}\n"
"#user_check_discount{\n"
"padding:2px;\n"
"border:1px solid rgba(120, 91, 71, 1);\n"
"border-radius:5px;\n"
"}\n"
"#user_check_discount::hover{\n"
"background-color: rgba(200,171,151,0.5);\n"
"border:none;\n"
"\n"
"}\n"
"#user_sell{\n"
"font-size:16px;\n"
"background-color:rgba(185,191,193,1);\n"
"color:#323638;\n"
"border-radius:10px;\n"
"font-weight:bold;\n"
"padding:5px;\n"
"}\n"
"#user_retrieve{\n"
"font-size:16px;\n"
"background-color:rgba(185,191,193,1);\n"
"color:#323638;\n"
""
                        "border-radius:10px;\n"
"font-weight:bold;\n"
"padding:5px;\n"
"}\n"
"#user_retrieve::hover{\n"
"background-color: rgba(200,171,151,0.5);\n"
"}\n"
"#user_sell::hover{\n"
"background-color: rgba(200,171,151,0.5);\n"
"}\n"
"#user_cancel_order{\n"
"padding:2px;\n"
"border:none;\n"
"border:1px solid rgba(120, 91, 71, 1);\n"
"border-radius:5px;\n"
"\n"
"}\n"
"#user_cancel_order::hover{\n"
"background-color: rgba(200,171,151,0.5);\n"
"border:none;\n"
"}\n"
"QListWidget::item { \n"
"margin:5px;\n"
"padding:5px;\n"
" }\n"
"QListWidget::item::hover{\n"
"background-color:rgba(200,171,151,0.5);\n"
"border-radius:5px;\n"
"}\n"
"QListWidget::item:selected{\n"
"background-color:rgba(200,171,151,1);\n"
"color:black;\n"
"}\n"
""));
        user_main_frame->setFrameShape(QFrame::StyledPanel);
        user_main_frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(user_main_frame);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        user_products_frame = new QFrame(user_main_frame);
        user_products_frame->setObjectName("user_products_frame");
        user_products_frame->setMinimumSize(QSize(300, 0));
        user_products_frame->setFrameShape(QFrame::StyledPanel);
        user_products_frame->setFrameShadow(QFrame::Raised);
        gridLayout_7 = new QGridLayout(user_products_frame);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName("gridLayout_7");
        user_products_scroll_area = new QScrollArea(user_products_frame);
        user_products_scroll_area->setObjectName("user_products_scroll_area");
        user_products_scroll_area->setStyleSheet(QString::fromUtf8(""));
        user_products_scroll_area->setWidgetResizable(true);
        user_products_scroll_area_content = new QWidget();
        user_products_scroll_area_content->setObjectName("user_products_scroll_area_content");
        user_products_scroll_area_content->setGeometry(QRect(0, 0, 96, 26));
        verticalLayout_2 = new QVBoxLayout(user_products_scroll_area_content);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName("verticalLayout_2");
        user_productsVerticalLayout = new QVBoxLayout();
        user_productsVerticalLayout->setSpacing(6);
        user_productsVerticalLayout->setObjectName("user_productsVerticalLayout");

        verticalLayout_2->addLayout(user_productsVerticalLayout);

        user_products_scroll_area->setWidget(user_products_scroll_area_content);

        gridLayout_7->addWidget(user_products_scroll_area, 0, 0, 1, 1);


        gridLayout->addWidget(user_products_frame, 0, 1, 1, 1);

        user_cart_frame = new QFrame(user_main_frame);
        user_cart_frame->setObjectName("user_cart_frame");
        user_cart_frame->setMinimumSize(QSize(350, 0));
        user_cart_frame->setMaximumSize(QSize(300, 16777215));
        user_cart_frame->setFrameShape(QFrame::StyledPanel);
        user_cart_frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(user_cart_frame);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName("gridLayout_2");
        user_gridLayout_7 = new QGridLayout();
        user_gridLayout_7->setSpacing(6);
        user_gridLayout_7->setObjectName("user_gridLayout_7");
        user_phone_number_label = new QPushButton(user_cart_frame);
        user_phone_number_label->setObjectName("user_phone_number_label");
        user_phone_number_label->setMaximumSize(QSize(35, 16777215));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("icons/buying-on-smartphone.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QString::fromUtf8(":/cashRegisterSystem2/Background.jpg"), QSize(), QIcon::Normal, QIcon::On);
        user_phone_number_label->setIcon(icon2);

        user_gridLayout_7->addWidget(user_phone_number_label, 0, 2, 1, 1);

        user_phone_number = new QLineEdit(user_cart_frame);
        user_phone_number->setObjectName("user_phone_number");
        user_phone_number->setMinimumSize(QSize(0, 30));

        user_gridLayout_7->addWidget(user_phone_number, 0, 0, 1, 2);


        gridLayout_2->addLayout(user_gridLayout_7, 1, 0, 1, 2);

        user_cartScrollArea = new QScrollArea(user_cart_frame);
        user_cartScrollArea->setObjectName("user_cartScrollArea");
        user_cartScrollArea->setMinimumSize(QSize(280, 0));
        user_cartScrollArea->setMaximumSize(QSize(16777215, 550));
        user_cartScrollArea->setStyleSheet(QString::fromUtf8(""));
        user_cartScrollArea->setWidgetResizable(true);
        user_cart_contents = new QWidget();
        user_cart_contents->setObjectName("user_cart_contents");
        user_cart_contents->setGeometry(QRect(0, 0, 276, 26));
        user_cart_contents->setMinimumSize(QSize(0, 0));
        layoutWidget = new QWidget(user_cart_contents);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(9, 19, 311, 511));
        user_cartVerticalLayout = new QVBoxLayout(layoutWidget);
        user_cartVerticalLayout->setSpacing(6);
        user_cartVerticalLayout->setContentsMargins(11, 11, 11, 11);
        user_cartVerticalLayout->setObjectName("user_cartVerticalLayout");
        user_cartVerticalLayout->setContentsMargins(0, 0, 0, 0);
        user_cartScrollArea->setWidget(user_cart_contents);

        gridLayout_2->addWidget(user_cartScrollArea, 0, 0, 1, 2);

        user_horizontalLayout_4 = new QHBoxLayout();
        user_horizontalLayout_4->setSpacing(6);
        user_horizontalLayout_4->setObjectName("user_horizontalLayout_4");
        user_check_discount = new QPushButton(user_cart_frame);
        user_check_discount->setObjectName("user_check_discount");
        user_check_discount->setMinimumSize(QSize(32, 32));
        user_check_discount->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("icons/coupon.png"), QSize(), QIcon::Normal, QIcon::Off);
        user_check_discount->setIcon(icon3);

        user_horizontalLayout_4->addWidget(user_check_discount);

        user_price_after = new QLabel(user_cart_frame);
        user_price_after->setObjectName("user_price_after");
        user_price_after->setStyleSheet(QString::fromUtf8("border: none;\n"
"color:rgba(120, 91, 71, 1);\n"
"font-weight: bold;\n"
"font-size: 14px;"));

        user_horizontalLayout_4->addWidget(user_price_after);

        user_price_after_const = new QLabel(user_cart_frame);
        user_price_after_const->setObjectName("user_price_after_const");
        user_price_after_const->setStyleSheet(QString::fromUtf8("border: none;\n"
"font-weight: bold;\n"
"font-size: 16px;\n"
"color:rgba(120, 91, 71, 1)\n"
"\n"
"\n"
"\n"
"\n"
""));

        user_horizontalLayout_4->addWidget(user_price_after_const);

        user_price_before = new QLabel(user_cart_frame);
        user_price_before->setObjectName("user_price_before");
        user_price_before->setStyleSheet(QString::fromUtf8("border: none;\n"
"font-size: 14px;"));

        user_horizontalLayout_4->addWidget(user_price_before);

        user_price_before_const = new QLabel(user_cart_frame);
        user_price_before_const->setObjectName("user_price_before_const");
        user_price_before_const->setStyleSheet(QString::fromUtf8("border: none;\n"
"font-size: 16px;\n"
""));

        user_horizontalLayout_4->addWidget(user_price_before_const);


        gridLayout_2->addLayout(user_horizontalLayout_4, 2, 0, 1, 2);

        user_horizontalLayout_5 = new QHBoxLayout();
        user_horizontalLayout_5->setSpacing(6);
        user_horizontalLayout_5->setObjectName("user_horizontalLayout_5");
        user_cancel_order = new QPushButton(user_cart_frame);
        user_cancel_order->setObjectName("user_cancel_order");
        user_cancel_order->setMinimumSize(QSize(32, 32));
        user_cancel_order->setMaximumSize(QSize(30, 16777215));
        user_cancel_order->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("icons/empty-cart.png"), QSize(), QIcon::Normal, QIcon::Off);
        user_cancel_order->setIcon(icon4);

        user_horizontalLayout_5->addWidget(user_cancel_order);

        user_retrieve = new QPushButton(user_cart_frame);
        user_retrieve->setObjectName("user_retrieve");
        user_retrieve->setCursor(QCursor(Qt::PointingHandCursor));

        user_horizontalLayout_5->addWidget(user_retrieve);

        user_sell = new QPushButton(user_cart_frame);
        user_sell->setObjectName("user_sell");
        user_sell->setCursor(QCursor(Qt::PointingHandCursor));
        user_sell->setStyleSheet(QString::fromUtf8(""));

        user_horizontalLayout_5->addWidget(user_sell);


        gridLayout_2->addLayout(user_horizontalLayout_5, 3, 0, 1, 2);


        gridLayout->addWidget(user_cart_frame, 0, 0, 1, 1);

        user_categories_list_frame = new QFrame(user_main_frame);
        user_categories_list_frame->setObjectName("user_categories_list_frame");
        user_categories_list_frame->setMaximumSize(QSize(250, 16777215));
        user_categories_list_frame->setStyleSheet(QString::fromUtf8(""));
        user_categories_list_frame->setFrameShape(QFrame::StyledPanel);
        user_categories_list_frame->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(user_categories_list_frame);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName("gridLayout_4");
        user_categories_list = new QListWidget(user_categories_list_frame);
        user_categories_list->setObjectName("user_categories_list");
        user_categories_list->setLayoutDirection(Qt::LeftToRight);
        user_categories_list->setStyleSheet(QString::fromUtf8("font-size: 16px;"));

        gridLayout_4->addWidget(user_categories_list, 0, 0, 1, 1);


        gridLayout->addWidget(user_categories_list_frame, 0, 2, 1, 1);


        gridLayout_9->addWidget(user_main_frame, 0, 0, 1, 1);

        formsStackedWidget->addWidget(user_main_form);
        admin_form = new QWidget();
        admin_form->setObjectName("admin_form");
        gridLayout_20 = new QGridLayout(admin_form);
        gridLayout_20->setSpacing(6);
        gridLayout_20->setContentsMargins(11, 11, 11, 11);
        gridLayout_20->setObjectName("gridLayout_20");
        frame = new QFrame(admin_form);
        frame->setObjectName("frame");
        frame->setStyleSheet(QString::fromUtf8("#control_frame{\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #d9c4b6, stop: 1 #faf7f5);\n"
"border:none;\n"
"border-radius: 5px;\n"
"}\n"
"#opType{\n"
"padding:2px;\n"
"border:none;\n"
"border:1px solid rgba(120, 91, 71, 1);\n"
"border-radius:5px;\n"
"\n"
"}\n"
"#opType::hover{\n"
"background-color: rgba(200,171,151,0.5);\n"
"border:none;\n"
"}\n"
"#OPsearch{\n"
"font-size:14px;\n"
"background-color:rgba(185,191,193,1);\n"
"color:#323638;\n"
"border-radius:10px;\n"
"font-weight:bold;\n"
"padding:2px;\n"
"}\n"
"#OPsearch::hover{\n"
"background-color: rgba(200,171,151,0.5);\n"
"}\n"
"QComboBox::down-arrow{\n"
"image:url(:/cashRegisterSystem2/media/arrow-down.png);\n"
"color:rgba(120, 91, 71, 1);\n"
"border-radius:5px;\n"
"}\n"
"#date_search::down-arrow{\n"
"image:url(:/cashRegisterSystem2/media/arrow-down.png);\n"
"}\n"
"#date_search::hover{\n"
"background-color: rgba(200,171,151,0.5);\n"
"}\n"
"#date_search{\n"
"padding:2px;\n"
"border:none;\n"
""
                        "border:1px solid rgba(120, 91, 71, 1);\n"
"border-radius:5px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: rgba(200,171,151,0.5);\n"
"}\n"
"#day_total_income{\n"
"border:2px solid  #e2d4c9;\n"
"border-radius:5px;\n"
"background-color:rgba(245,250,245,0.5);\n"
"}\n"
"QPlainTextEdit,QLineEdit{\n"
"background:transparent;\n"
"border:none;\n"
"border-bottom:1px solid #474a4c ;\n"
"font-size:15px;\n"
"color:#474a4c;\n"
"}\n"
"QComboBox::down-arrow{\n"
"image:url(:/cashRegisterSystem2/media/arrow-down.png);\n"
"color:rgba(120, 91, 71, 1);\n"
"border-radius:5px;\n"
"}\n"
"QComboBox::down-arrow::hover{\n"
"border-radius:5px;\n"
"}\n"
"QComboBox::hover{\n"
"background-color: rgba(200,171,151,0.5);\n"
"border:none;\n"
"}\n"
"QComboBox{\n"
"background:transparent;\n"
"border:1px solid rgba(120, 91, 71, 1);\n"
"border-radius:5px;\n"
"padding:2px;\n"
"margin-bottom:5px;\n"
"}\n"
"\n"
"#controllingPrice{ \n"
"border: 1px solid #474747;\n"
"border-radius: 7px;\n"
"}\n"
"\n"
"#controllingQuantity{ \n"
"border: 1px"
                        " solid #474747;\n"
"border-radius: 7px;\n"
"}\n"
"\n"
"#controllingProducts{ \n"
"border: 1px solid #474747;\n"
"border-radius: 7px;\n"
"}\n"
"\n"
"#controllingCategories{ \n"
"border: 1px solid #474747;\n"
"border-radius: 7px;\n"
"}\n"
"\n"
"#categoryName{\n"
"background:transparent;\n"
"border:none;\n"
"border-bottom:1px solid #474a4c ;\n"
"font-size:15px;\n"
"color:#474a4c;\n"
"}\n"
"QPushButton{\n"
"font-size:14px;\n"
"background-color:rgba(185,191,193,1);\n"
"color:#323638;\n"
"border-radius:10px;\n"
"font-weight:bold;\n"
"padding:1px;\n"
"}\n"
"#add_quantity,#add_category,#add_item{\n"
"margin-bottom:2px;\n"
"}\n"
"label_2,label,label_3,label_12{\n"
"margin-bottom:5px;\n"
"}\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_21 = new QGridLayout(frame);
        gridLayout_21->setSpacing(6);
        gridLayout_21->setContentsMargins(11, 11, 11, 11);
        gridLayout_21->setObjectName("gridLayout_21");
        frame_4 = new QFrame(frame);
        frame_4->setObjectName("frame_4");
        frame_4->setMinimumSize(QSize(0, 0));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        gridLayout_44 = new QGridLayout(frame_4);
        gridLayout_44->setSpacing(6);
        gridLayout_44->setContentsMargins(11, 11, 11, 11);
        gridLayout_44->setObjectName("gridLayout_44");
        label_23 = new QLabel(frame_4);
        label_23->setObjectName("label_23");
        label_23->setStyleSheet(QString::fromUtf8("font-size: 18px;\n"
"font-weight: bold;\n"
"margin-right:5px;\n"
"color:rgba(120, 91, 71, 1)\n"
""));

        gridLayout_44->addWidget(label_23, 0, 2, 1, 1);

        return_operations_frame = new QFrame(frame_4);
        return_operations_frame->setObjectName("return_operations_frame");
        return_operations_frame->setStyleSheet(QString::fromUtf8("#scrollArea_6{\n"
"border:2px solid  #e2d4c9;\n"
"border-radius:5px;\n"
"background-color:rgba(245,250,245,0.5);\n"
"}\n"
""));
        return_operations_frame->setFrameShape(QFrame::StyledPanel);
        return_operations_frame->setFrameShadow(QFrame::Raised);
        gridLayout_47 = new QGridLayout(return_operations_frame);
        gridLayout_47->setSpacing(6);
        gridLayout_47->setContentsMargins(11, 11, 11, 11);
        gridLayout_47->setObjectName("gridLayout_47");
        scrollArea_6 = new QScrollArea(return_operations_frame);
        scrollArea_6->setObjectName("scrollArea_6");
        scrollArea_6->setWidgetResizable(true);
        return_operations_contents = new QWidget();
        return_operations_contents->setObjectName("return_operations_contents");
        return_operations_contents->setGeometry(QRect(0, 0, 96, 26));
        gridLayout_48 = new QGridLayout(return_operations_contents);
        gridLayout_48->setSpacing(6);
        gridLayout_48->setContentsMargins(11, 11, 11, 11);
        gridLayout_48->setObjectName("gridLayout_48");
        return_VLayout = new QVBoxLayout();
        return_VLayout->setSpacing(6);
        return_VLayout->setObjectName("return_VLayout");

        gridLayout_48->addLayout(return_VLayout, 0, 0, 1, 1);

        scrollArea_6->setWidget(return_operations_contents);

        gridLayout_47->addWidget(scrollArea_6, 0, 0, 1, 1);


        gridLayout_44->addWidget(return_operations_frame, 1, 1, 1, 1);

        label_25 = new QLabel(frame_4);
        label_25->setObjectName("label_25");
        label_25->setStyleSheet(QString::fromUtf8("font-size: 18px;\n"
"font-weight: bold;\n"
"margin-right:5px;\n"
"color:rgba(120, 91, 71, 1)\n"
""));

        gridLayout_44->addWidget(label_25, 0, 1, 1, 1);

        label_24 = new QLabel(frame_4);
        label_24->setObjectName("label_24");
        label_24->setStyleSheet(QString::fromUtf8("font-size: 18px;\n"
"font-weight: bold;\n"
"margin-right:5px;\n"
"color:rgba(120, 91, 71, 1)\n"
""));

        gridLayout_44->addWidget(label_24, 0, 0, 1, 1);

        sell_operations_frame = new QFrame(frame_4);
        sell_operations_frame->setObjectName("sell_operations_frame");
        sell_operations_frame->setStyleSheet(QString::fromUtf8("#scrollArea_5{\n"
"border:2px solid  #e2d4c9;\n"
"border-radius:5px;\n"
"background-color:rgba(245,250,245,0.5);\n"
"}\n"
""));
        sell_operations_frame->setFrameShape(QFrame::StyledPanel);
        sell_operations_frame->setFrameShadow(QFrame::Raised);
        gridLayout_45 = new QGridLayout(sell_operations_frame);
        gridLayout_45->setSpacing(6);
        gridLayout_45->setContentsMargins(11, 11, 11, 11);
        gridLayout_45->setObjectName("gridLayout_45");
        scrollArea_5 = new QScrollArea(sell_operations_frame);
        scrollArea_5->setObjectName("scrollArea_5");
        scrollArea_5->setWidgetResizable(true);
        sell_operations_contents = new QWidget();
        sell_operations_contents->setObjectName("sell_operations_contents");
        sell_operations_contents->setGeometry(QRect(0, 0, 96, 26));
        gridLayout_46 = new QGridLayout(sell_operations_contents);
        gridLayout_46->setSpacing(6);
        gridLayout_46->setContentsMargins(11, 11, 11, 11);
        gridLayout_46->setObjectName("gridLayout_46");
        sell_VLayout = new QVBoxLayout();
        sell_VLayout->setSpacing(6);
        sell_VLayout->setObjectName("sell_VLayout");

        gridLayout_46->addLayout(sell_VLayout, 0, 0, 1, 1);

        scrollArea_5->setWidget(sell_operations_contents);

        gridLayout_45->addWidget(scrollArea_5, 0, 0, 1, 1);


        gridLayout_44->addWidget(sell_operations_frame, 1, 2, 1, 1);

        total_operations_frame = new QFrame(frame_4);
        total_operations_frame->setObjectName("total_operations_frame");
        total_operations_frame->setStyleSheet(QString::fromUtf8("#scrollArea_7{\n"
"border:2px solid  #e2d4c9;\n"
"border-radius:5px;\n"
"background-color:rgba(245,250,245,0.5);\n"
"}\n"
""));
        total_operations_frame->setFrameShape(QFrame::StyledPanel);
        total_operations_frame->setFrameShadow(QFrame::Raised);
        gridLayout_49 = new QGridLayout(total_operations_frame);
        gridLayout_49->setSpacing(6);
        gridLayout_49->setContentsMargins(11, 11, 11, 11);
        gridLayout_49->setObjectName("gridLayout_49");
        scrollArea_7 = new QScrollArea(total_operations_frame);
        scrollArea_7->setObjectName("scrollArea_7");
        scrollArea_7->setWidgetResizable(true);
        total_operations_contents = new QWidget();
        total_operations_contents->setObjectName("total_operations_contents");
        total_operations_contents->setGeometry(QRect(0, 0, 96, 26));
        gridLayout_50 = new QGridLayout(total_operations_contents);
        gridLayout_50->setSpacing(6);
        gridLayout_50->setContentsMargins(11, 11, 11, 11);
        gridLayout_50->setObjectName("gridLayout_50");
        total_VLayout = new QVBoxLayout();
        total_VLayout->setSpacing(6);
        total_VLayout->setObjectName("total_VLayout");

        gridLayout_50->addLayout(total_VLayout, 0, 0, 1, 1);

        scrollArea_7->setWidget(total_operations_contents);

        gridLayout_49->addWidget(scrollArea_7, 0, 0, 1, 1);


        gridLayout_44->addWidget(total_operations_frame, 1, 0, 1, 1);


        gridLayout_21->addWidget(frame_4, 0, 0, 1, 1);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_5);

        label_14 = new QLabel(frame);
        label_14->setObjectName("label_14");
        label_14->setStyleSheet(QString::fromUtf8("margin: 3px;\n"
"font-size: 16px;"));

        verticalLayout_9->addWidget(label_14);

        opType = new QComboBox(frame);
        opType->addItem(QString());
        opType->addItem(QString());
        opType->addItem(QString());
        opType->addItem(QString());
        opType->setObjectName("opType");
        opType->setCursor(QCursor(Qt::PointingHandCursor));
        opType->setStyleSheet(QString::fromUtf8("height: 25px"));

        verticalLayout_9->addWidget(opType);

        label_11 = new QLabel(frame);
        label_11->setObjectName("label_11");
        label_11->setStyleSheet(QString::fromUtf8("margin: 3px;\n"
"font-size: 16px;"));

        verticalLayout_9->addWidget(label_11);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        date_search_from = new QDateEdit(frame);
        date_search_from->setObjectName("date_search_from");
        date_search_from->setCursor(QCursor(Qt::PointingHandCursor));
        date_search_from->setStyleSheet(QString::fromUtf8("height: 25px"));
        date_search_from->setCalendarPopup(true);
        date_search_from->setDate(QDate(2002, 10, 24));

        horizontalLayout_4->addWidget(date_search_from);

        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);


        verticalLayout_9->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        date_search_to = new QDateEdit(frame);
        date_search_to->setObjectName("date_search_to");
        date_search_to->setCursor(QCursor(Qt::PointingHandCursor));
        date_search_to->setStyleSheet(QString::fromUtf8("height: 25px"));
        date_search_to->setCalendarPopup(true);
        date_search_to->setDate(QDate(2002, 10, 24));

        horizontalLayout_5->addWidget(date_search_to);

        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");

        horizontalLayout_5->addWidget(label_5);


        verticalLayout_9->addLayout(horizontalLayout_5);

        OPsearch = new QPushButton(frame);
        OPsearch->setObjectName("OPsearch");
        OPsearch->setCursor(QCursor(Qt::PointingHandCursor));
        OPsearch->setStyleSheet(QString::fromUtf8("height: 30px;"));

        verticalLayout_9->addWidget(OPsearch);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_6);


        gridLayout_21->addLayout(verticalLayout_9, 0, 1, 1, 1);

        Total_of_the_day = new QFrame(frame);
        Total_of_the_day->setObjectName("Total_of_the_day");
        Total_of_the_day->setMaximumSize(QSize(16777215, 70));
        gridLayout_18 = new QGridLayout(Total_of_the_day);
        gridLayout_18->setSpacing(6);
        gridLayout_18->setContentsMargins(11, 11, 11, 11);
        gridLayout_18->setObjectName("gridLayout_18");
        day_total_income = new QTextBrowser(Total_of_the_day);
        day_total_income->setObjectName("day_total_income");
        day_total_income->setMinimumSize(QSize(160, 20));
        day_total_income->setMaximumSize(QSize(100, 40));
        day_total_income->setStyleSheet(QString::fromUtf8(""));

        gridLayout_18->addWidget(day_total_income, 1, 0, 1, 1);

        label_26 = new QLabel(Total_of_the_day);
        label_26->setObjectName("label_26");
        label_26->setMinimumSize(QSize(120, 0));
        label_26->setMaximumSize(QSize(120, 40));
        label_26->setStyleSheet(QString::fromUtf8("font-size: 18px;\n"
"font-weight: bold;\n"
"color:rgba(120, 91, 71, 1)\n"
""));

        gridLayout_18->addWidget(label_26, 1, 1, 1, 1);

        horizontalSpacer_22 = new QSpacerItem(40, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_18->addItem(horizontalSpacer_22, 1, 2, 1, 1);


        gridLayout_21->addWidget(Total_of_the_day, 1, 0, 1, 1);

        edit_admin = new QPushButton(frame);
        edit_admin->setObjectName("edit_admin");
        edit_admin->setMinimumSize(QSize(100, 0));
        edit_admin->setCursor(QCursor(Qt::PointingHandCursor));
        edit_admin->setStyleSheet(QString::fromUtf8("height: 30px;"));

        gridLayout_21->addWidget(edit_admin, 1, 1, 1, 1);


        gridLayout_20->addWidget(frame, 0, 0, 1, 1);

        formsStackedWidget->addWidget(admin_form);
        customers_form = new QWidget();
        customers_form->setObjectName("customers_form");
        gridLayout_33 = new QGridLayout(customers_form);
        gridLayout_33->setSpacing(6);
        gridLayout_33->setContentsMargins(11, 11, 11, 11);
        gridLayout_33->setObjectName("gridLayout_33");
        customers_frame = new QFrame(customers_form);
        customers_frame->setObjectName("customers_frame");
        customers_frame->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:16px;\n"
"font-weight:bold;\n"
"padding:2px;\n"
"}\n"
"QPushButton{\n"
"font-size:15px;\n"
"background-color:rgba(185,191,193,1);\n"
"color:#323638;\n"
"border-radius:10px;\n"
"font-weight:bold;\n"
"margin-left:5px;\n"
"padding:10px;\n"
"}\n"
"QPushButton::hover{\n"
"background-color: rgba(200,171,151,0.5);\n"
"}\n"
"#add_customer_frame{\n"
"border:1px solid black;\n"
"border-radius:10px;\n"
"background-color: rgba(200,171,151,0.5);\n"
"padding:10px 0px;\n"
"}\n"
"QLineEdit{\n"
"background:transparent;\n"
"border:none;\n"
"border-bottom:1px solid #323638 ;\n"
"font-size:15px;\n"
"color:#323638;\n"
"}\n"
"QComboBox{\n"
"padding:2px;\n"
"border-radius:2px;\n"
"font-size:15px;\n"
"}\n"
"\n"
"#tableView{\n"
"border-radius:10px;\n"
"border: 2px solid rgba(200,171,151,0.5);\n"
"background-color:rgba(245,250,245,0.5);\n"
"}\n"
"QComboBox::down-arrow{\n"
"image:url(:/cashRegisterSystem2/media/arrow-down.png);\n"
"color:rgba(120, 91, 71, 1);\n"
"border-radius:5px;\n"
"}\n"
"QComboBox::down-arrow::"
                        "hover{\n"
"border-radius:5px;\n"
"}\n"
"QComboBox::hover{\n"
"background-color: rgba(200,171,151,0.5);\n"
"border:none;\n"
"}\n"
"QComboBox{\n"
"background:transparent;\n"
"border:1px solid rgba(120, 91, 71, 1);\n"
"border-radius:5px;\n"
"padding:2px;\n"
"}\n"
"\n"
""));
        customers_frame->setFrameShape(QFrame::StyledPanel);
        customers_frame->setFrameShadow(QFrame::Raised);
        gridLayout_32 = new QGridLayout(customers_frame);
        gridLayout_32->setSpacing(6);
        gridLayout_32->setContentsMargins(11, 11, 11, 11);
        gridLayout_32->setObjectName("gridLayout_32");
        frame_2 = new QFrame(customers_frame);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_29 = new QGridLayout(frame_2);
        gridLayout_29->setSpacing(6);
        gridLayout_29->setContentsMargins(11, 11, 11, 11);
        gridLayout_29->setObjectName("gridLayout_29");
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        Search_btn = new QPushButton(frame_2);
        Search_btn->setObjectName("Search_btn");
        Search_btn->setMinimumSize(QSize(200, 0));
        Search_btn->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_12->addWidget(Search_btn);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_14);

        ranksearch = new QComboBox(frame_2);
        ranksearch->addItem(QString());
        ranksearch->addItem(QString());
        ranksearch->addItem(QString());
        ranksearch->addItem(QString());
        ranksearch->setObjectName("ranksearch");
        ranksearch->setMinimumSize(QSize(200, 0));

        horizontalLayout_12->addWidget(ranksearch);

        label_33 = new QLabel(frame_2);
        label_33->setObjectName("label_33");
        label_33->setStyleSheet(QString::fromUtf8("font-weight:bold;\n"
"font-size:18px;"));

        horizontalLayout_12->addWidget(label_33);

        phoneSearch = new QLineEdit(frame_2);
        phoneSearch->setObjectName("phoneSearch");
        phoneSearch->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_12->addWidget(phoneSearch);

        label_34 = new QLabel(frame_2);
        label_34->setObjectName("label_34");
        label_34->setStyleSheet(QString::fromUtf8("font-weight:bold;\n"
"font-size:18px;"));

        horizontalLayout_12->addWidget(label_34);

        nameSearch = new QLineEdit(frame_2);
        nameSearch->setObjectName("nameSearch");
        nameSearch->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_12->addWidget(nameSearch);

        label_35 = new QLabel(frame_2);
        label_35->setObjectName("label_35");
        label_35->setMinimumSize(QSize(0, 50));
        label_35->setStyleSheet(QString::fromUtf8("font-weight:bold;\n"
"font-size:18px;"));

        horizontalLayout_12->addWidget(label_35);


        gridLayout_29->addLayout(horizontalLayout_12, 0, 0, 1, 1);


        gridLayout_32->addWidget(frame_2, 1, 0, 1, 1);

        add_customer_frame = new QFrame(customers_frame);
        add_customer_frame->setObjectName("add_customer_frame");
        add_customer_frame->setFrameShape(QFrame::StyledPanel);
        add_customer_frame->setFrameShadow(QFrame::Raised);
        gridLayout_31 = new QGridLayout(add_customer_frame);
        gridLayout_31->setSpacing(6);
        gridLayout_31->setContentsMargins(11, 11, 11, 11);
        gridLayout_31->setObjectName("gridLayout_31");
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        remove_customer = new QPushButton(add_customer_frame);
        remove_customer->setObjectName("remove_customer");
        remove_customer->setMinimumSize(QSize(150, 0));
        remove_customer->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_13->addWidget(remove_customer);

        add_new = new QPushButton(add_customer_frame);
        add_new->setObjectName("add_new");
        add_new->setMinimumSize(QSize(150, 0));
        add_new->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_13->addWidget(add_new);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_15);

        class_box = new QComboBox(add_customer_frame);
        class_box->setObjectName("class_box");
        class_box->setMinimumSize(QSize(200, 0));
        class_box->setMaximumSize(QSize(16777215, 16777215));
        class_box->setEditable(false);

        horizontalLayout_13->addWidget(class_box);

        classLable = new QLabel(add_customer_frame);
        classLable->setObjectName("classLable");
        classLable->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_13->addWidget(classLable);

        new_customer_phone = new QLineEdit(add_customer_frame);
        new_customer_phone->setObjectName("new_customer_phone");

        horizontalLayout_13->addWidget(new_customer_phone);

        phoneLable = new QLabel(add_customer_frame);
        phoneLable->setObjectName("phoneLable");

        horizontalLayout_13->addWidget(phoneLable);

        new_customer_name = new QLineEdit(add_customer_frame);
        new_customer_name->setObjectName("new_customer_name");

        horizontalLayout_13->addWidget(new_customer_name);

        nameLable = new QLabel(add_customer_frame);
        nameLable->setObjectName("nameLable");
        nameLable->setMinimumSize(QSize(0, 50));

        horizontalLayout_13->addWidget(nameLable);


        gridLayout_31->addLayout(horizontalLayout_13, 0, 0, 1, 1);


        gridLayout_32->addWidget(add_customer_frame, 0, 0, 1, 1);

        tableView = new QTableView(customers_frame);
        tableView->setObjectName("tableView");
        tableView->setStyleSheet(QString::fromUtf8(""));

        gridLayout_32->addWidget(tableView, 2, 0, 1, 1);


        gridLayout_33->addWidget(customers_frame, 0, 0, 1, 1);

        formsStackedWidget->addWidget(customers_form);
        products_form = new QWidget();
        products_form->setObjectName("products_form");
        gridLayout_37 = new QGridLayout(products_form);
        gridLayout_37->setSpacing(6);
        gridLayout_37->setContentsMargins(11, 11, 11, 11);
        gridLayout_37->setObjectName("gridLayout_37");
        search_products_frame = new QFrame(products_form);
        search_products_frame->setObjectName("search_products_frame");
        search_products_frame->setStyleSheet(QString::fromUtf8("QLabel{\n"
"padding:5px;\n"
"}\n"
"QComboBox::down-arrow{\n"
"image:url(:/cashRegisterSystem2/media/arrow-down.png);\n"
"color:rgba(120, 91, 71, 1);\n"
"border-radius:5px;\n"
"}\n"
"QComboBox::down-arrow::hover{\n"
"border-radius:5px;\n"
"}\n"
"QComboBox::hover{\n"
"background-color: rgba(200,171,151,0.5);\n"
"border:none;\n"
"}\n"
"QComboBox{\n"
"background:transparent;\n"
"border:1px solid rgba(120, 91, 71, 1);\n"
"border-radius:5px;\n"
"padding:2px;\n"
"}\n"
"\n"
"QLineEdit{\n"
"background:transparent;\n"
"border:none;\n"
"border-bottom:1px solid #323638 ;\n"
"font-size:15px;\n"
"color:#323638;\n"
"}\n"
"#frame_3{\n"
"border:1px solid black;\n"
"border-radius:10px;\n"
"background-color: rgba(200,171,151,0.5);\n"
"padding:10px 0px;\n"
"}\n"
"#prodtable{\n"
"border-radius:10px;\n"
"border: 2px solid rgba(200,171,151,0.5);\n"
"background-color:rgba(245,250,245,0.5);\n"
"}"));
        search_products_frame->setFrameShape(QFrame::StyledPanel);
        search_products_frame->setFrameShadow(QFrame::Raised);
        gridLayout_38 = new QGridLayout(search_products_frame);
        gridLayout_38->setSpacing(6);
        gridLayout_38->setContentsMargins(11, 11, 11, 11);
        gridLayout_38->setObjectName("gridLayout_38");
        frame_3 = new QFrame(search_products_frame);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout_35 = new QGridLayout(frame_3);
        gridLayout_35->setSpacing(6);
        gridLayout_35->setContentsMargins(11, 11, 11, 11);
        gridLayout_35->setObjectName("gridLayout_35");
        gridLayout_36 = new QGridLayout();
        gridLayout_36->setSpacing(6);
        gridLayout_36->setObjectName("gridLayout_36");
        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_36->addItem(horizontalSpacer_17, 0, 1, 1, 1);

        ProdNameLabel = new QLabel(frame_3);
        ProdNameLabel->setObjectName("ProdNameLabel");
        ProdNameLabel->setMinimumSize(QSize(0, 50));
        ProdNameLabel->setStyleSheet(QString::fromUtf8("font-weight:bold;\n"
"font-size:18px;"));

        gridLayout_36->addWidget(ProdNameLabel, 0, 6, 1, 1);

        ProdNameSearch = new QLineEdit(frame_3);
        ProdNameSearch->setObjectName("ProdNameSearch");
        ProdNameSearch->setMaximumSize(QSize(300, 16777215));

        gridLayout_36->addWidget(ProdNameSearch, 0, 5, 1, 1);

        ProdTypeSearch = new QComboBox(frame_3);
        ProdTypeSearch->addItem(QString());
        ProdTypeSearch->setObjectName("ProdTypeSearch");
        ProdTypeSearch->setMinimumSize(QSize(200, 0));
        ProdTypeSearch->setCursor(QCursor(Qt::PointingHandCursor));
        ProdTypeSearch->setStyleSheet(QString::fromUtf8(""));

        gridLayout_36->addWidget(ProdTypeSearch, 0, 2, 1, 1);

        searchprobuctsBTN = new QPushButton(frame_3);
        searchprobuctsBTN->setObjectName("searchprobuctsBTN");
        searchprobuctsBTN->setMinimumSize(QSize(200, 0));
        searchprobuctsBTN->setCursor(QCursor(Qt::PointingHandCursor));
        searchprobuctsBTN->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-size:15px;\n"
"background-color:rgba(185,191,193,1);\n"
"color:#323638;\n"
"border-radius:10px;\n"
"font-weight:bold;\n"
"margin-left:5px;\n"
"padding:10px;\n"
"}\n"
"QPushButton::hover{\n"
"background-color: rgba(200,171,151,0.5);\n"
"}"));

        gridLayout_36->addWidget(searchprobuctsBTN, 0, 0, 1, 1);

        ProdTypeLabel = new QLabel(frame_3);
        ProdTypeLabel->setObjectName("ProdTypeLabel");
        ProdTypeLabel->setStyleSheet(QString::fromUtf8("font-weight:bold;\n"
"font-size:18px;"));

        gridLayout_36->addWidget(ProdTypeLabel, 0, 3, 1, 1);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_36->addItem(horizontalSpacer_18, 0, 4, 1, 1);


        gridLayout_35->addLayout(gridLayout_36, 0, 0, 1, 1);


        gridLayout_38->addWidget(frame_3, 0, 0, 1, 1);

        prodtable = new QTableView(search_products_frame);
        prodtable->setObjectName("prodtable");

        gridLayout_38->addWidget(prodtable, 1, 0, 1, 1);


        gridLayout_37->addWidget(search_products_frame, 0, 0, 1, 1);

        formsStackedWidget->addWidget(products_form);
        admin_main_form = new QWidget();
        admin_main_form->setObjectName("admin_main_form");
        gridLayout_17 = new QGridLayout(admin_main_form);
        gridLayout_17->setSpacing(6);
        gridLayout_17->setContentsMargins(11, 11, 11, 11);
        gridLayout_17->setObjectName("gridLayout_17");
        admin_main_frame = new QFrame(admin_main_form);
        admin_main_frame->setObjectName("admin_main_frame");
        admin_main_frame->setStyleSheet(QString::fromUtf8("QListWidget{\n"
"border: 2px solid rgba(200,171,151,0.5);\n"
"background-color:rgba(240,240,240,0.7);\n"
"border-radius:10px;\n"
"}\n"
"QScrollArea{\n"
"border:2px solid  #e2d4c9;\n"
"border-radius:5px;\n"
"background-color:rgba(245,250,245,0.5);\n"
"}\n"
"#admin_phone_number_label{\n"
"border:none;\n"
"}\n"
"QLineEdit{\n"
"background:transparent;\n"
"border-radius:2px;\n"
"border-bottom:2px solid rgba(200,171,151,0.5);\n"
"letter-spacing: 2px;\n"
"color:rgba(120, 91, 71, 1);\n"
"font-weight:bold;\n"
"margin-bottom:5px;\n"
"\n"
"}\n"
"#admin_check_discount{\n"
"padding:2px;\n"
"border:1px solid rgba(120, 91, 71, 1);\n"
"border-radius:5px;\n"
"}\n"
"#admin_check_discount::hover{\n"
"background-color: rgba(200,171,151,0.5);\n"
"border:none;\n"
"\n"
"}\n"
"#admin_sell{\n"
"font-size:16px;\n"
"background-color:rgba(185,191,193,1);\n"
"color:#323638;\n"
"border-radius:10px;\n"
"font-weight:bold;\n"
"margin-left:5px;\n"
"padding:5px;\n"
"}\n"
"#admin_retrieve{\n"
"font-size:16px;\n"
"background-color:rgba(185,191,19"
                        "3,1);\n"
"color:#323638;\n"
"border-radius:10px;\n"
"font-weight:bold;\n"
"padding:5px;\n"
"}\n"
"#admin_retrieve::hover{\n"
"background-color: rgba(200,171,151,0.5);\n"
"}\n"
"#admin_sell::hover{\n"
"background-color: rgba(200,171,151,0.5);\n"
"}\n"
"#admin_cancel_order{\n"
"padding:2px;\n"
"border:none;\n"
"border:1px solid rgba(120, 91, 71, 1);\n"
"border-radius:5px;\n"
"\n"
"}\n"
"#admin_cancel_order::hover{\n"
"background-color: rgba(200,171,151,0.5);\n"
"border:none;\n"
"}\n"
"#discount_spinbox{\n"
"border:1px solid  rgba(120, 91, 71, 1) ;\n"
"border-radius:5px;\n"
"background:transparent;\n"
"}\n"
"#discount_spinbox::hover{\n"
"background-color: rgba(200,171,151,0.5);\n"
"border:none;\n"
"}\n"
"#discount_spinbox::down-arrow{\n"
"image:url(:/cashRegisterSystem2/media/arrow-down.png);\n"
"}\n"
"#discount_spinbox::up-arrow{\n"
"image:url(:/cashRegisterSystem2/media/arrow-up.png);\n"
"}\n"
"\n"
"QComboBox::down-arrow{\n"
"image:url(:/cashRegisterSystem2/media/arrow-down.png);\n"
"color:rgba(120, 91, 71, 1);"
                        "\n"
"border-radius:5px;\n"
"}\n"
"QComboBox::down-arrow::hover{\n"
"border-radius:5px;\n"
"}\n"
"QComboBox::hover{\n"
"background-color: rgba(200,171,151,0.5);\n"
"border:none;\n"
"}\n"
"QComboBox{\n"
"background:transparent;\n"
"border:1px solid rgba(120, 91, 71, 1);\n"
"border-radius:5px;\n"
"padding:2px;\n"
"}\n"
"QListWidget::item { \n"
"margin:5px;\n"
"padding:5px;\n"
" }\n"
"QListWidget::item::hover{\n"
"background-color:rgba(200,171,151,0.5);\n"
"border-radius:5px;\n"
"}\n"
"QListWidget::item:selected{\n"
"background-color:rgba(200,171,151,1);\n"
"color:black;\n"
"border:none;\n"
"}\n"
""));
        admin_main_frame->setFrameShape(QFrame::StyledPanel);
        admin_main_frame->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(admin_main_frame);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName("gridLayout_3");
        admin_products_frame = new QFrame(admin_main_frame);
        admin_products_frame->setObjectName("admin_products_frame");
        admin_products_frame->setMinimumSize(QSize(300, 0));
        admin_products_frame->setFrameShape(QFrame::StyledPanel);
        admin_products_frame->setFrameShadow(QFrame::Raised);
        gridLayout_13 = new QGridLayout(admin_products_frame);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setContentsMargins(11, 11, 11, 11);
        gridLayout_13->setObjectName("gridLayout_13");
        admin_products_scroll_area = new QScrollArea(admin_products_frame);
        admin_products_scroll_area->setObjectName("admin_products_scroll_area");
        admin_products_scroll_area->setStyleSheet(QString::fromUtf8(""));
        admin_products_scroll_area->setWidgetResizable(true);
        admin_products_scroll_area_content = new QWidget();
        admin_products_scroll_area_content->setObjectName("admin_products_scroll_area_content");
        admin_products_scroll_area_content->setGeometry(QRect(0, 0, 674, 634));
        verticalLayout = new QVBoxLayout(admin_products_scroll_area_content);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        admin_productsVerticalLayout = new QVBoxLayout();
        admin_productsVerticalLayout->setSpacing(6);
        admin_productsVerticalLayout->setObjectName("admin_productsVerticalLayout");

        verticalLayout->addLayout(admin_productsVerticalLayout);

        admin_products_scroll_area->setWidget(admin_products_scroll_area_content);

        gridLayout_13->addWidget(admin_products_scroll_area, 0, 0, 1, 1);


        gridLayout_3->addWidget(admin_products_frame, 0, 1, 1, 1);

        admin_cart_frame = new QFrame(admin_main_frame);
        admin_cart_frame->setObjectName("admin_cart_frame");
        admin_cart_frame->setMinimumSize(QSize(350, 0));
        admin_cart_frame->setMaximumSize(QSize(16777215, 16777215));
        admin_cart_frame->setFrameShape(QFrame::StyledPanel);
        admin_cart_frame->setFrameShadow(QFrame::Raised);
        gridLayout_15 = new QGridLayout(admin_cart_frame);
        gridLayout_15->setSpacing(6);
        gridLayout_15->setContentsMargins(11, 11, 11, 11);
        gridLayout_15->setObjectName("gridLayout_15");
        gridLayout_16 = new QGridLayout();
        gridLayout_16->setSpacing(6);
        gridLayout_16->setObjectName("gridLayout_16");
        admin_order_type_cmb = new QComboBox(admin_cart_frame);
        admin_order_type_cmb->addItem(QString());
        admin_order_type_cmb->addItem(QString());
        admin_order_type_cmb->addItem(QString());
        admin_order_type_cmb->setObjectName("admin_order_type_cmb");
        admin_order_type_cmb->setMinimumSize(QSize(130, 30));
        admin_order_type_cmb->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_16->addWidget(admin_order_type_cmb, 1, 2, 1, 2);

        admin_phone_number_label = new QPushButton(admin_cart_frame);
        admin_phone_number_label->setObjectName("admin_phone_number_label");
        admin_phone_number_label->setMaximumSize(QSize(35, 16777215));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/cashRegisterSystem2/icons/buying-on-smartphone.png"), QSize(), QIcon::Normal, QIcon::Off);
        admin_phone_number_label->setIcon(icon5);

        gridLayout_16->addWidget(admin_phone_number_label, 0, 3, 1, 1);

        admin_discount_label = new QLabel(admin_cart_frame);
        admin_discount_label->setObjectName("admin_discount_label");
        admin_discount_label->setMinimumSize(QSize(0, 0));
        admin_discount_label->setMaximumSize(QSize(80, 16777215));
        admin_discount_label->setStyleSheet(QString::fromUtf8("font-size:15px;"));

        gridLayout_16->addWidget(admin_discount_label, 1, 1, 1, 1);

        discount_spinbox = new QDoubleSpinBox(admin_cart_frame);
        discount_spinbox->setObjectName("discount_spinbox");
        discount_spinbox->setMinimumSize(QSize(80, 30));
        discount_spinbox->setMaximumSize(QSize(100, 16777215));
        discount_spinbox->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_16->addWidget(discount_spinbox, 1, 0, 1, 1);

        admin_phone_number = new QLineEdit(admin_cart_frame);
        admin_phone_number->setObjectName("admin_phone_number");
        admin_phone_number->setMinimumSize(QSize(0, 30));

        gridLayout_16->addWidget(admin_phone_number, 0, 0, 1, 3);


        gridLayout_15->addLayout(gridLayout_16, 1, 0, 1, 2);

        admin_cartScrollArea = new QScrollArea(admin_cart_frame);
        admin_cartScrollArea->setObjectName("admin_cartScrollArea");
        admin_cartScrollArea->setMinimumSize(QSize(280, 0));
        admin_cartScrollArea->setMaximumSize(QSize(16777215, 500));
        admin_cartScrollArea->setStyleSheet(QString::fromUtf8(""));
        admin_cartScrollArea->setWidgetResizable(true);
        admin_cart_contents = new QWidget();
        admin_cart_contents->setObjectName("admin_cart_contents");
        admin_cart_contents->setGeometry(QRect(0, 0, 326, 480));
        admin_cart_contents->setMinimumSize(QSize(0, 0));
        layoutWidget1 = new QWidget(admin_cart_contents);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(9, 9, 311, 481));
        admin_cartVerticalLayout = new QVBoxLayout(layoutWidget1);
        admin_cartVerticalLayout->setSpacing(6);
        admin_cartVerticalLayout->setContentsMargins(11, 11, 11, 11);
        admin_cartVerticalLayout->setObjectName("admin_cartVerticalLayout");
        admin_cartVerticalLayout->setContentsMargins(0, 0, 0, 0);
        admin_cartScrollArea->setWidget(admin_cart_contents);

        gridLayout_15->addWidget(admin_cartScrollArea, 0, 0, 1, 2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        admin_check_discount = new QPushButton(admin_cart_frame);
        admin_check_discount->setObjectName("admin_check_discount");
        admin_check_discount->setMinimumSize(QSize(32, 32));
        admin_check_discount->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/cashRegisterSystem2/icons/coupon.png"), QSize(), QIcon::Normal, QIcon::Off);
        admin_check_discount->setIcon(icon6);

        horizontalLayout_6->addWidget(admin_check_discount);

        admin_price_after = new QLabel(admin_cart_frame);
        admin_price_after->setObjectName("admin_price_after");
        admin_price_after->setStyleSheet(QString::fromUtf8("border: none;\n"
"font-weight: bold;\n"
"font-size: 13px;\n"
"color:rgba(120, 91, 71, 1)\n"
"\n"
"\n"
"\n"
"\n"
""));

        horizontalLayout_6->addWidget(admin_price_after);

        admin_price_after_const = new QLabel(admin_cart_frame);
        admin_price_after_const->setObjectName("admin_price_after_const");
        admin_price_after_const->setStyleSheet(QString::fromUtf8("border: none;\n"
"font-weight: bold;\n"
"font-size: 15px;\n"
"color:rgba(120, 91, 71, 1)\n"
"\n"
"\n"
"\n"
"\n"
""));

        horizontalLayout_6->addWidget(admin_price_after_const);

        admin_price_before = new QLabel(admin_cart_frame);
        admin_price_before->setObjectName("admin_price_before");
        admin_price_before->setStyleSheet(QString::fromUtf8("border: none;\n"
"font-size: 13px"));

        horizontalLayout_6->addWidget(admin_price_before);

        admin_price_before_const = new QLabel(admin_cart_frame);
        admin_price_before_const->setObjectName("admin_price_before_const");
        admin_price_before_const->setStyleSheet(QString::fromUtf8("border: none;\n"
"font-size: 15px"));

        horizontalLayout_6->addWidget(admin_price_before_const);


        gridLayout_15->addLayout(horizontalLayout_6, 2, 0, 1, 2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        admin_cancel_order = new QPushButton(admin_cart_frame);
        admin_cancel_order->setObjectName("admin_cancel_order");
        admin_cancel_order->setMinimumSize(QSize(32, 32));
        admin_cancel_order->setMaximumSize(QSize(30, 16777215));
        admin_cancel_order->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/cashRegisterSystem2/icons/empty-cart.png"), QSize(), QIcon::Normal, QIcon::Off);
        admin_cancel_order->setIcon(icon7);

        horizontalLayout_7->addWidget(admin_cancel_order);

        admin_retrieve = new QPushButton(admin_cart_frame);
        admin_retrieve->setObjectName("admin_retrieve");
        admin_retrieve->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_7->addWidget(admin_retrieve);

        admin_sell = new QPushButton(admin_cart_frame);
        admin_sell->setObjectName("admin_sell");
        admin_sell->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_7->addWidget(admin_sell);


        gridLayout_15->addLayout(horizontalLayout_7, 3, 0, 1, 2);


        gridLayout_3->addWidget(admin_cart_frame, 0, 0, 1, 1);

        admin_categories_list_frame = new QFrame(admin_main_frame);
        admin_categories_list_frame->setObjectName("admin_categories_list_frame");
        admin_categories_list_frame->setMaximumSize(QSize(250, 16777215));
        admin_categories_list_frame->setStyleSheet(QString::fromUtf8(""));
        admin_categories_list_frame->setFrameShape(QFrame::StyledPanel);
        admin_categories_list_frame->setFrameShadow(QFrame::Raised);
        gridLayout_12 = new QGridLayout(admin_categories_list_frame);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName("gridLayout_12");
        admin_categories_list = new QListWidget(admin_categories_list_frame);
        admin_categories_list->setObjectName("admin_categories_list");
        admin_categories_list->setLayoutDirection(Qt::LeftToRight);
        admin_categories_list->setStyleSheet(QString::fromUtf8("font-size: 16px;"));

        gridLayout_12->addWidget(admin_categories_list, 0, 0, 1, 1);


        gridLayout_3->addWidget(admin_categories_list_frame, 0, 2, 1, 1);


        gridLayout_17->addWidget(admin_main_frame, 0, 0, 1, 1);

        formsStackedWidget->addWidget(admin_main_form);
        page = new QWidget();
        page->setObjectName("page");
        gridLayout_14 = new QGridLayout(page);
        gridLayout_14->setSpacing(6);
        gridLayout_14->setContentsMargins(11, 11, 11, 11);
        gridLayout_14->setObjectName("gridLayout_14");
        receipt = new QTextBrowser(page);
        receipt->setObjectName("receipt");

        gridLayout_14->addWidget(receipt, 0, 0, 1, 1);

        formsStackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        gridLayout_6 = new QGridLayout(page_2);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName("gridLayout_6");
        control_frame = new QFrame(page_2);
        control_frame->setObjectName("control_frame");
        control_frame->setMinimumSize(QSize(0, 230));
        control_frame->setStyleSheet(QString::fromUtf8("QFrame{\n"
"border:1px solid #474747;\n"
"border-radius:5px;\n"
"}\n"
"QLabel{\n"
"font-size:20px;\n"
"font-weight:bold;\n"
"}\n"
"#control_frame{\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #d9c4b6, stop: 1 #faf7f5);\n"
"border:none;\n"
"border-radius: 5px;\n"
"}\n"
"#opType{\n"
"padding:2px;\n"
"border:none;\n"
"border:1px solid rgba(120, 91, 71, 1);\n"
"border-radius:5px;\n"
"\n"
"}\n"
"#opType::hover{\n"
"background-color: rgba(200,171,151,0.5);\n"
"border:none;\n"
"}\n"
"#OPsearch{\n"
"font-size:14px;\n"
"background-color:rgba(185,191,193,1);\n"
"color:#323638;\n"
"border-radius:10px;\n"
"font-weight:bold;\n"
"padding:2px;\n"
"}\n"
"#OPsearch::hover{\n"
"background-color: rgba(200,171,151,0.5);\n"
"}\n"
"QComboBox::down-arrow{\n"
"image:url(:/cashRegisterSystem2/media/arrow-down.png);\n"
"color:rgba(120, 91, 71, 1);\n"
"border-radius:5px;\n"
"}\n"
"#date_search::down-arrow{\n"
"image:url(:/cashRegisterSystem2/media/arrow-down.png);\n"
""
                        "}\n"
"#date_search::hover{\n"
"background-color: rgba(200,171,151,0.5);\n"
"}\n"
"#date_search{\n"
"padding:2px;\n"
"border:none;\n"
"border:1px solid rgba(120, 91, 71, 1);\n"
"border-radius:5px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: rgba(200,171,151,0.5);\n"
"}\n"
"#day_total_income{\n"
"border:2px solid  #e2d4c9;\n"
"border-radius:5px;\n"
"background-color:rgba(245,250,245,0.5);\n"
"}\n"
"QPlainTextEdit,QLineEdit{\n"
"background:transparent;\n"
"border:none;\n"
"border-bottom:1px solid #474a4c ;\n"
"font-size:15px;\n"
"color:#474a4c;\n"
"}\n"
"QComboBox::down-arrow{\n"
"image:url(:/cashRegisterSystem2/media/arrow-down.png);\n"
"color:rgba(120, 91, 71, 1);\n"
"border-radius:5px;\n"
"}\n"
"QComboBox::down-arrow::hover{\n"
"border-radius:5px;\n"
"}\n"
"QComboBox::hover{\n"
"background-color: rgba(200,171,151,0.5);\n"
"border:none;\n"
"}\n"
"QComboBox{\n"
"background:transparent;\n"
"border:1px solid rgba(120, 91, 71, 1);\n"
"border-radius:5px;\n"
"padding:2px;\n"
"margin-bottom:5px;\n"
"}\n"
""
                        "\n"
"#controllingPrice{ \n"
"border: 1px solid #474747;\n"
"border-radius: 7px;\n"
"}\n"
"\n"
"#controllingQuantity{ \n"
"border: 1px solid #474747;\n"
"border-radius: 7px;\n"
"}\n"
"\n"
"#controllingProducts{ \n"
"border: 1px solid #474747;\n"
"border-radius: 7px;\n"
"}\n"
"\n"
"#controllingCategories{ \n"
"border: 1px solid #474747;\n"
"border-radius: 7px;\n"
"}\n"
"\n"
"#categoryName{\n"
"background:transparent;\n"
"border:none;\n"
"border-bottom:1px solid #474a4c ;\n"
"font-size:15px;\n"
"color:#474a4c;\n"
"}\n"
"QPushButton{\n"
"font-size:14px;\n"
"background-color:rgba(185,191,193,1);\n"
"color:#323638;\n"
"border-radius:10px;\n"
"font-weight:bold;\n"
"padding:1px;\n"
"}\n"
"#add_quantity,#add_category,#add_item{\n"
"margin-bottom:2px;\n"
"}\n"
"label_2,label,label_3,label_12{\n"
"margin-bottom:5px;\n"
"}\n"
""));
        control_frame->setFrameShape(QFrame::StyledPanel);
        control_frame->setFrameShadow(QFrame::Raised);
        gridLayout_52 = new QGridLayout(control_frame);
        gridLayout_52->setSpacing(6);
        gridLayout_52->setContentsMargins(11, 11, 11, 11);
        gridLayout_52->setObjectName("gridLayout_52");
        controllingProducts = new QFrame(control_frame);
        controllingProducts->setObjectName("controllingProducts");
        controllingProducts->setStyleSheet(QString::fromUtf8(""));
        gridLayout_55 = new QGridLayout(controllingProducts);
        gridLayout_55->setSpacing(6);
        gridLayout_55->setContentsMargins(11, 11, 11, 11);
        gridLayout_55->setObjectName("gridLayout_55");
        label_10 = new QLabel(controllingProducts);
        label_10->setObjectName("label_10");
        label_10->setMinimumSize(QSize(150, 40));
        label_10->setStyleSheet(QString::fromUtf8("border: none;"));

        gridLayout_55->addWidget(label_10, 0, 2, 1, 1);

        label_15 = new QLabel(controllingProducts);
        label_15->setObjectName("label_15");
        label_15->setStyleSheet(QString::fromUtf8("border: none;"));

        gridLayout_55->addWidget(label_15, 0, 6, 1, 1);

        horizontalSpacer_25 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_55->addItem(horizontalSpacer_25, 2, 1, 1, 1);

        label_16 = new QLabel(controllingProducts);
        label_16->setObjectName("label_16");
        label_16->setMinimumSize(QSize(150, 40));
        label_16->setMaximumSize(QSize(16777215, 30));
        label_16->setStyleSheet(QString::fromUtf8("border:none;"));

        gridLayout_55->addWidget(label_16, 2, 7, 1, 1);

        item_type_item = new QComboBox(controllingProducts);
        item_type_item->setObjectName("item_type_item");
        item_type_item->setMinimumSize(QSize(0, 30));
        item_type_item->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_55->addWidget(item_type_item, 2, 2, 1, 1);

        label_17 = new QLabel(controllingProducts);
        label_17->setObjectName("label_17");
        label_17->setMinimumSize(QSize(150, 40));
        label_17->setStyleSheet(QString::fromUtf8("border: none;"));

        gridLayout_55->addWidget(label_17, 0, 4, 1, 1);

        add_item = new QPushButton(controllingProducts);
        add_item->setObjectName("add_item");
        add_item->setMinimumSize(QSize(100, 23));
        add_item->setMaximumSize(QSize(16777215, 35));
        add_item->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_55->addWidget(add_item, 0, 0, 1, 1);

        label_18 = new QLabel(controllingProducts);
        label_18->setObjectName("label_18");
        label_18->setMinimumSize(QSize(150, 40));
        label_18->setStyleSheet(QString::fromUtf8("border: none;"));

        gridLayout_55->addWidget(label_18, 0, 3, 1, 1);

        remove_item = new QPushButton(controllingProducts);
        remove_item->setObjectName("remove_item");
        remove_item->setMinimumSize(QSize(150, 40));
        remove_item->setMaximumSize(QSize(16777215, 30));
        remove_item->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_55->addWidget(remove_item, 2, 0, 1, 1);

        item_name_item = new QLineEdit(controllingProducts);
        item_name_item->setObjectName("item_name_item");

        gridLayout_55->addWidget(item_name_item, 2, 6, 1, 1);

        item_price_item = new QLineEdit(controllingProducts);
        item_price_item->setObjectName("item_price_item");

        gridLayout_55->addWidget(item_price_item, 2, 4, 1, 1);

        item_quantity_item = new QLineEdit(controllingProducts);
        item_quantity_item->setObjectName("item_quantity_item");

        gridLayout_55->addWidget(item_quantity_item, 2, 3, 1, 1);


        gridLayout_52->addWidget(controllingProducts, 0, 1, 1, 2);

        controllingQuantity = new QFrame(control_frame);
        controllingQuantity->setObjectName("controllingQuantity");
        controllingQuantity->setStyleSheet(QString::fromUtf8(""));
        gridLayout_54 = new QGridLayout(controllingQuantity);
        gridLayout_54->setSpacing(6);
        gridLayout_54->setContentsMargins(11, 11, 11, 11);
        gridLayout_54->setObjectName("gridLayout_54");
        item_name_quantity = new QComboBox(controllingQuantity);
        item_name_quantity->setObjectName("item_name_quantity");
        item_name_quantity->setMinimumSize(QSize(200, 30));
        item_name_quantity->setMaximumSize(QSize(1000, 16777215));
        item_name_quantity->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_54->addWidget(item_name_quantity, 2, 3, 1, 1);

        add_quantity = new QPushButton(controllingQuantity);
        add_quantity->setObjectName("add_quantity");
        add_quantity->setMinimumSize(QSize(150, 40));
        add_quantity->setMaximumSize(QSize(16777215, 30));
        add_quantity->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_54->addWidget(add_quantity, 0, 0, 1, 1);

        remove_quantity = new QPushButton(controllingQuantity);
        remove_quantity->setObjectName("remove_quantity");
        remove_quantity->setMinimumSize(QSize(150, 40));
        remove_quantity->setMaximumSize(QSize(16777215, 30));
        remove_quantity->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_54->addWidget(remove_quantity, 2, 0, 1, 1);

        horizontalSpacer_24 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_54->addItem(horizontalSpacer_24, 2, 1, 1, 1);

        label_22 = new QLabel(controllingQuantity);
        label_22->setObjectName("label_22");
        label_22->setStyleSheet(QString::fromUtf8("border: none;"));

        gridLayout_54->addWidget(label_22, 0, 2, 1, 1);

        item_quantity_quantity = new QLineEdit(controllingQuantity);
        item_quantity_quantity->setObjectName("item_quantity_quantity");

        gridLayout_54->addWidget(item_quantity_quantity, 2, 2, 1, 1);

        label_31 = new QLabel(controllingQuantity);
        label_31->setObjectName("label_31");
        label_31->setStyleSheet(QString::fromUtf8("border: none;"));

        gridLayout_54->addWidget(label_31, 0, 3, 1, 1);

        label_9 = new QLabel(controllingQuantity);
        label_9->setObjectName("label_9");
        label_9->setMinimumSize(QSize(150, 40));
        label_9->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"border:none;"));

        gridLayout_54->addWidget(label_9, 2, 4, 1, 1);


        gridLayout_52->addWidget(controllingQuantity, 3, 2, 1, 1);

        controllingCategories = new QFrame(control_frame);
        controllingCategories->setObjectName("controllingCategories");
        controllingCategories->setFrameShape(QFrame::StyledPanel);
        controllingCategories->setFrameShadow(QFrame::Raised);
        gridLayout_19 = new QGridLayout(controllingCategories);
        gridLayout_19->setSpacing(6);
        gridLayout_19->setContentsMargins(11, 11, 11, 11);
        gridLayout_19->setObjectName("gridLayout_19");
        add_category = new QPushButton(controllingCategories);
        add_category->setObjectName("add_category");
        add_category->setMinimumSize(QSize(150, 40));
        add_category->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_19->addWidget(add_category, 0, 0, 1, 1);

        label_19 = new QLabel(controllingCategories);
        label_19->setObjectName("label_19");
        label_19->setMinimumSize(QSize(150, 40));
        label_19->setStyleSheet(QString::fromUtf8("border:none;"));

        gridLayout_19->addWidget(label_19, 1, 3, 1, 1);

        label_32 = new QLabel(controllingCategories);
        label_32->setObjectName("label_32");
        label_32->setStyleSheet(QString::fromUtf8("border:none;"));

        gridLayout_19->addWidget(label_32, 0, 2, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_19->addItem(horizontalSpacer_7, 0, 1, 1, 1);

        category_name = new QLineEdit(controllingCategories);
        category_name->setObjectName("category_name");
        category_name->setMinimumSize(QSize(200, 0));
        category_name->setMaximumSize(QSize(256, 16777215));

        gridLayout_19->addWidget(category_name, 1, 2, 1, 1);

        remove_category = new QPushButton(controllingCategories);
        remove_category->setObjectName("remove_category");
        remove_category->setMinimumSize(QSize(150, 40));
        remove_category->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_19->addWidget(remove_category, 1, 0, 1, 1);


        gridLayout_52->addWidget(controllingCategories, 1, 1, 1, 2);

        controllingPrice = new QFrame(control_frame);
        controllingPrice->setObjectName("controllingPrice");
        controllingPrice->setStyleSheet(QString::fromUtf8(""));
        gridLayout_53 = new QGridLayout(controllingPrice);
        gridLayout_53->setSpacing(6);
        gridLayout_53->setContentsMargins(11, 11, 11, 11);
        gridLayout_53->setObjectName("gridLayout_53");
        label_30 = new QLabel(controllingPrice);
        label_30->setObjectName("label_30");
        label_30->setMinimumSize(QSize(0, 30));
        label_30->setMaximumSize(QSize(16777215, 200));
        label_30->setStyleSheet(QString::fromUtf8("border: none;"));

        gridLayout_53->addWidget(label_30, 1, 5, 1, 1);

        label_29 = new QLabel(controllingPrice);
        label_29->setObjectName("label_29");
        label_29->setMinimumSize(QSize(0, 30));
        label_29->setMaximumSize(QSize(16777215, 20));
        label_29->setStyleSheet(QString::fromUtf8("border: none;"));

        gridLayout_53->addWidget(label_29, 1, 3, 1, 1);

        item_name_price = new QComboBox(controllingPrice);
        item_name_price->setObjectName("item_name_price");
        item_name_price->setMinimumSize(QSize(200, 30));
        item_name_price->setMaximumSize(QSize(16777215, 30));
        item_name_price->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_53->addWidget(item_name_price, 2, 5, 1, 1);

        horizontalSpacer_23 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_53->addItem(horizontalSpacer_23, 2, 1, 1, 1);

        label_13 = new QLabel(controllingPrice);
        label_13->setObjectName("label_13");
        label_13->setMinimumSize(QSize(150, 40));
        label_13->setMaximumSize(QSize(16777215, 30));
        label_13->setStyleSheet(QString::fromUtf8("font-size: 16px;\n"
"border:none;"));

        gridLayout_53->addWidget(label_13, 2, 6, 1, 1);

        item_price_price = new QLineEdit(controllingPrice);
        item_price_price->setObjectName("item_price_price");

        gridLayout_53->addWidget(item_price_price, 2, 3, 1, 1);

        edit_price = new QPushButton(controllingPrice);
        edit_price->setObjectName("edit_price");
        edit_price->setMinimumSize(QSize(150, 40));
        edit_price->setMaximumSize(QSize(16777215, 30));
        edit_price->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_53->addWidget(edit_price, 2, 0, 1, 1);


        gridLayout_52->addWidget(controllingPrice, 3, 1, 1, 1);

        critical_options = new QFrame(control_frame);
        critical_options->setObjectName("critical_options");
        critical_options->setMaximumSize(QSize(16777215, 50));
        critical_options->setFrameShape(QFrame::StyledPanel);
        critical_options->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(critical_options);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_6 = new QSpacerItem(1153, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        delete_all_products = new QPushButton(critical_options);
        delete_all_products->setObjectName("delete_all_products");
        delete_all_products->setMinimumSize(QSize(130, 30));
        delete_all_products->setCursor(QCursor(Qt::PointingHandCursor));
        delete_all_products->setStyleSheet(QString::fromUtf8("/* Default styles */\n"
"QPushButton {\n"
"	background-color: #FF393C;\n"
"	color: #DCDCDC;\n"
"}\n"
"/* Hover styles */\n"
"QPushButton:hover {\n"
"  background-color: #FF7073;\n"
"}"));

        horizontalLayout_2->addWidget(delete_all_products);


        gridLayout_52->addWidget(critical_options, 4, 1, 1, 2);


        gridLayout_6->addWidget(control_frame, 0, 0, 1, 1);

        formsStackedWidget->addWidget(page_2);
        user_sales_preview = new QWidget();
        user_sales_preview->setObjectName("user_sales_preview");
        gridLayout_28 = new QGridLayout(user_sales_preview);
        gridLayout_28->setSpacing(6);
        gridLayout_28->setContentsMargins(11, 11, 11, 11);
        gridLayout_28->setObjectName("gridLayout_28");
        frame_5 = new QFrame(user_sales_preview);
        frame_5->setObjectName("frame_5");
        frame_5->setStyleSheet(QString::fromUtf8("#control_frame{\n"
"background-color:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #d9c4b6, stop: 1 #faf7f5);\n"
"border:none;\n"
"border-radius: 5px;\n"
"}\n"
"#opType{\n"
"padding:2px;\n"
"border:none;\n"
"border:1px solid rgba(120, 91, 71, 1);\n"
"border-radius:5px;\n"
"\n"
"}\n"
"#opType::hover{\n"
"background-color: rgba(200,171,151,0.5);\n"
"border:none;\n"
"}\n"
"#OPsearch{\n"
"font-size:14px;\n"
"background-color:rgba(185,191,193,1);\n"
"color:#323638;\n"
"border-radius:10px;\n"
"font-weight:bold;\n"
"padding:2px;\n"
"}\n"
"#OPsearch::hover{\n"
"background-color: rgba(200,171,151,0.5);\n"
"}\n"
"QComboBox::down-arrow{\n"
"image:url(:/cashRegisterSystem2/media/arrow-down.png);\n"
"color:rgba(120, 91, 71, 1);\n"
"border-radius:5px;\n"
"}\n"
"#date_search::down-arrow{\n"
"image:url(:/cashRegisterSystem2/media/arrow-down.png);\n"
"}\n"
"#date_search::hover{\n"
"background-color: rgba(200,171,151,0.5);\n"
"}\n"
"#date_search{\n"
"padding:2px;\n"
"border:none;\n"
""
                        "border:1px solid rgba(120, 91, 71, 1);\n"
"border-radius:5px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: rgba(200,171,151,0.5);\n"
"}\n"
"#day_total_income{\n"
"border:2px solid  #e2d4c9;\n"
"border-radius:5px;\n"
"background-color:rgba(245,250,245,0.5);\n"
"}\n"
"QPlainTextEdit,QLineEdit{\n"
"background:transparent;\n"
"border:none;\n"
"border-bottom:1px solid #474a4c ;\n"
"font-size:15px;\n"
"color:#474a4c;\n"
"}\n"
"QComboBox::down-arrow{\n"
"image:url(:/cashRegisterSystem2/media/arrow-down.png);\n"
"color:rgba(120, 91, 71, 1);\n"
"border-radius:5px;\n"
"}\n"
"QComboBox::down-arrow::hover{\n"
"border-radius:5px;\n"
"}\n"
"QComboBox::hover{\n"
"background-color: rgba(200,171,151,0.5);\n"
"border:none;\n"
"}\n"
"QComboBox{\n"
"background:transparent;\n"
"border:1px solid rgba(120, 91, 71, 1);\n"
"border-radius:5px;\n"
"padding:2px;\n"
"margin-bottom:5px;\n"
"}\n"
"\n"
"#controllingPrice{ \n"
"border: 1px solid #474747;\n"
"border-radius: 7px;\n"
"}\n"
"\n"
"#controllingQuantity{ \n"
"border: 1px"
                        " solid #474747;\n"
"border-radius: 7px;\n"
"}\n"
"\n"
"#controllingProducts{ \n"
"border: 1px solid #474747;\n"
"border-radius: 7px;\n"
"}\n"
"\n"
"#controllingCategories{ \n"
"border: 1px solid #474747;\n"
"border-radius: 7px;\n"
"}\n"
"\n"
"#categoryName{\n"
"background:transparent;\n"
"border:none;\n"
"border-bottom:1px solid #474a4c ;\n"
"font-size:15px;\n"
"color:#474a4c;\n"
"}\n"
"QPushButton{\n"
"font-size:14px;\n"
"background-color:rgba(185,191,193,1);\n"
"color:#323638;\n"
"border-radius:10px;\n"
"font-weight:bold;\n"
"padding:1px;\n"
"}\n"
"#add_quantity,#add_category,#add_item{\n"
"margin-bottom:2px;\n"
"}\n"
"label_2,label,label_3,label_12{\n"
"margin-bottom:5px;\n"
"}\n"
""));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        gridLayout_24 = new QGridLayout(frame_5);
        gridLayout_24->setSpacing(6);
        gridLayout_24->setContentsMargins(11, 11, 11, 11);
        gridLayout_24->setObjectName("gridLayout_24");
        frame_6 = new QFrame(frame_5);
        frame_6->setObjectName("frame_6");
        frame_6->setMinimumSize(QSize(0, 0));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        gridLayout_76 = new QGridLayout(frame_6);
        gridLayout_76->setSpacing(6);
        gridLayout_76->setContentsMargins(11, 11, 11, 11);
        gridLayout_76->setObjectName("gridLayout_76");
        label_48 = new QLabel(frame_6);
        label_48->setObjectName("label_48");
        label_48->setStyleSheet(QString::fromUtf8("font-size: 18px;\n"
"font-weight: bold;\n"
"margin-right:5px;\n"
"color:rgba(120, 91, 71, 1)\n"
""));

        gridLayout_76->addWidget(label_48, 0, 2, 1, 1);

        return_operations_frame_user = new QFrame(frame_6);
        return_operations_frame_user->setObjectName("return_operations_frame_user");
        return_operations_frame_user->setStyleSheet(QString::fromUtf8("#scrollArea_6{\n"
"border:2px solid  #e2d4c9;\n"
"border-radius:5px;\n"
"background-color:rgba(245,250,245,0.5);\n"
"}\n"
""));
        return_operations_frame_user->setFrameShape(QFrame::StyledPanel);
        return_operations_frame_user->setFrameShadow(QFrame::Raised);
        gridLayout_77 = new QGridLayout(return_operations_frame_user);
        gridLayout_77->setSpacing(6);
        gridLayout_77->setContentsMargins(11, 11, 11, 11);
        gridLayout_77->setObjectName("gridLayout_77");
        scrollArea_17 = new QScrollArea(return_operations_frame_user);
        scrollArea_17->setObjectName("scrollArea_17");
        scrollArea_17->setWidgetResizable(true);
        return_operations_contents_user = new QWidget();
        return_operations_contents_user->setObjectName("return_operations_contents_user");
        return_operations_contents_user->setGeometry(QRect(0, 0, 98, 28));
        gridLayout_78 = new QGridLayout(return_operations_contents_user);
        gridLayout_78->setSpacing(6);
        gridLayout_78->setContentsMargins(11, 11, 11, 11);
        gridLayout_78->setObjectName("gridLayout_78");
        return_VLayout_user = new QVBoxLayout();
        return_VLayout_user->setSpacing(6);
        return_VLayout_user->setObjectName("return_VLayout_user");

        gridLayout_78->addLayout(return_VLayout_user, 0, 0, 1, 1);

        scrollArea_17->setWidget(return_operations_contents_user);

        gridLayout_77->addWidget(scrollArea_17, 0, 0, 1, 1);


        gridLayout_76->addWidget(return_operations_frame_user, 1, 1, 1, 1);

        label_49 = new QLabel(frame_6);
        label_49->setObjectName("label_49");
        label_49->setStyleSheet(QString::fromUtf8("font-size: 18px;\n"
"font-weight: bold;\n"
"margin-right:5px;\n"
"color:rgba(120, 91, 71, 1)\n"
""));

        gridLayout_76->addWidget(label_49, 0, 1, 1, 1);

        label_50 = new QLabel(frame_6);
        label_50->setObjectName("label_50");
        label_50->setStyleSheet(QString::fromUtf8("font-size: 18px;\n"
"font-weight: bold;\n"
"margin-right:5px;\n"
"color:rgba(120, 91, 71, 1)\n"
""));

        gridLayout_76->addWidget(label_50, 0, 0, 1, 1);

        sell_operations_frame_user = new QFrame(frame_6);
        sell_operations_frame_user->setObjectName("sell_operations_frame_user");
        sell_operations_frame_user->setStyleSheet(QString::fromUtf8("#scrollArea_5{\n"
"border:2px solid  #e2d4c9;\n"
"border-radius:5px;\n"
"background-color:rgba(245,250,245,0.5);\n"
"}\n"
""));
        sell_operations_frame_user->setFrameShape(QFrame::StyledPanel);
        sell_operations_frame_user->setFrameShadow(QFrame::Raised);
        gridLayout_79 = new QGridLayout(sell_operations_frame_user);
        gridLayout_79->setSpacing(6);
        gridLayout_79->setContentsMargins(11, 11, 11, 11);
        gridLayout_79->setObjectName("gridLayout_79");
        scrollArea_18 = new QScrollArea(sell_operations_frame_user);
        scrollArea_18->setObjectName("scrollArea_18");
        scrollArea_18->setWidgetResizable(true);
        sell_operations_contents_user = new QWidget();
        sell_operations_contents_user->setObjectName("sell_operations_contents_user");
        sell_operations_contents_user->setGeometry(QRect(0, 0, 98, 28));
        gridLayout_80 = new QGridLayout(sell_operations_contents_user);
        gridLayout_80->setSpacing(6);
        gridLayout_80->setContentsMargins(11, 11, 11, 11);
        gridLayout_80->setObjectName("gridLayout_80");
        sell_VLayout_user = new QVBoxLayout();
        sell_VLayout_user->setSpacing(6);
        sell_VLayout_user->setObjectName("sell_VLayout_user");

        gridLayout_80->addLayout(sell_VLayout_user, 0, 0, 1, 1);

        scrollArea_18->setWidget(sell_operations_contents_user);

        gridLayout_79->addWidget(scrollArea_18, 0, 0, 1, 1);


        gridLayout_76->addWidget(sell_operations_frame_user, 1, 2, 1, 1);

        total_operations_frame_user = new QFrame(frame_6);
        total_operations_frame_user->setObjectName("total_operations_frame_user");
        total_operations_frame_user->setStyleSheet(QString::fromUtf8("#scrollArea_7{\n"
"border:2px solid  #e2d4c9;\n"
"border-radius:5px;\n"
"background-color:rgba(245,250,245,0.5);\n"
"}\n"
""));
        total_operations_frame_user->setFrameShape(QFrame::StyledPanel);
        total_operations_frame_user->setFrameShadow(QFrame::Raised);
        gridLayout_81 = new QGridLayout(total_operations_frame_user);
        gridLayout_81->setSpacing(6);
        gridLayout_81->setContentsMargins(11, 11, 11, 11);
        gridLayout_81->setObjectName("gridLayout_81");
        scrollArea_19 = new QScrollArea(total_operations_frame_user);
        scrollArea_19->setObjectName("scrollArea_19");
        scrollArea_19->setWidgetResizable(true);
        total_operations_contents_user = new QWidget();
        total_operations_contents_user->setObjectName("total_operations_contents_user");
        total_operations_contents_user->setGeometry(QRect(0, 0, 98, 28));
        gridLayout_82 = new QGridLayout(total_operations_contents_user);
        gridLayout_82->setSpacing(6);
        gridLayout_82->setContentsMargins(11, 11, 11, 11);
        gridLayout_82->setObjectName("gridLayout_82");
        total_VLayout_user = new QVBoxLayout();
        total_VLayout_user->setSpacing(6);
        total_VLayout_user->setObjectName("total_VLayout_user");

        gridLayout_82->addLayout(total_VLayout_user, 0, 0, 1, 1);

        scrollArea_19->setWidget(total_operations_contents_user);

        gridLayout_81->addWidget(scrollArea_19, 0, 0, 1, 1);


        gridLayout_76->addWidget(total_operations_frame_user, 1, 0, 1, 1);


        gridLayout_24->addWidget(frame_6, 0, 0, 1, 1);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName("verticalLayout_12");
        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_12->addItem(verticalSpacer_11);

        label_51 = new QLabel(frame_5);
        label_51->setObjectName("label_51");
        label_51->setStyleSheet(QString::fromUtf8("margin: 3px;\n"
"font-size: 16px;"));

        verticalLayout_12->addWidget(label_51);

        opType_user = new QComboBox(frame_5);
        opType_user->addItem(QString());
        opType_user->addItem(QString());
        opType_user->addItem(QString());
        opType_user->addItem(QString());
        opType_user->setObjectName("opType_user");
        opType_user->setCursor(QCursor(Qt::PointingHandCursor));
        opType_user->setStyleSheet(QString::fromUtf8("height: 25px"));

        verticalLayout_12->addWidget(opType_user);

        dateEdit_user = new QDateEdit(frame_5);
        dateEdit_user->setObjectName("dateEdit_user");

        verticalLayout_12->addWidget(dateEdit_user);

        OPsearch_user = new QPushButton(frame_5);
        OPsearch_user->setObjectName("OPsearch_user");
        OPsearch_user->setCursor(QCursor(Qt::PointingHandCursor));
        OPsearch_user->setStyleSheet(QString::fromUtf8("height: 30px;"));

        verticalLayout_12->addWidget(OPsearch_user);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_12->addItem(verticalSpacer_12);


        gridLayout_24->addLayout(verticalLayout_12, 0, 1, 1, 1);

        Total_of_the_day_user = new QFrame(frame_5);
        Total_of_the_day_user->setObjectName("Total_of_the_day_user");
        Total_of_the_day_user->setMaximumSize(QSize(16777215, 70));
        gridLayout_27 = new QGridLayout(Total_of_the_day_user);
        gridLayout_27->setSpacing(6);
        gridLayout_27->setContentsMargins(11, 11, 11, 11);
        gridLayout_27->setObjectName("gridLayout_27");
        day_total_income_user = new QTextBrowser(Total_of_the_day_user);
        day_total_income_user->setObjectName("day_total_income_user");
        day_total_income_user->setMinimumSize(QSize(160, 20));
        day_total_income_user->setMaximumSize(QSize(100, 40));
        day_total_income_user->setStyleSheet(QString::fromUtf8(""));

        gridLayout_27->addWidget(day_total_income_user, 1, 0, 1, 1);

        label_55 = new QLabel(Total_of_the_day_user);
        label_55->setObjectName("label_55");
        label_55->setMinimumSize(QSize(120, 0));
        label_55->setMaximumSize(QSize(120, 40));
        label_55->setStyleSheet(QString::fromUtf8("font-size: 18px;\n"
"font-weight: bold;\n"
"color:rgba(120, 91, 71, 1)\n"
""));

        gridLayout_27->addWidget(label_55, 1, 1, 1, 1);

        horizontalSpacer_user = new QSpacerItem(40, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_27->addItem(horizontalSpacer_user, 1, 2, 1, 1);


        gridLayout_24->addWidget(Total_of_the_day_user, 1, 0, 1, 1);


        gridLayout_28->addWidget(frame_5, 0, 0, 1, 1);

        formsStackedWidget->addWidget(user_sales_preview);

        gridLayout_10->addWidget(formsStackedWidget, 1, 0, 1, 1);

        cashRegisterSystem2Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(cashRegisterSystem2Class);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 1366, 22));
        cashRegisterSystem2Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(cashRegisterSystem2Class);
        mainToolBar->setObjectName("mainToolBar");
        cashRegisterSystem2Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(cashRegisterSystem2Class);
        statusBar->setObjectName("statusBar");
        cashRegisterSystem2Class->setStatusBar(statusBar);

        retranslateUi(cashRegisterSystem2Class);

        formsStackedWidget->setCurrentIndex(3);
        class_box->setCurrentIndex(-1);
        item_type_item->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(cashRegisterSystem2Class);
    } // setupUi

    void retranslateUi(QMainWindow *cashRegisterSystem2Class)
    {
        cashRegisterSystem2Class->setWindowTitle(QCoreApplication::translate("cashRegisterSystem2Class", "cashRegisterSystem2", nullptr));
        main_menu->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\331\204\331\202\330\247\330\246\331\205\330\251 \330\247\331\204\330\261\330\246\331\212\330\263\331\212\330\251", nullptr));
        product_menu->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\331\202\330\247\330\246\331\205\330\251 \330\247\331\204\330\263\331\204\330\271", nullptr));
        customers_menu->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\331\202\330\247\330\246\331\205\330\251 \330\247\331\204\330\271\331\205\331\204\330\247\330\241", nullptr));
        go_to_admin_form->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\265\331\201\330\255\330\251 \330\247\331\204\330\247\330\257\331\205\331\206", nullptr));
        go_to_sales_preview_user->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\271\330\261\330\266 \330\247\331\204\331\205\330\264\330\252\330\261\331\212\330\247\330\252", nullptr));
        logout->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\252\330\263\330\254\331\212\331\204 \330\256\330\261\331\210\330\254", nullptr));
        login_btn->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\257\330\256\331\210\331\204", nullptr));
        username_label->setText(QString());
        passwordlabel->setText(QString());
        user_phone_number_label->setText(QString());
        user_check_discount->setText(QString());
        user_price_after->setText(QCoreApplication::translate("cashRegisterSystem2Class", "0", nullptr));
        user_price_after_const->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\331\204\330\263\330\271\330\261 \330\250\330\271\330\257 \330\247\331\204\330\256\330\265\331\205:", nullptr));
        user_price_before->setText(QCoreApplication::translate("cashRegisterSystem2Class", "0", nullptr));
        user_price_before_const->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\331\204\330\263\330\271\330\261 \331\202\330\250\331\204 \330\247\331\204\330\256\330\265\331\205:", nullptr));
        user_cancel_order->setText(QString());
        user_retrieve->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\330\263\330\252\330\261\330\254\330\247\330\271", nullptr));
        user_sell->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\250\331\212\330\271", nullptr));
        label_23->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\271\331\205\331\204\331\212\330\247\330\252 \330\247\331\204\330\250\331\212\330\271:", nullptr));
        label_25->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\271\331\205\331\204\331\212\330\247\330\252 \330\247\330\263\330\252\330\261\330\254\330\247\330\271:", nullptr));
        label_24->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\330\254\331\205\330\247\331\204\331\212 \330\271\331\205\331\204\331\212\330\247\330\252 \330\247\331\204\330\250\331\212\330\271 \331\210 \330\247\331\204\330\247\330\263\330\252\330\261\330\254\330\247\330\271:", nullptr));
        label_14->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\331\206\331\210\330\271 \330\247\331\204\330\267\331\204\330\250:", nullptr));
        opType->setItemText(0, QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\331\204\331\203\331\204", nullptr));
        opType->setItemText(1, QCoreApplication::translate("cashRegisterSystem2Class", "\330\267\331\204\330\250 \330\271\330\247\330\257\331\212", nullptr));
        opType->setItemText(2, QCoreApplication::translate("cashRegisterSystem2Class", "\330\267\331\204\330\250 \330\247\331\210\331\206\331\204\330\247\331\212\331\206", nullptr));
        opType->setItemText(3, QCoreApplication::translate("cashRegisterSystem2Class", "\330\267\331\204\330\250 \330\254\331\205\331\204\330\251", nullptr));

        label_11->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\330\256\330\252\330\261 \330\247\331\204\330\252\330\247\330\261\331\212\330\256:", nullptr));
        date_search_from->setDisplayFormat(QCoreApplication::translate("cashRegisterSystem2Class", "d/M/yyyy", nullptr));
        label_4->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\331\205\331\206", nullptr));
        date_search_to->setDisplayFormat(QCoreApplication::translate("cashRegisterSystem2Class", "d/M/yyyy", nullptr));
        label_5->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\331\204\331\211", nullptr));
        OPsearch->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\250\330\255\330\253", nullptr));
        label_26->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\330\254\331\205\330\247\331\204\331\212 \330\247\331\204\331\212\331\210\331\205", nullptr));
        edit_admin->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\252\330\271\330\257\331\212\331\204 \330\247\331\204\330\247\330\257\331\205\331\206", nullptr));
        Search_btn->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\250\330\255\330\253", nullptr));
        ranksearch->setItemText(0, QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\331\204\331\203\331\204", nullptr));
        ranksearch->setItemText(1, QCoreApplication::translate("cashRegisterSystem2Class", "\330\271\331\205\331\212\331\204 \330\271\330\247\330\257\331\212", nullptr));
        ranksearch->setItemText(2, QCoreApplication::translate("cashRegisterSystem2Class", "\330\271\331\205\331\212\331\204 \331\205\331\207\331\205", nullptr));
        ranksearch->setItemText(3, QCoreApplication::translate("cashRegisterSystem2Class", "\330\267\330\247\331\204\330\250", nullptr));

        label_33->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\250\330\255\330\253 \330\250\330\247\331\204\331\201\330\246\330\251", nullptr));
        label_34->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\250\330\255\330\253 \330\250\330\261\331\202\331\205 \330\247\331\204\331\207\330\247\330\252\331\201", nullptr));
        label_35->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\250\330\255\330\253 \330\250\330\247\331\204\330\247\330\263\331\205", nullptr));
        remove_customer->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\255\330\260\331\201", nullptr));
        add_new->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\245\330\266\330\247\331\201\330\251", nullptr));
        class_box->setCurrentText(QString());
        classLable->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\252\330\265\331\206\331\212\331\201 \330\247\331\204\330\271\331\205\331\212\331\204", nullptr));
        phoneLable->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\261\331\202\331\205 \330\247\331\204\331\205\331\210\330\250\330\247\331\212\331\204", nullptr));
        nameLable->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\330\263\331\205 \330\247\331\204\330\271\331\205\331\212\331\204", nullptr));
        ProdNameLabel->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\330\263\331\205 \330\247\331\204\330\263\331\204\330\271\330\251", nullptr));
        ProdTypeSearch->setItemText(0, QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\331\204\331\203\331\204", nullptr));

        searchprobuctsBTN->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\250\330\255\330\253", nullptr));
        ProdTypeLabel->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\331\206\331\210\330\271 \330\247\331\204\330\263\331\204\330\271\330\251", nullptr));
        admin_order_type_cmb->setItemText(0, QCoreApplication::translate("cashRegisterSystem2Class", "\330\271\330\247\330\257\331\212", nullptr));
        admin_order_type_cmb->setItemText(1, QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\331\210\331\206\331\204\330\247\331\212\331\206", nullptr));
        admin_order_type_cmb->setItemText(2, QCoreApplication::translate("cashRegisterSystem2Class", "\330\254\331\205\331\204\330\251", nullptr));

        admin_order_type_cmb->setPlaceholderText(QCoreApplication::translate("cashRegisterSystem2Class", "\331\206\331\210\330\271 \330\247\331\204\330\267\331\204\330\250", nullptr));
        admin_phone_number_label->setText(QString());
        admin_discount_label->setText(QCoreApplication::translate("cashRegisterSystem2Class", "     \330\247\331\204\330\256\330\265\331\205:", nullptr));
        admin_check_discount->setText(QString());
        admin_price_after->setText(QCoreApplication::translate("cashRegisterSystem2Class", "0", nullptr));
        admin_price_after_const->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\331\204\330\263\330\271\330\261 \330\250\330\271\330\257 \330\247\331\204\330\256\330\265\331\205:", nullptr));
        admin_price_before->setText(QCoreApplication::translate("cashRegisterSystem2Class", "0", nullptr));
        admin_price_before_const->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\331\204\330\263\330\271\330\261 \331\202\330\250\331\204 \330\247\331\204\330\256\330\265\331\205:", nullptr));
        admin_cancel_order->setText(QString());
        admin_retrieve->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\330\263\330\252\330\261\330\254\330\247\330\271", nullptr));
        admin_sell->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\250\331\212\330\271", nullptr));
        label_10->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\331\204\331\206\331\210\330\271", nullptr));
        label_15->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\330\263\331\205 \330\247\331\204\330\272\330\261\330\266", nullptr));
        label_16->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\330\266\330\247\331\201\330\251/\330\255\330\260\331\201 \330\272\330\261\330\266:", nullptr));
        label_17->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\331\204\330\263\330\271\330\261", nullptr));
        add_item->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\330\266\330\247\331\201\330\251", nullptr));
        label_18->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\331\204\331\203\331\205\331\212\330\251", nullptr));
        remove_item->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\255\330\260\331\201", nullptr));
        add_quantity->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\330\266\330\247\331\201\330\251", nullptr));
        remove_quantity->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\255\330\260\331\201", nullptr));
        label_22->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\331\204\331\203\331\205\331\212\330\251", nullptr));
        label_31->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\330\263\331\205 \330\247\331\204\330\272\330\261\330\266", nullptr));
        label_9->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\330\266\330\247\331\201\330\251/\330\255\330\260\331\201 \331\203\331\205\331\212\330\251:", nullptr));
        add_category->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\330\266\330\247\331\201\330\251", nullptr));
        label_19->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\330\266\330\247\331\201\330\251/\330\255\330\260\331\201 \331\201\330\246\330\251:", nullptr));
        label_32->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\330\263\331\205 \330\247\331\204\331\201\330\246\330\251", nullptr));
        remove_category->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\255\330\260\331\201", nullptr));
        label_30->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\330\263\331\205 \330\247\331\204\330\272\330\261\330\266", nullptr));
        label_29->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\331\204\330\263\330\271\330\261", nullptr));
        label_13->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\252\330\271\330\257\331\212\331\204 \330\247\331\204\330\263\330\271\330\261:", nullptr));
        edit_price->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\252\330\271\330\257\331\212\331\204", nullptr));
        delete_all_products->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\255\330\260\331\201 \330\254\331\205\331\212\330\271 \330\247\331\204\331\205\331\206\330\252\330\254\330\247\330\252", nullptr));
        label_48->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\271\331\205\331\204\331\212\330\247\330\252 \330\247\331\204\330\250\331\212\330\271:", nullptr));
        label_49->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\271\331\205\331\204\331\212\330\247\330\252 \330\247\330\263\330\252\330\261\330\254\330\247\330\271:", nullptr));
        label_50->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\330\254\331\205\330\247\331\204\331\212 \330\271\331\205\331\204\331\212\330\247\330\252 \330\247\331\204\330\250\331\212\330\271 \331\210 \330\247\331\204\330\247\330\263\330\252\330\261\330\254\330\247\330\271:", nullptr));
        label_51->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\331\206\331\210\330\271 \330\247\331\204\330\267\331\204\330\250:", nullptr));
        opType_user->setItemText(0, QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\331\204\331\203\331\204", nullptr));
        opType_user->setItemText(1, QCoreApplication::translate("cashRegisterSystem2Class", "\330\267\331\204\330\250 \330\271\330\247\330\257\331\212", nullptr));
        opType_user->setItemText(2, QCoreApplication::translate("cashRegisterSystem2Class", "\330\267\331\204\330\250 \330\247\331\210\331\206\331\204\330\247\331\212\331\206", nullptr));
        opType_user->setItemText(3, QCoreApplication::translate("cashRegisterSystem2Class", "\330\267\331\204\330\250 \330\254\331\205\331\204\330\251", nullptr));

        OPsearch_user->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\250\330\255\330\253", nullptr));
        label_55->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\330\254\331\205\330\247\331\204\331\212 \330\247\331\204\331\212\331\210\331\205", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cashRegisterSystem2Class: public Ui_cashRegisterSystem2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CASHREGISTERSYSTEM_H
