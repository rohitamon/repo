/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_user_name;
    QLineEdit *lineEdit_password;
    QPushButton *login;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_8;
    QWidget *page_2;
    QFrame *frame_2;
    QPushButton *settings;
    QPushButton *pushButton_connect_disconnect;
    QPushButton *pushButton_drive;
    QPushButton *pushButton_robo_log;
    QPushButton *exit;
    QStackedWidget *stackedWidget_2;
    QWidget *drive;
    QGraphicsView *view_1;
    QLabel *robot_top;
    QLabel *sense_fm;
    QLabel *sense_bm;
    QPushButton *up;
    QPushButton *down;
    QPushButton *right;
    QPushButton *left;
    QFrame *frame;
    QLabel *label_6;
    QRadioButton *radioButton_slow;
    QRadioButton *radioButton_medium;
    QRadioButton *radioButton_high;
    QLabel *view_5;
    QPushButton *pushButton_auto_forward;
    QPushButton *pushButton_auto_reverse;
    QPushButton *pushButton_stop;
    QLabel *label_11;
    QPushButton *pushButton_off;
    QPushButton *pushButton_on;
    QWidget *robo_log;
    QPlainTextEdit *system_log;
    QPlainTextEdit *error_log;
    QWidget *settings1;
    QTabWidget *settings_tab;
    QWidget *tab_5;
    QLabel *label_31;
    QLabel *label_32;
    QLineEdit *lineEdit_cam1;
    QLabel *label_33;
    QLineEdit *lineEdit_cam2;
    QPushButton *pushButton_ok;
    QWidget *tab_6;
    QLabel *label_40;
    QLineEdit *lineEdit_ip;
    QLabel *label_41;
    QPushButton *pushButton_ok_2;
    QLabel *label_42;
    QLineEdit *lineEdit_port;
    QWidget *tab;
    QLabel *label_9;
    QWidget *tab_2;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLineEdit *user_id_2;
    QLineEdit *user_pass_2;
    QPushButton *pushButton_ok_3;
    QPushButton *pushButton_refresh;
    QFrame *frame_5;
    QLabel *label_17;
    QLineEdit *user_id;
    QLineEdit *user_pass;
    QLabel *label_18;
    QLabel *label_19;
    QPushButton *login_2;
    QLabel *label_login_info;
    QFrame *frame_3;
    QLabel *label_bat;
    QLabel *label_7;
    QLabel *SS_1;
    QLabel *SS_2;
    QLabel *SS_3;
    QLabel *SS_4;
    QPushButton *pushButton_2;
    QLabel *label_5;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1709, 960);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/JanyuLogo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(-70, 0, 1700, 960));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color:rgb(150,150,150);"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(980, 600, 191, 41));
        label->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
" border-style: solid;\n"
"\n"
"border-radius: 5px;\n"
" border-color:rgb(100,100,100);\n"
"background-color:grey;"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/JanyuLogo.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(950, 200, 291, 91));
        label_2->setStyleSheet(QString::fromUtf8(""));
        lineEdit_user_name = new QLineEdit(page);
        lineEdit_user_name->setObjectName(QString::fromUtf8("lineEdit_user_name"));
        lineEdit_user_name->setGeometry(QRect(1010, 330, 211, 51));
        lineEdit_user_name->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
" border-style: solid;\n"
"\n"
"border-radius: 20px;\n"
" border-color:grey;\n"
"background-color:rgb(200,200,200);"));
        lineEdit_user_name->setReadOnly(false);
        lineEdit_password = new QLineEdit(page);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(1010, 390, 211, 51));
        lineEdit_password->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
" border-style: solid;\n"
"\n"
"border-radius: 20px;\n"
" border-color:grey;\n"
"background-color:rgb(200,200,200);"));
        lineEdit_password->setEchoMode(QLineEdit::Password);
        login = new QPushButton(page);
        login->setObjectName(QString::fromUtf8("login"));
        login->setGeometry(QRect(1020, 470, 131, 41));
        login->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid; \n"
