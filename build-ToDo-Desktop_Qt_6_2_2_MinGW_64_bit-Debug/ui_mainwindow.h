/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *upperWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QWidget *statActive;
    QSpacerItem *horizontalSpacer_3;
    QWidget *statCompleted;
    QSpacerItem *horizontalSpacer_2;
    QWidget *statsTasks;
    QSpacerItem *horizontalSpacer;
    QWidget *statOverdue;
    QSpacerItem *statSpacer3;
    QSpacerItem *statSpacer1;
    QSpacerItem *statSpacer4;
    QSpacerItem *statSpacer2;
    QPushButton *upperMaximize;
    QPushButton *upperMinimize;
    QPushButton *upperClose;
    QPushButton *upperBurgerMenu;
    QPushButton *upperInfoButton;
    QPushButton *UpperMenu;
    QLabel *upperToDoLogo;
    QLabel *upperTime;
    QLabel *upperDate;
    QWidget *sideBar;
    QWidget *userImage;
    QLabel *userName;
    QWidget *seperateBar;
    QLabel *userName_2;
    QWidget *seperateBar_2;
    QWidget *seperateBar_3;
    QWidget *taskCard;
    QLabel *userName_3;
    QWidget *widget;
    QLabel *userName_4;
    QWidget *widget_2;
    QLabel *userName_5;
    QWidget *widget_3;
    QLabel *userName_6;
    QProgressBar *progressBar;
    QWidget *seperateBar_4;
    QLabel *userName_7;
    QLabel *userName_8;
    QLabel *userName_9;
    QLabel *userName_10;
    QLabel *userName_11;
    QLabel *userName_12;
    QWidget *seperateBar_5;
    QLabel *userName_13;
    QLabel *userName_14;
    QPushButton *taskCompleteButton;
    QPushButton *taskDismissButton;
    QPushButton *taskBottomOpenButton;
    QWidget *seperateBar_6;
    QFrame *sideMenuTasks;
    QWidget *ImageTasks;
    QPushButton *buttonTasks;
    QFrame *sideMenuSettings;
    QWidget *ImageSettings;
    QPushButton *buttonSettings;
    QFrame *sideMenuCredits;
    QWidget *ImageCredits;
    QPushButton *buttonCredits;
    QFrame *sideMenuOverview;
    QWidget *imageOverview;
    QPushButton *buttonOverview;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1280, 800);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        upperWidget = new QWidget(centralwidget);
        upperWidget->setObjectName(QString::fromUtf8("upperWidget"));
        upperWidget->setGeometry(QRect(-10, 0, 1291, 51));
        upperWidget->setStyleSheet(QString::fromUtf8("background: #FDFDFD;\n"
"border-bottom: 3px solid rgba(0,0,0,0.07)"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(240, 40, 681, 217));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(30, 30, 30, 30);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        statActive = new QWidget(gridLayoutWidget);
        statActive->setObjectName(QString::fromUtf8("statActive"));
        statActive->setMinimumSize(QSize(133, 143));
        statActive->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 7px;\n"
"box-shadow: 10px 5px;"));

        horizontalLayout->addWidget(statActive);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        statCompleted = new QWidget(gridLayoutWidget);
        statCompleted->setObjectName(QString::fromUtf8("statCompleted"));
        statCompleted->setMinimumSize(QSize(133, 143));
        statCompleted->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 7px;"));

        horizontalLayout->addWidget(statCompleted);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        statsTasks = new QWidget(gridLayoutWidget);
        statsTasks->setObjectName(QString::fromUtf8("statsTasks"));
        statsTasks->setMinimumSize(QSize(133, 143));
        statsTasks->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 7px;"));

        horizontalLayout->addWidget(statsTasks);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        statOverdue = new QWidget(gridLayoutWidget);
        statOverdue->setObjectName(QString::fromUtf8("statOverdue"));
        statOverdue->setEnabled(true);
        statOverdue->setMinimumSize(QSize(133, 143));
        statOverdue->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 7px;"));

        horizontalLayout->addWidget(statOverdue);


        gridLayout->addLayout(horizontalLayout, 1, 1, 1, 1);

        statSpacer3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(statSpacer3, 0, 1, 1, 1);

        statSpacer1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(statSpacer1, 1, 0, 1, 1);

        statSpacer4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(statSpacer4, 2, 1, 1, 1);

        statSpacer2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(statSpacer2, 1, 2, 1, 1);

        upperMaximize = new QPushButton(centralwidget);
        upperMaximize->setObjectName(QString::fromUtf8("upperMaximize"));
        upperMaximize->setGeometry(QRect(1210, 8, 31, 31));
        upperMaximize->setCursor(QCursor(Qt::PointingHandCursor));
        upperMaximize->setStyleSheet(QString::fromUtf8("QPushButton#upperMaximize{\n"
"	image: url(:/Resources/Img/Maximize.png);\n"
"	background-color: rgba(0,0,0,0);\n"
"}\n"
"\n"
"QPushButton:hover#upperMaximize{\n"
"	background-color:rgb(25,52,82);\n"
"	border-radius:15px;\n"
"}"));
        upperMinimize = new QPushButton(centralwidget);
        upperMinimize->setObjectName(QString::fromUtf8("upperMinimize"));
        upperMinimize->setGeometry(QRect(1181, 8, 31, 31));
        upperMinimize->setCursor(QCursor(Qt::PointingHandCursor));
        upperMinimize->setStyleSheet(QString::fromUtf8("QPushButton#upperMinimize{\n"
"	image: url(:/Resources/Img/Minimize.png);\n"
"	background-color: rgba(0,0,0,0);\n"
"}\n"
"\n"
"QPushButton:hover#upperMinimize{\n"
"	background-color:rgb(25,52,82);\n"
"	border-radius:15px;\n"
"}"));
        upperClose = new QPushButton(centralwidget);
        upperClose->setObjectName(QString::fromUtf8("upperClose"));
        upperClose->setGeometry(QRect(1240, 8, 31, 31));
        upperClose->setCursor(QCursor(Qt::PointingHandCursor));
        upperClose->setStyleSheet(QString::fromUtf8("QPushButton#upperClose{\n"
"	image: url(:/Resources/Img/Close.png);\n"
"	background-color: rgba(0,0,0,0);\n"
"}\n"
"\n"
"QPushButton:hover#upperClose{\n"
"	background-color:rgb(25,52,82);\n"
"	border-radius:15px;\n"
"}"));
        upperBurgerMenu = new QPushButton(centralwidget);
        upperBurgerMenu->setObjectName(QString::fromUtf8("upperBurgerMenu"));
        upperBurgerMenu->setGeometry(QRect(1119, 9, 27, 30));
        upperBurgerMenu->setCursor(QCursor(Qt::PointingHandCursor));
        upperBurgerMenu->setStyleSheet(QString::fromUtf8("QPushButton#upperBurgerMenu{\n"
"	image: url(:/Resources/Img/BurgerMenu.png);\n"
"	background-color: rgba(0,0,0,0);\n"
"}\n"
"\n"
"QPushButton:hover#upperBurgerMenu{\n"
"	margin-top: -2px;\n"
"}"));
        upperInfoButton = new QPushButton(centralwidget);
        upperInfoButton->setObjectName(QString::fromUtf8("upperInfoButton"));
        upperInfoButton->setGeometry(QRect(1150, 9, 26, 30));
        upperInfoButton->setCursor(QCursor(Qt::PointingHandCursor));
        upperInfoButton->setStyleSheet(QString::fromUtf8("QPushButton#upperInfoButton{\n"
"	image: url(:/Resources/Img/info.png);\n"
"	background-color: rgba(0,0,0,0);\n"
"}\n"
"\n"
"QPushButton:hover#upperInfoButton{\n"
"	margin-top: -2px;\n"
"}"));
        UpperMenu = new QPushButton(centralwidget);
        UpperMenu->setObjectName(QString::fromUtf8("UpperMenu"));
        UpperMenu->setGeometry(QRect(10, 10, 30, 30));
        UpperMenu->setCursor(QCursor(Qt::PointingHandCursor));
        UpperMenu->setStyleSheet(QString::fromUtf8("QPushButton#UpperMenu{\n"
"	image: url(:/Resources/Img/Menu);\n"
"	background-color: rgba(0,0,0,0);\n"
"}\n"
"\n"
"QPushButton:hover#UpperMenu{\n"
"	margin-top: -2px;\n"
"}"));
        upperToDoLogo = new QLabel(centralwidget);
        upperToDoLogo->setObjectName(QString::fromUtf8("upperToDoLogo"));
        upperToDoLogo->setGeometry(QRect(50, 3, 131, 41));
        QFont font;
        font.setPointSize(22);
        font.setBold(false);
        font.setItalic(false);
        upperToDoLogo->setFont(font);
        upperToDoLogo->setCursor(QCursor(Qt::PointingHandCursor));
        upperToDoLogo->setStyleSheet(QString::fromUtf8("color: rgb(210, 210, 210);"));
        upperToDoLogo->setScaledContents(false);
        upperTime = new QLabel(centralwidget);
        upperTime->setObjectName(QString::fromUtf8("upperTime"));
        upperTime->setGeometry(QRect(560, 10, 81, 31));
        QFont font1;
        font1.setPointSize(23);
        font1.setBold(false);
        font1.setItalic(false);
        upperTime->setFont(font1);
        upperTime->setStyleSheet(QString::fromUtf8("color: rgb(200, 200, 200);"));
        upperDate = new QLabel(centralwidget);
        upperDate->setObjectName(QString::fromUtf8("upperDate"));
        upperDate->setGeometry(QRect(640, 14, 101, 31));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(false);
        font2.setItalic(false);
        upperDate->setFont(font2);
        upperDate->setStyleSheet(QString::fromUtf8("color: rgb(210, 210, 210);"));
        sideBar = new QWidget(centralwidget);
        sideBar->setObjectName(QString::fromUtf8("sideBar"));
        sideBar->setGeometry(QRect(0, 50, 231, 751));
        sideBar->setStyleSheet(QString::fromUtf8("background: #FFFFFF;\n"
"border-right: 3px solid rgba(0,0,0,0.07);"));
        userImage = new QWidget(centralwidget);
        userImage->setObjectName(QString::fromUtf8("userImage"));
        userImage->setGeometry(QRect(14, 64, 47, 47));
        userImage->setStyleSheet(QString::fromUtf8("image: url(:/Resources/Img/orangutanImageCropped.png);"));
        userName = new QLabel(centralwidget);
        userName->setObjectName(QString::fromUtf8("userName"));
        userName->setGeometry(QRect(73, 63, 151, 31));
        QFont font3;
        font3.setPointSize(16);
        font3.setBold(false);
        font3.setItalic(true);
        userName->setFont(font3);
        userName->setStyleSheet(QString::fromUtf8("color: rgb(200, 200, 200);"));
        userName->setScaledContents(false);
        seperateBar = new QWidget(centralwidget);
        seperateBar->setObjectName(QString::fromUtf8("seperateBar"));
        seperateBar->setGeometry(QRect(0, 124, 229, 3));
        seperateBar->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 250, 250);"));
        userName_2 = new QLabel(centralwidget);
        userName_2->setObjectName(QString::fromUtf8("userName_2"));
        userName_2->setGeometry(QRect(13, 136, 151, 31));
        QFont font4;
        font4.setPointSize(18);
        font4.setBold(false);
        font4.setItalic(false);
        userName_2->setFont(font4);
        userName_2->setStyleSheet(QString::fromUtf8("color: rgb(210, 210, 210);"));
        userName_2->setScaledContents(false);
        seperateBar_2 = new QWidget(centralwidget);
        seperateBar_2->setObjectName(QString::fromUtf8("seperateBar_2"));
        seperateBar_2->setGeometry(QRect(10, 170, 219, 2));
        seperateBar_2->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 250, 250);"));
        seperateBar_3 = new QWidget(centralwidget);
        seperateBar_3->setObjectName(QString::fromUtf8("seperateBar_3"));
        seperateBar_3->setGeometry(QRect(10, 414, 219, 2));
        seperateBar_3->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 250, 250);"));
        taskCard = new QWidget(centralwidget);
        taskCard->setObjectName(QString::fromUtf8("taskCard"));
        taskCard->setGeometry(QRect(270, 240, 611, 171));
        taskCard->setMinimumSize(QSize(133, 143));
        taskCard->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius:12px;"));
        userName_3 = new QLabel(taskCard);
        userName_3->setObjectName(QString::fromUtf8("userName_3"));
        userName_3->setGeometry(QRect(14, 7, 271, 51));
        QFont font5;
        font5.setPointSize(13);
        font5.setBold(false);
        font5.setItalic(false);
        userName_3->setFont(font5);
        userName_3->setCursor(QCursor(Qt::PointingHandCursor));
        userName_3->setAutoFillBackground(false);
        userName_3->setStyleSheet(QString::fromUtf8("color: rgb(146, 146, 146);"));
        userName_3->setScaledContents(true);
        userName_3->setWordWrap(true);
        widget = new QWidget(taskCard);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(14, 74, 12, 12));
        widget->setStyleSheet(QString::fromUtf8("image: url(:/Resources/Img/bulletPoint.png);"));
        userName_4 = new QLabel(taskCard);
        userName_4->setObjectName(QString::fromUtf8("userName_4"));
        userName_4->setGeometry(QRect(31, 67, 251, 43));
        QFont font6;
        font6.setPointSize(12);
        font6.setBold(false);
        font6.setItalic(false);
        userName_4->setFont(font6);
        userName_4->setAutoFillBackground(false);
        userName_4->setStyleSheet(QString::fromUtf8("color: rgb(200, 200, 200);"));
        userName_4->setScaledContents(true);
        userName_4->setWordWrap(true);
        widget_2 = new QWidget(taskCard);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(14, 120, 12, 12));
        widget_2->setStyleSheet(QString::fromUtf8("image: url(:/Resources/Img/bulletPoint.png);"));
        userName_5 = new QLabel(taskCard);
        userName_5->setObjectName(QString::fromUtf8("userName_5"));
        userName_5->setGeometry(QRect(31, 113, 251, 43));
        userName_5->setFont(font6);
        userName_5->setAutoFillBackground(false);
        userName_5->setStyleSheet(QString::fromUtf8("color: rgb(200, 200, 200);"));
        userName_5->setScaledContents(true);
        userName_5->setWordWrap(true);
        widget_3 = new QWidget(taskCard);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(329, 120, 12, 12));
        widget_3->setStyleSheet(QString::fromUtf8("image: url(:/Resources/Img/bulletPoint.png);"));
        userName_6 = new QLabel(taskCard);
        userName_6->setObjectName(QString::fromUtf8("userName_6"));
        userName_6->setGeometry(QRect(346, 113, 251, 43));
        userName_6->setFont(font6);
        userName_6->setAutoFillBackground(false);
        userName_6->setStyleSheet(QString::fromUtf8("color: rgb(200, 200, 200);"));
        userName_6->setScaledContents(true);
        userName_6->setWordWrap(true);
        progressBar = new QProgressBar(taskCard);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(293, 40, 291, 16));
        QFont font7;
        font7.setBold(true);
        progressBar->setFont(font7);
        progressBar->setStyleSheet(QString::fromUtf8("QProgressBar:horizontal {\n"
"	border-radius: 8px;\n"
"	background: rgb(245, 245, 245);\n"
"	padding: 0px;\n"
"}\n"
"\n"
"QProgressBar::chunk:horizontal {\n"
"	border-radius: 8px;\n"
"	background: qlineargradient(	x1: 0, y1: 0,\n"
"														x2: 0, y2: 1, \n"
"														stop: 0 rgb(48, 98, 156), \n"
"														stop: 1 rgb(54, 111, 176));\n"
"}"));
        progressBar->setValue(24);
        progressBar->setTextVisible(false);
        progressBar->setInvertedAppearance(false);
        seperateBar_4 = new QWidget(taskCard);
        seperateBar_4->setObjectName(QString::fromUtf8("seperateBar_4"));
        seperateBar_4->setGeometry(QRect(303, 52, 2, 48));
        seperateBar_4->setStyleSheet(QString::fromUtf8("background-color: rgb(48, 98, 156);;"));
        userName_7 = new QLabel(taskCard);
        userName_7->setObjectName(QString::fromUtf8("userName_7"));
        userName_7->setGeometry(QRect(308, 53, 101, 21));
        QFont font8;
        font8.setPointSize(11);
        font8.setBold(false);
        font8.setItalic(false);
        userName_7->setFont(font8);
        userName_7->setAutoFillBackground(false);
        userName_7->setStyleSheet(QString::fromUtf8("color: rgb(140, 140, 140);\n"
"background-color: rgba(255, 255, 255, 0);"));
        userName_7->setScaledContents(true);
        userName_7->setWordWrap(true);
        userName_8 = new QLabel(taskCard);
        userName_8->setObjectName(QString::fromUtf8("userName_8"));
        userName_8->setGeometry(QRect(310, 71, 101, 16));
        QFont font9;
        font9.setPointSize(9);
        font9.setBold(false);
        font9.setItalic(false);
        userName_8->setFont(font9);
        userName_8->setLayoutDirection(Qt::LeftToRight);
        userName_8->setAutoFillBackground(false);
        userName_8->setStyleSheet(QString::fromUtf8("color: rgb(180, 180, 180);\n"
"background-color: rgba(255, 255, 255, 0);"));
        userName_8->setScaledContents(true);
        userName_8->setWordWrap(true);
        userName_9 = new QLabel(taskCard);
        userName_9->setObjectName(QString::fromUtf8("userName_9"));
        userName_9->setGeometry(QRect(310, 85, 41, 16));
        userName_9->setFont(font9);
        userName_9->setLayoutDirection(Qt::LeftToRight);
        userName_9->setAutoFillBackground(false);
        userName_9->setStyleSheet(QString::fromUtf8("color: rgb(180, 180, 180);\n"
"background-color: rgba(255, 255, 255, 0);"));
        userName_9->setScaledContents(true);
        userName_9->setWordWrap(true);
        userName_10 = new QLabel(taskCard);
        userName_10->setObjectName(QString::fromUtf8("userName_10"));
        userName_10->setGeometry(QRect(499, 55, 101, 21));
        userName_10->setFont(font8);
        userName_10->setAutoFillBackground(false);
        userName_10->setStyleSheet(QString::fromUtf8("color: rgb(140, 140, 140);\n"
"background-color: rgba(255, 255, 255, 0);"));
        userName_10->setScaledContents(true);
        userName_10->setWordWrap(true);
        userName_11 = new QLabel(taskCard);
        userName_11->setObjectName(QString::fromUtf8("userName_11"));
        userName_11->setGeometry(QRect(501, 73, 101, 16));
        userName_11->setFont(font9);
        userName_11->setLayoutDirection(Qt::LeftToRight);
        userName_11->setAutoFillBackground(false);
        userName_11->setStyleSheet(QString::fromUtf8("color: rgb(180, 180, 180);\n"
"background-color: rgba(255, 255, 255, 0);"));
        userName_11->setScaledContents(true);
        userName_11->setWordWrap(true);
        userName_12 = new QLabel(taskCard);
        userName_12->setObjectName(QString::fromUtf8("userName_12"));
        userName_12->setGeometry(QRect(501, 87, 41, 16));
        userName_12->setFont(font9);
        userName_12->setLayoutDirection(Qt::LeftToRight);
        userName_12->setAutoFillBackground(false);
        userName_12->setStyleSheet(QString::fromUtf8("color: rgb(180, 180, 180);\n"
"background-color: rgba(255, 255, 255, 0);"));
        userName_12->setScaledContents(true);
        userName_12->setWordWrap(true);
        seperateBar_5 = new QWidget(taskCard);
        seperateBar_5->setObjectName(QString::fromUtf8("seperateBar_5"));
        seperateBar_5->setGeometry(QRect(494, 54, 2, 48));
        seperateBar_5->setStyleSheet(QString::fromUtf8("background-color: rgb(48, 98, 156);;"));
        userName_13 = new QLabel(taskCard);
        userName_13->setObjectName(QString::fromUtf8("userName_13"));
        userName_13->setGeometry(QRect(300, 12, 51, 31));
        userName_13->setFont(font6);
        userName_13->setAutoFillBackground(false);
        userName_13->setStyleSheet(QString::fromUtf8("color: rgb(205, 205, 205);"));
        userName_13->setScaledContents(true);
        userName_13->setWordWrap(true);
        userName_14 = new QLabel(taskCard);
        userName_14->setObjectName(QString::fromUtf8("userName_14"));
        userName_14->setGeometry(QRect(355, 16, 151, 23));
        QFont font10;
        font10.setPointSize(13);
        font10.setBold(true);
        font10.setItalic(false);
        userName_14->setFont(font10);
        userName_14->setAutoFillBackground(false);
        userName_14->setStyleSheet(QString::fromUtf8("color: rgb(103, 215, 84);"));
        userName_14->setScaledContents(true);
        userName_14->setWordWrap(true);
        taskCompleteButton = new QPushButton(taskCard);
        taskCompleteButton->setObjectName(QString::fromUtf8("taskCompleteButton"));
        taskCompleteButton->setGeometry(QRect(509, 0, 51, 21));
        taskCompleteButton->setCursor(QCursor(Qt::PointingHandCursor));
        taskCompleteButton->setStyleSheet(QString::fromUtf8("QPushButton#taskCompleteButton{\n"
"	border: none;\n"
"	outline: none;\n"
"	\n"
"	image: url(:/Resources/Img/taskCompleteButton.svg);\n"
"	background-color: rgba(0,0,0,0);\n"
"}\n"
"\n"
"QPushButton:hover#taskCompleteButton{\n"
"	margin-top: -2px;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed#taskCompleteButton{\n"
"	margin-top: -4px;\n"
"}"));
        taskDismissButton = new QPushButton(taskCard);
        taskDismissButton->setObjectName(QString::fromUtf8("taskDismissButton"));
        taskDismissButton->setGeometry(QRect(560, 0, 51, 21));
        taskDismissButton->setCursor(QCursor(Qt::PointingHandCursor));
        taskDismissButton->setStyleSheet(QString::fromUtf8("QPushButton#taskDismissButton{\n"
"	border: none;\n"
"	outline: none;\n"
"	\n"
"	image: url(:/Resources/Img/taskCloseButton.svg);\n"
"\n"
"	background-color: rgba(0,0,0,0);\n"
"}\n"
"\n"
"QPushButton:hover#taskDismissButton{\n"
"	margin-top: -2px;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed#taskDismissButton{\n"
"	margin-top: -4px;\n"
"}"));
        taskBottomOpenButton = new QPushButton(taskCard);
        taskBottomOpenButton->setObjectName(QString::fromUtf8("taskBottomOpenButton"));
        taskBottomOpenButton->setGeometry(QRect(285, 150, 41, 20));
        taskBottomOpenButton->setCursor(QCursor(Qt::PointingHandCursor));
        taskBottomOpenButton->setStyleSheet(QString::fromUtf8("QPushButton#taskBottomOpenButton{\n"
"	border: none;\n"
"	outline: none;\n"
"	\n"
"	image: url(:/Resources/Img/pullDown.png);\n"
"	background-color: rgba(0,0,0,0);\n"
"}\n"
"\n"
"QPushButton:hover#taskBottomOpenButton{\n"
"	margin-bottom: 2px;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed#taskBottomOpenButton{\n"
"	margin-bottom: 4px;\n"
"}"));
        seperateBar_6 = new QWidget(taskCard);
        seperateBar_6->setObjectName(QString::fromUtf8("seperateBar_6"));
        seperateBar_6->setGeometry(QRect(10, 60, 260, 2));
        seperateBar_6->setStyleSheet(QString::fromUtf8("background-color: rgb(48, 98, 156);;"));
        userName_3->raise();
        widget->raise();
        userName_4->raise();
        widget_2->raise();
        userName_5->raise();
        widget_3->raise();
        userName_6->raise();
        seperateBar_4->raise();
        userName_7->raise();
        userName_8->raise();
        userName_9->raise();
        userName_10->raise();
        userName_11->raise();
        userName_12->raise();
        seperateBar_5->raise();
        userName_13->raise();
        userName_14->raise();
        taskCompleteButton->raise();
        taskDismissButton->raise();
        taskBottomOpenButton->raise();
        progressBar->raise();
        seperateBar_6->raise();
        sideMenuTasks = new QFrame(centralwidget);
        sideMenuTasks->setObjectName(QString::fromUtf8("sideMenuTasks"));
        sideMenuTasks->setGeometry(QRect(0, 240, 281, 51));
        sideMenuTasks->setFrameShape(QFrame::StyledPanel);
        sideMenuTasks->setFrameShadow(QFrame::Raised);
        ImageTasks = new QWidget(sideMenuTasks);
        ImageTasks->setObjectName(QString::fromUtf8("ImageTasks"));
        ImageTasks->setEnabled(false);
        ImageTasks->setGeometry(QRect(12, 8, 35, 35));
        ImageTasks->setAutoFillBackground(false);
        ImageTasks->setStyleSheet(QString::fromUtf8("image: url(:/Resources/Img/tasksPage.png);"));
        buttonTasks = new QPushButton(sideMenuTasks);
        buttonTasks->setObjectName(QString::fromUtf8("buttonTasks"));
        buttonTasks->setGeometry(QRect(0, 0, 281, 51));
        QFont font11;
        font11.setPointSize(16);
        font11.setBold(false);
        buttonTasks->setFont(font11);
        buttonTasks->setCursor(QCursor(Qt::PointingHandCursor));
        buttonTasks->setContextMenuPolicy(Qt::NoContextMenu);
        buttonTasks->setAcceptDrops(true);
        buttonTasks->setStyleSheet(QString::fromUtf8("QPushButton#buttonTasks{\n"
"	border: none;\n"
"	outline: none;\n"
"	margin-right: 96px;\n"
"	\n"
"	border-top-left-radius: 0px;\n"
"	border-top-right-radius: 10px;\n"
"	border-bottom-right-radius: 10px;\n"
"	border-bottom-left-	radius: 0px;\n"
"	\n"
"	color: rgb(200, 200, 200);\n"
"\n"
"	background-color: rgb(255,255,255);\n"
"}\n"
"\n"
"QPushButton:hover#buttonTasks{\n"
"	margin-right: 40px;\n"
"	background-color:rgb(25,52,82);\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed#buttonTasks{\n"
"	margin-right: 25px;\n"
"	background-color:rgb(21,48,79);\n"
"}"));
        buttonTasks->setFlat(true);
        buttonTasks->raise();
        ImageTasks->raise();
        sideMenuSettings = new QFrame(centralwidget);
        sideMenuSettings->setObjectName(QString::fromUtf8("sideMenuSettings"));
        sideMenuSettings->setGeometry(QRect(0, 294, 281, 51));
        sideMenuSettings->setFrameShape(QFrame::StyledPanel);
        sideMenuSettings->setFrameShadow(QFrame::Raised);
        ImageSettings = new QWidget(sideMenuSettings);
        ImageSettings->setObjectName(QString::fromUtf8("ImageSettings"));
        ImageSettings->setEnabled(false);
        ImageSettings->setGeometry(QRect(12, 8, 35, 35));
        ImageSettings->setAutoFillBackground(false);
        ImageSettings->setStyleSheet(QString::fromUtf8("image: url(:/Resources/Img/settings.png);"));
        buttonSettings = new QPushButton(sideMenuSettings);
        buttonSettings->setObjectName(QString::fromUtf8("buttonSettings"));
        buttonSettings->setGeometry(QRect(0, 0, 281, 51));
        buttonSettings->setFont(font11);
        buttonSettings->setCursor(QCursor(Qt::PointingHandCursor));
        buttonSettings->setContextMenuPolicy(Qt::NoContextMenu);
        buttonSettings->setAcceptDrops(true);
        buttonSettings->setStyleSheet(QString::fromUtf8("QPushButton#buttonSettings{\n"
"	border: none;\n"
"	outline: none;\n"
"	margin-right: 68px;\n"
"	\n"
"	border-top-left-radius: 0px;\n"
"	border-top-right-radius: 10px;\n"
"	border-bottom-right-radius: 10px;\n"
"	border-bottom-left-	radius: 0px;\n"
"	\n"
"	color: rgb(200, 200, 200);\n"
"\n"
"	background-color: rgb(255,255,255);\n"
"}\n"
"\n"
"QPushButton:hover#buttonSettings{\n"
"	margin-right: 40px;\n"
"	background-color:rgb(25,52,82);\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed#buttonSettings{\n"
"	margin-right: 25px;\n"
"	background-color:rgb(21,48,79);\n"
"}"));
        buttonSettings->setFlat(true);
        buttonSettings->raise();
        ImageSettings->raise();
        sideMenuCredits = new QFrame(centralwidget);
        sideMenuCredits->setObjectName(QString::fromUtf8("sideMenuCredits"));
        sideMenuCredits->setGeometry(QRect(0, 348, 281, 51));
        sideMenuCredits->setFrameShape(QFrame::StyledPanel);
        sideMenuCredits->setFrameShadow(QFrame::Raised);
        ImageCredits = new QWidget(sideMenuCredits);
        ImageCredits->setObjectName(QString::fromUtf8("ImageCredits"));
        ImageCredits->setEnabled(false);
        ImageCredits->setGeometry(QRect(12, 8, 35, 35));
        ImageCredits->setAutoFillBackground(false);
        ImageCredits->setStyleSheet(QString::fromUtf8("image: url(:/Resources/Img/information.png);"));
        buttonCredits = new QPushButton(sideMenuCredits);
        buttonCredits->setObjectName(QString::fromUtf8("buttonCredits"));
        buttonCredits->setGeometry(QRect(0, 0, 281, 51));
        buttonCredits->setFont(font11);
        buttonCredits->setCursor(QCursor(Qt::PointingHandCursor));
        buttonCredits->setContextMenuPolicy(Qt::NoContextMenu);
        buttonCredits->setAcceptDrops(true);
        buttonCredits->setStyleSheet(QString::fromUtf8("QPushButton#buttonCredits{\n"
"	border: none;\n"
"	outline: none;\n"
"	margin-right: 75px;\n"
"	\n"
"	border-top-left-radius: 0px;\n"
"	border-top-right-radius: 10px;\n"
"	border-bottom-right-radius: 10px;\n"
"	border-bottom-left-	radius: 0px;\n"
"	\n"
"	color: rgb(200, 200, 200);\n"
"\n"
"	background-color: rgb(255,255,255);\n"
"}\n"
"\n"
"QPushButton:hover#buttonCredits{\n"
"	margin-right: 40px;\n"
"	background-color:rgb(25,52,82);\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed#buttonCredits{\n"
"	margin-right: 25px;\n"
"	background-color:rgb(21,48,79);\n"
"}"));
        buttonCredits->setFlat(true);
        buttonCredits->raise();
        ImageCredits->raise();
        sideMenuOverview = new QFrame(centralwidget);
        sideMenuOverview->setObjectName(QString::fromUtf8("sideMenuOverview"));
        sideMenuOverview->setGeometry(QRect(0, 186, 281, 51));
        sideMenuOverview->setStyleSheet(QString::fromUtf8(""));
        sideMenuOverview->setFrameShape(QFrame::StyledPanel);
        sideMenuOverview->setFrameShadow(QFrame::Raised);
        imageOverview = new QWidget(sideMenuOverview);
        imageOverview->setObjectName(QString::fromUtf8("imageOverview"));
        imageOverview->setEnabled(false);
        imageOverview->setGeometry(QRect(12, 8, 35, 35));
        imageOverview->setAutoFillBackground(false);
        imageOverview->setStyleSheet(QString::fromUtf8("image: url(:/Resources/Img/mainMenu.png);"));
        buttonOverview = new QPushButton(sideMenuOverview);
        buttonOverview->setObjectName(QString::fromUtf8("buttonOverview"));
        buttonOverview->setGeometry(QRect(0, 0, 281, 51));
        buttonOverview->setFont(font11);
        buttonOverview->setCursor(QCursor(Qt::PointingHandCursor));
        buttonOverview->setContextMenuPolicy(Qt::NoContextMenu);
        buttonOverview->setAcceptDrops(true);
        buttonOverview->setStyleSheet(QString::fromUtf8("QPushButton#buttonOverview{\n"
"	border: none;\n"
"	outline: none;\n"
"	margin-right: 56px;\n"
"	\n"
"	border-top-left-radius: 0px;\n"
"	border-top-right-radius: 10px;\n"
"	border-bottom-right-radius: 10px;\n"
"	border-bottom-left-	radius: 0px;\n"
"	\n"
"	color: rgb(200, 200, 200);\n"
"\n"
"	background-color: rgb(255,255,255);\n"
"}\n"
"\n"
"QPushButton:hover#buttonOverview{\n"
"	margin-left: 0px;\n"
"	margin-right: 40px;\n"
"	background-color:rgb(25,52,82);\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed#buttonOverview{\n"
"	margin-left: 0px;\n"
"	margin-right: 25px;\n"
"	background-color:rgb(21,48,79);\n"
"}"));
        buttonOverview->setFlat(true);
        buttonOverview->raise();
        imageOverview->raise();
        MainWindow->setCentralWidget(centralwidget);
        sideBar->raise();
        upperWidget->raise();
        gridLayoutWidget->raise();
        userImage->raise();
        userName->raise();
        seperateBar->raise();
        userName_2->raise();
        seperateBar_2->raise();
        seperateBar_3->raise();
        upperBurgerMenu->raise();
        UpperMenu->raise();
        upperClose->raise();
        upperDate->raise();
        upperInfoButton->raise();
        upperMaximize->raise();
        upperMinimize->raise();
        upperTime->raise();
        upperToDoLogo->raise();
        taskCard->raise();
        sideMenuTasks->raise();
        sideMenuSettings->raise();
        sideMenuCredits->raise();
        sideMenuOverview->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        upperMaximize->setText(QString());
        upperMinimize->setText(QString());
        upperClose->setText(QString());
        upperBurgerMenu->setText(QString());
        upperInfoButton->setText(QString());
        UpperMenu->setText(QString());
        upperToDoLogo->setText(QCoreApplication::translate("MainWindow", "ToDo++", nullptr));
        upperTime->setText(QCoreApplication::translate("MainWindow", "00:00", nullptr));
        upperDate->setText(QCoreApplication::translate("MainWindow", "12.12.2021", nullptr));
        userName->setText(QCoreApplication::translate("MainWindow", "MechanicalCore", nullptr));
        userName_2->setText(QCoreApplication::translate("MainWindow", "Menu", nullptr));
        userName_3->setText(QCoreApplication::translate("MainWindow", "Complete figma UI design and assign team tasks", nullptr));
        userName_4->setText(QCoreApplication::translate("MainWindow", "Complete figma UI design and assign team tasks", nullptr));
        userName_5->setText(QCoreApplication::translate("MainWindow", "Complete figma UI design and assign team tasks", nullptr));
        userName_6->setText(QCoreApplication::translate("MainWindow", "Complete figma UI design and assign team tasks", nullptr));
        userName_7->setText(QCoreApplication::translate("MainWindow", "Task created", nullptr));
        userName_8->setText(QCoreApplication::translate("MainWindow", "29.12.21", nullptr));
        userName_9->setText(QCoreApplication::translate("MainWindow", "17:25", nullptr));
        userName_10->setText(QCoreApplication::translate("MainWindow", "Reminder", nullptr));
        userName_11->setText(QCoreApplication::translate("MainWindow", "02.01.22", nullptr));
        userName_12->setText(QCoreApplication::translate("MainWindow", "17:25", nullptr));
        userName_13->setText(QCoreApplication::translate("MainWindow", "Due by", nullptr));
        userName_14->setText(QCoreApplication::translate("MainWindow", "Wednesday 12:30", nullptr));
        taskCompleteButton->setText(QString());
        taskDismissButton->setText(QString());
        taskBottomOpenButton->setText(QString());
        buttonTasks->setText(QCoreApplication::translate("MainWindow", "Tasks", nullptr));
        buttonSettings->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        buttonCredits->setText(QCoreApplication::translate("MainWindow", "Credits", nullptr));
        buttonOverview->setText(QCoreApplication::translate("MainWindow", "Overview", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