"border-color:rgb(90,90,90); \n"
"border-radius: 17px; \n"
"background-color:qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 rgba(80, 80,80, 150),stop:0.49 rgba(75,75,75,150) ,stop:0.5 rgba(60,60,60,150), stop:1 rgba(55, 55, 55,150));"));
        label_3 = new QLabel(page);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(870, 346, 111, 21));
        label_4 = new QLabel(page);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(870, 410, 111, 21));
        label_8 = new QLabel(page);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(120, 60, 521, 521));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/Uv_tower_with_inverter.jpeg")));
        label_8->setScaledContents(true);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        frame_2 = new QFrame(page_2);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setEnabled(true);
        frame_2->setGeometry(QRect(1180, 50, 161, 581));
        frame_2->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
" border-style: solid;\n"
"\n"
"border-radius: 14px;\n"
" border-color:rgb(80,80,80);\n"
"background-color:grey;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        settings = new QPushButton(frame_2);
        settings->setObjectName(QString::fromUtf8("settings"));
        settings->setGeometry(QRect(30, 370, 110, 70));
        settings->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid; \n"
"border-color:rgb(90,90,90); \n"
"border-radius: 4px; \n"
"background-color:qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 rgba(80, 80,80, 150),stop:0.49 rgba(75,75,75,150) ,stop:0.5 rgba(60,60,60,150), stop:1 rgba(55, 55, 55,150));"));
        pushButton_connect_disconnect = new QPushButton(frame_2);
        pushButton_connect_disconnect->setObjectName(QString::fromUtf8("pushButton_connect_disconnect"));
        pushButton_connect_disconnect->setGeometry(QRect(30, 20, 110, 70));
        pushButton_connect_disconnect->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid; \n"
"border-color:rgb(90,90,90); \n"
"border-radius: 4px; \n"
"background-color:qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 rgba(80, 80,80, 150),stop:0.49 rgba(75,75,75,150) ,stop:0.5 rgba(60,60,60,150), stop:1 rgba(55, 55, 55,150));\n"
""));
        pushButton_connect_disconnect->setCheckable(true);
        pushButton_drive = new QPushButton(frame_2);
        pushButton_drive->setObjectName(QString::fromUtf8("pushButton_drive"));
        pushButton_drive->setGeometry(QRect(30, 130, 110, 70));
        pushButton_drive->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid; \n"
"border-color:rgb(90,90,90); \n"
"border-radius: 4px; \n"
"background-color:qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 rgba(80, 80,80, 150),stop:0.49 rgba(75,75,75,150) ,stop:0.5 rgba(60,60,60,150), stop:1 rgba(55, 55, 55,150));"));
        pushButton_robo_log = new QPushButton(frame_2);
        pushButton_robo_log->setObjectName(QString::fromUtf8("pushButton_robo_log"));
        pushButton_robo_log->setGeometry(QRect(30, 250, 110, 70));
        pushButton_robo_log->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid; \n"
"border-color:rgb(90,90,90); \n"
"border-radius: 4px; \n"
"background-color:qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 rgba(80, 80,80, 150),stop:0.49 rgba(75,75,75,150) ,stop:0.5 rgba(60,60,60,150), stop:1 rgba(55, 55, 55,150));"));
        exit = new QPushButton(frame_2);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setGeometry(QRect(30, 490, 110, 70));
        exit->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid; \n"
"border-color:rgb(90,90,90); \n"
"border-radius: 4px; \n"
"background-color:qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 rgba(80, 80,80, 150),stop:0.49 rgba(75,75,75,150) ,stop:0.5 rgba(60,60,60,150), stop:1 rgba(55, 55, 55,150));"));
        stackedWidget_2 = new QStackedWidget(page_2);
        stackedWidget_2->setObjectName(QString::fromUtf8("stackedWidget_2"));
        stackedWidget_2->setEnabled(true);
        stackedWidget_2->setGeometry(QRect(80, 20, 1081, 891));
        drive = new QWidget();
        drive->setObjectName(QString::fromUtf8("drive"));
        view_1 = new QGraphicsView(drive);
        view_1->setObjectName(QString::fromUtf8("view_1"));
        view_1->setGeometry(QRect(10, 0, 611, 330));
        view_1->setStyleSheet(QString::fromUtf8("background-color:rgb(100,100,100);\n"
"border-width: 5px;\n"
" border-style: solid;\n"
"border-radius: 10px;\n"
" border-color:rgb(90,90,90);"));
        robot_top = new QLabel(drive);
        robot_top->setObjectName(QString::fromUtf8("robot_top"));
        robot_top->setGeometry(QRect(790, 440, 161, 201));
        robot_top->setMaximumSize(QSize(16777214, 16777215));
        robot_top->setSizeIncrement(QSize(100, 50));
        robot_top->setBaseSize(QSize(100, 50));
        robot_top->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid; \n"
"border-color:rgb(90,90,90); \n"
"border-radius: 4px; \n"
"background-color:qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 rgba(180, 180,180, 150),stop:0.49 rgba(175,175,175,150) ,stop:0.5 rgba(160,160,160,150), stop:1 rgba(155, 155, 155,150));"));
        sense_fm = new QLabel(drive);
        sense_fm->setObjectName(QString::fromUtf8("sense_fm"));
        sense_fm->setGeometry(QRect(840, 411, 71, 20));
        sense_fm->setStyleSheet(QString::fromUtf8("border-width: 2px;border-style: solid; border-color:rgb(1,255,1); border-radius: 4px; background-color:qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 rgba(1, 255,1, 150),stop:0.49 rgba(1,200,1,150) ,stop:0.5 rgba(1,125,1,150), stop:1 rgba(1, 155, 1,150));"));
        sense_bm = new QLabel(drive);
        sense_bm->setObjectName(QString::fromUtf8("sense_bm"));
        sense_bm->setGeometry(QRect(840, 650, 71, 21));
        sense_bm->setStyleSheet(QString::fromUtf8("border-width: 2px;border-style: solid; border-color:rgb(1,255,1); border-radius: 4px; background-color:qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 rgba(1, 255,1, 150),stop:0.49 rgba(1,200,1,150) ,stop:0.5 rgba(1,125,1,150), stop:1 rgba(1, 155, 1,150));"));
        up = new QPushButton(drive);
        up->setObjectName(QString::fromUtf8("up"));
        up->setGeometry(QRect(850, 450, 41, 51));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/up-arrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        up->setIcon(icon1);
        up->setIconSize(QSize(35, 35));
        down = new QPushButton(drive);
        down->setObjectName(QString::fromUtf8("down"));
        down->setGeometry(QRect(850, 570, 41, 51));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/down-arrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        down->setIcon(icon2);
        down->setIconSize(QSize(35, 35));
        right = new QPushButton(drive);
        right->setObjectName(QString::fromUtf8("right"));
        right->setGeometry(QRect(900, 510, 41, 51));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/prefix1/right-arrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        right->setIcon(icon3);
        right->setIconSize(QSize(35, 35));
        left = new QPushButton(drive);
        left->setObjectName(QString::fromUtf8("left"));
        left->setGeometry(QRect(800, 510, 41, 51));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/prefix1/left-arrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        left->setIcon(icon4);
        left->setIconSize(QSize(35, 35));
        frame = new QFrame(drive);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(640, 440, 141, 201));
        frame->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid; \n"
"border-color:rgb(90,90,90); \n"
"border-radius: 4px; "));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 10, 61, 31));
        radioButton_slow = new QRadioButton(frame);
        radioButton_slow->setObjectName(QString::fromUtf8("radioButton_slow"));
        radioButton_slow->setGeometry(QRect(20, 60, 101, 23));
        radioButton_medium = new QRadioButton(frame);
        radioButton_medium->setObjectName(QString::fromUtf8("radioButton_medium"));
        radioButton_medium->setGeometry(QRect(20, 110, 101, 23));
        radioButton_high = new QRadioButton(frame);
        radioButton_high->setObjectName(QString::fromUtf8("radioButton_high"));
        radioButton_high->setGeometry(QRect(20, 160, 101, 23));
        view_5 = new QLabel(drive);
        view_5->setObjectName(QString::fromUtf8("view_5"));
        view_5->setGeometry(QRect(10, 340, 611, 330));
        view_5->setStyleSheet(QString::fromUtf8("background-color:rgb(100,100,100);\n"
"border-width: 5px;\n"
" border-style: solid;\n"
"border-radius: 10px;\n"
" border-color:rgb(90,90,90);"));
        pushButton_auto_forward = new QPushButton(drive);
        pushButton_auto_forward->setObjectName(QString::fromUtf8("pushButton_auto_forward"));
        pushButton_auto_forward->setGeometry(QRect(970, 450, 89, 41));
        pushButton_auto_forward->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid; \n"
"border-color:rgb(90,90,90); \n"
"border-radius: 4px; \n"
"background-color:qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 rgba(80, 80,80, 150),stop:0.49 rgba(75,75,75,150) ,stop:0.5 rgba(60,60,60,150), stop:1 rgba(55, 55, 55,150));\n"
""));
        pushButton_auto_reverse = new QPushButton(drive);
        pushButton_auto_reverse->setObjectName(QString::fromUtf8("pushButton_auto_reverse"));
        pushButton_auto_reverse->setGeometry(QRect(970, 590, 89, 41));
        pushButton_auto_reverse->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid; \n"
"border-color:rgb(90,90,90); \n"
"border-radius: 4px; \n"
"background-color:qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 rgba(80, 80,80, 150),stop:0.49 rgba(75,75,75,150) ,stop:0.5 rgba(60,60,60,150), stop:1 rgba(55, 55, 55,150));\n"
""));
        pushButton_stop = new QPushButton(drive);
        pushButton_stop->setObjectName(QString::fromUtf8("pushButton_stop"));
        pushButton_stop->setGeometry(QRect(970, 515, 89, 51));
        pushButton_stop->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid; \n"
"border-color:rgb(90,90,90); \n"
"border-radius: 4px; \n"
"background-color:qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 rgba(80, 80,80, 150),stop:0.49 rgba(75,75,75,150) ,stop:0.5 rgba(60,60,60,150), stop:1 rgba(55, 55, 55,150));\n"
""));
        label_11 = new QLabel(drive);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(650, 0, 401, 401));
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/Uv_tower_with_inverter.jpeg")));
        label_11->setScaledContents(true);
        pushButton_off = new QPushButton(drive);
        pushButton_off->setObjectName(QString::fromUtf8("pushButton_off"));
        pushButton_off->setGeometry(QRect(700, 150, 71, 31));
        pushButton_off->setStyleSheet(QString::fromUtf8(" border-width: 2px;border-style: solid; border-color:rgb(90,90,90);border-radius: 12px; background-color:qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 rgba(80, 80,80, 150),stop:0.49 rgba(75,75,75,150) ,stop:0.5 rgba(60,60,60,150), stop:1 rgba(55, 55, 55,150));\n"
""));
        pushButton_off->setCheckable(true);
        pushButton_on = new QPushButton(drive);
        pushButton_on->setObjectName(QString::fromUtf8("pushButton_on"));
        pushButton_on->setGeometry(QRect(700, 96, 71, 31));
        pushButton_on->setStyleSheet(QString::fromUtf8(" border-width: 2px;border-style: solid; border-color:rgb(90,90,90);border-radius: 12px; background-color:qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 rgba(80, 80,80, 150),stop:0.49 rgba(75,75,75,150) ,stop:0.5 rgba(60,60,60,150), stop:1 rgba(55, 55, 55,150));\n"
""));
        pushButton_on->setCheckable(true);
        stackedWidget_2->addWidget(drive);
        robo_log = new QWidget();
        robo_log->setObjectName(QString::fromUtf8("robo_log"));
        system_log = new QPlainTextEdit(robo_log);
        system_log->setObjectName(QString::fromUtf8("system_log"));
        system_log->setGeometry(QRect(30, 10, 821, 321));
        system_log->setStyleSheet(QString::fromUtf8("background-color:rgb(100,100,100);\n"
"border-width: 5px;\n"
" border-style: solid;\n"
"border-radius: 10px;\n"
" border-color:rgb(90,90,90);"));
        error_log = new QPlainTextEdit(robo_log);
        error_log->setObjectName(QString::fromUtf8("error_log"));
        error_log->setGeometry(QRect(30, 340, 821, 321));
        error_log->setStyleSheet(QString::fromUtf8("background-color:rgb(100,100,100);\n"
"border-width: 5px;\n"
" border-style: solid;\n"
"border-radius: 10px;\n"
" border-color:rgb(90,90,90);"));
        stackedWidget_2->addWidget(robo_log);
        settings1 = new QWidget();
        settings1->setObjectName(QString::fromUtf8("settings1"));
        settings_tab = new QTabWidget(settings1);
        settings_tab->setObjectName(QString::fromUtf8("settings_tab"));
        settings_tab->setGeometry(QRect(90, 30, 461, 521));
        settings_tab->setStyleSheet(QString::fromUtf8("background-color: grey"));
        settings_tab->setTabPosition(QTabWidget::North);
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        label_31 = new QLabel(tab_5);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(9, 40, 255, 17));
        label_32 = new QLabel(tab_5);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(9, 80, 68, 17));
        lineEdit_cam1 = new QLineEdit(tab_5);
        lineEdit_cam1->setObjectName(QString::fromUtf8("lineEdit_cam1"));
        lineEdit_cam1->setGeometry(QRect(9, 110, 301, 25));
        lineEdit_cam1->setStyleSheet(QString::fromUtf8("background-color:white"));
        label_33 = new QLabel(tab_5);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(9, 170, 68, 17));
        lineEdit_cam2 = new QLineEdit(tab_5);
        lineEdit_cam2->setObjectName(QString::fromUtf8("lineEdit_cam2"));
        lineEdit_cam2->setGeometry(QRect(9, 200, 301, 25));
        lineEdit_cam2->setStyleSheet(QString::fromUtf8("background-color:white"));
        pushButton_ok = new QPushButton(tab_5);
        pushButton_ok->setObjectName(QString::fromUtf8("pushButton_ok"));
        pushButton_ok->setGeometry(QRect(30, 290, 81, 61));
        settings_tab->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        label_40 = new QLabel(tab_6);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setGeometry(QRect(90, 20, 131, 16));
        lineEdit_ip = new QLineEdit(tab_6);
        lineEdit_ip->setObjectName(QString::fromUtf8("lineEdit_ip"));
        lineEdit_ip->setGeometry(QRect(120, 70, 101, 20));
        lineEdit_ip->setStyleSheet(QString::fromUtf8("background-color:white"));
        label_41 = new QLabel(tab_6);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setGeometry(QRect(20, 75, 21, 16));
        pushButton_ok_2 = new QPushButton(tab_6);
        pushButton_ok_2->setObjectName(QString::fromUtf8("pushButton_ok_2"));
        pushButton_ok_2->setGeometry(QRect(50, 280, 81, 61));
        label_42 = new QLabel(tab_6);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        label_42->setGeometry(QRect(20, 105, 51, 16));
        lineEdit_port = new QLineEdit(tab_6);
        lineEdit_port->setObjectName(QString::fromUtf8("lineEdit_port"));
        lineEdit_port->setGeometry(QRect(120, 100, 101, 20));
        lineEdit_port->setStyleSheet(QString::fromUtf8("background-color:white"));
        settings_tab->addTab(tab_6, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label_9 = new QLabel(tab);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(30, 40, 141, 17));
        settings_tab->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        label_20 = new QLabel(tab_2);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(30, 50, 201, 17));
        label_21 = new QLabel(tab_2);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(120, 170, 101, 17));
        label_22 = new QLabel(tab_2);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(120, 130, 61, 17));
        user_id_2 = new QLineEdit(tab_2);
        user_id_2->setObjectName(QString::fromUtf8("user_id_2"));
        user_id_2->setGeometry(QRect(270, 130, 101, 20));
        user_id_2->setStyleSheet(QString::fromUtf8("background-color:white"));
        user_pass_2 = new QLineEdit(tab_2);
        user_pass_2->setObjectName(QString::fromUtf8("user_pass_2"));
        user_pass_2->setGeometry(QRect(270, 170, 101, 20));
        user_pass_2->setStyleSheet(QString::fromUtf8("background-color:white"));
        user_pass_2->setEchoMode(QLineEdit::Password);
        pushButton_ok_3 = new QPushButton(tab_2);
        pushButton_ok_3->setObjectName(QString::fromUtf8("pushButton_ok_3"));
        pushButton_ok_3->setGeometry(QRect(120, 240, 89, 25));
        settings_tab->addTab(tab_2, QString());
        pushButton_refresh = new QPushButton(settings1);
        pushButton_refresh->setObjectName(QString::fromUtf8("pushButton_refresh"));
        pushButton_refresh->setGeometry(QRect(600, 490, 89, 61));
        frame_5 = new QFrame(settings1);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(650, 70, 321, 311));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        label_17 = new QLabel(frame_5);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(30, 20, 101, 17));
        user_id = new QLineEdit(frame_5);
        user_id->setObjectName(QString::fromUtf8("user_id"));
        user_id->setGeometry(QRect(170, 100, 101, 20));
        user_id->setStyleSheet(QString::fromUtf8("background-color:white"));
        user_pass = new QLineEdit(frame_5);
        user_pass->setObjectName(QString::fromUtf8("user_pass"));
        user_pass->setGeometry(QRect(170, 140, 101, 20));
        user_pass->setStyleSheet(QString::fromUtf8("background-color:white"));
        user_pass->setEchoMode(QLineEdit::Password);
        label_18 = new QLabel(frame_5);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(60, 100, 51, 17));
        label_19 = new QLabel(frame_5);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(60, 140, 71, 17));
        login_2 = new QPushButton(frame_5);
        login_2->setObjectName(QString::fromUtf8("login_2"));
        login_2->setGeometry(QRect(60, 220, 89, 25));
        label_login_info = new QLabel(settings1);
        label_login_info->setObjectName(QString::fromUtf8("label_login_info"));
        label_login_info->setGeometry(QRect(660, 30, 141, 17));
        stackedWidget_2->addWidget(settings1);
        frame_3 = new QFrame(page_2);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(1190, 10, 61, 31));
        frame_3->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid; \n"
"border-color:rgb(90,90,90); \n"
"border-radius: 4px; "));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_bat = new QLabel(frame_3);
        label_bat->setObjectName(QString::fromUtf8("label_bat"));
        label_bat->setGeometry(QRect(5, 3, 20, 25));
        label_bat->setStyleSheet(QString::fromUtf8(""));
        label_7 = new QLabel(page_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(1250, 17, 7, 16));
        label_7->setStyleSheet(QString::fromUtf8("background-color:black"));
        SS_1 = new QLabel(page_2);
        SS_1->setObjectName(QString::fromUtf8("SS_1"));
        SS_1->setGeometry(QRect(1340, 4, 8, 41));
        SS_1->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid; \n"
"border-color:rgb(90,90,90); \n"
""));
        SS_2 = new QLabel(page_2);
        SS_2->setObjectName(QString::fromUtf8("SS_2"));
        SS_2->setGeometry(QRect(1330, 9, 8, 36));
        SS_2->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid; \n"
"border-color:rgb(90,90,90); \n"
""));
        SS_3 = new QLabel(page_2);
        SS_3->setObjectName(QString::fromUtf8("SS_3"));
        SS_3->setGeometry(QRect(1320, 15, 8, 30));
        SS_3->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid; \n"
"border-color:rgb(90,90,90); \n"
""));
        SS_4 = new QLabel(page_2);
        SS_4->setObjectName(QString::fromUtf8("SS_4"));
        SS_4->setGeometry(QRect(1310, 20, 8, 25));
        SS_4->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid; \n"
"border-color:rgb(90,90,90); \n"
""));
        pushButton_2 = new QPushButton(page_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(1410, 10, 51, 25));
        label_5 = new QLabel(page_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(1160, 640, 191, 41));
        label_5->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
" border-style: solid;\n"
"\n"
"border-radius: 5px;\n"
" border-color:rgb(100,100,100);\n"
"background-color:grey;"));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/JanyuLogo.png")));
        label_5->setScaledContents(true);
        stackedWidget->addWidget(page_2);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);
        stackedWidget_2->setCurrentIndex(0);
        settings_tab->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Medi_doot", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:48pt; vertical-align:sub;\">UV_Tower</span></p></body></html>", nullptr));
        lineEdit_user_name->setText(QString());
        lineEdit_password->setText(QString());
        login->setText(QCoreApplication::translate("MainWindow", "LOGIN", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "USER NAME", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "PASSWORD", nullptr));
        label_8->setText(QString());
        settings->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        pushButton_connect_disconnect->setText(QCoreApplication::translate("MainWindow", "Robot\n"
" Off", nullptr));
        pushButton_drive->setText(QCoreApplication::translate("MainWindow", "Drive", nullptr));
        pushButton_robo_log->setText(QCoreApplication::translate("MainWindow", "Robo Log", nullptr));
        exit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        robot_top->setText(QString());
        sense_fm->setText(QString());
        sense_bm->setText(QString());
        up->setText(QString());
        down->setText(QString());
        right->setText(QString());
        left->setText(QString());
        label_6->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Speed</span></p></body></html>", nullptr));
        radioButton_slow->setText(QCoreApplication::translate("MainWindow", "Slow", nullptr));
        radioButton_medium->setText(QCoreApplication::translate("MainWindow", "Medium", nullptr));
        radioButton_high->setText(QCoreApplication::translate("MainWindow", "High", nullptr));
        view_5->setText(QString());
        pushButton_auto_forward->setText(QCoreApplication::translate("MainWindow", "Auto\n"
"Forward", nullptr));
        pushButton_auto_reverse->setText(QCoreApplication::translate("MainWindow", "Auto\n"
"Reverse", nullptr));
        pushButton_stop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        label_11->setText(QString());
        pushButton_off->setText(QCoreApplication::translate("MainWindow", "UV OFF", nullptr));
        pushButton_on->setText(QCoreApplication::translate("MainWindow", "UV ON", nullptr));
        system_log->setPlainText(QCoreApplication::translate("MainWindow", "System Log:", nullptr));
        error_log->setPlainText(QCoreApplication::translate("MainWindow", "Error Log:", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "Enter Network URL of the IP Cameras", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindow", "Camera 1:", nullptr));
        label_33->setText(QCoreApplication::translate("MainWindow", "Camera 2:", nullptr));
        pushButton_ok->setText(QCoreApplication::translate("MainWindow", "OK", nullptr));
        settings_tab->setTabText(settings_tab->indexOf(tab_5), QCoreApplication::translate("MainWindow", "Camera", nullptr));
        label_40->setText(QCoreApplication::translate("MainWindow", "Enter IP of Bot", nullptr));
        label_41->setText(QCoreApplication::translate("MainWindow", "IP", nullptr));
        pushButton_ok_2->setText(QCoreApplication::translate("MainWindow", "OK", nullptr));
        label_42->setText(QCoreApplication::translate("MainWindow", "PORT", nullptr));
        settings_tab->setTabText(settings_tab->indexOf(tab_6), QCoreApplication::translate("MainWindow", "IP of ROV", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Auto Mode Speed", nullptr));
        settings_tab->setTabText(settings_tab->indexOf(tab), QCoreApplication::translate("MainWindow", "Speed", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Change User &/or Password:", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "New Password", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "New ID", nullptr));
        user_id_2->setText(QString());
        user_pass_2->setText(QString());
        pushButton_ok_3->setText(QCoreApplication::translate("MainWindow", "Ok", nullptr));
        settings_tab->setTabText(settings_tab->indexOf(tab_2), QCoreApplication::translate("MainWindow", "User", nullptr));
        pushButton_refresh->setText(QCoreApplication::translate("MainWindow", "Refesh", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        user_id->setText(QString());
        label_18->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        login_2->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label_login_info->setText(QCoreApplication::translate("MainWindow", "Not Logged In", nullptr));
        label_bat->setText(QString());
        label_7->setText(QString());
        SS_1->setText(QString());
        SS_2->setText(QString());
        SS_3->setText(QString());
        SS_4->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
