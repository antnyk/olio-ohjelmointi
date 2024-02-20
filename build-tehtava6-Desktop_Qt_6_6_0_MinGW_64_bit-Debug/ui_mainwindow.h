/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *btnIncrease;
    QPushButton *pushReset;
    QLineEdit *lineEdit;
    QLabel *label;
    QGraphicsView *graphicsView;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QLineEdit *lineEditNum1;
    QLabel *label_4;
    QGridLayout *gridLayout;
    QPushButton *btn1;
    QPushButton *btn0;
    QPushButton *btnMiinus;
    QPushButton *btn9;
    QPushButton *btn2;
    QPushButton *btn6;
    QPushButton *btnEnter;
    QPushButton *btnPlussa;
    QPushButton *btnClear;
    QPushButton *btn7;
    QPushButton *btnKerto;
    QPushButton *btn5;
    QPushButton *btnJako;
    QPushButton *btn8;
    QPushButton *btn4;
    QPushButton *btn3;
    QLineEdit *lineEditResult;
    QLabel *label_2;
    QLineEdit *lineEditNum2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        btnIncrease = new QPushButton(centralwidget);
        btnIncrease->setObjectName("btnIncrease");
        btnIncrease->setGeometry(QRect(10, 480, 80, 24));
        pushReset = new QPushButton(centralwidget);
        pushReset->setObjectName("pushReset");
        pushReset->setGeometry(QRect(10, 520, 80, 24));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(100, 480, 113, 24));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 430, 49, 16));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(240, 470, 131, 81));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        QBrush brush2(QColor(127, 127, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush2);
        QBrush brush3(QColor(170, 170, 170, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush4(QColor(255, 255, 220, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush5(QColor(0, 0, 0, 127));
        brush5.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush6(QColor(127, 127, 127, 127));
        brush6.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush6);
#endif
        graphicsView->setPalette(palette);
        graphicsView->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CrossCursor)));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(35, 30, 461, 331));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName("label_3");

        gridLayout_2->addWidget(label_3, 1, 1, 1, 1);

        lineEditNum1 = new QLineEdit(verticalLayoutWidget);
        lineEditNum1->setObjectName("lineEditNum1");

        gridLayout_2->addWidget(lineEditNum1, 2, 0, 1, 1);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName("label_4");

        gridLayout_2->addWidget(label_4, 1, 2, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        btn1 = new QPushButton(verticalLayoutWidget);
        btn1->setObjectName("btn1");

        gridLayout->addWidget(btn1, 0, 0, 1, 1);

        btn0 = new QPushButton(verticalLayoutWidget);
        btn0->setObjectName("btn0");

        gridLayout->addWidget(btn0, 4, 0, 1, 1);

        btnMiinus = new QPushButton(verticalLayoutWidget);
        btnMiinus->setObjectName("btnMiinus");

        gridLayout->addWidget(btnMiinus, 2, 3, 1, 1);

        btn9 = new QPushButton(verticalLayoutWidget);
        btn9->setObjectName("btn9");

        gridLayout->addWidget(btn9, 3, 2, 1, 1);

        btn2 = new QPushButton(verticalLayoutWidget);
        btn2->setObjectName("btn2");

        gridLayout->addWidget(btn2, 0, 1, 1, 1);

        btn6 = new QPushButton(verticalLayoutWidget);
        btn6->setObjectName("btn6");

        gridLayout->addWidget(btn6, 2, 2, 1, 1);

        btnEnter = new QPushButton(verticalLayoutWidget);
        btnEnter->setObjectName("btnEnter");

        gridLayout->addWidget(btnEnter, 4, 2, 1, 1);

        btnPlussa = new QPushButton(verticalLayoutWidget);
        btnPlussa->setObjectName("btnPlussa");

        gridLayout->addWidget(btnPlussa, 0, 3, 1, 1);

        btnClear = new QPushButton(verticalLayoutWidget);
        btnClear->setObjectName("btnClear");

        gridLayout->addWidget(btnClear, 4, 1, 1, 1);

        btn7 = new QPushButton(verticalLayoutWidget);
        btn7->setObjectName("btn7");

        gridLayout->addWidget(btn7, 3, 0, 1, 1);

        btnKerto = new QPushButton(verticalLayoutWidget);
        btnKerto->setObjectName("btnKerto");

        gridLayout->addWidget(btnKerto, 3, 3, 1, 1);

        btn5 = new QPushButton(verticalLayoutWidget);
        btn5->setObjectName("btn5");

        gridLayout->addWidget(btn5, 2, 1, 1, 1);

        btnJako = new QPushButton(verticalLayoutWidget);
        btnJako->setObjectName("btnJako");

        gridLayout->addWidget(btnJako, 4, 3, 1, 1);

        btn8 = new QPushButton(verticalLayoutWidget);
        btn8->setObjectName("btn8");

        gridLayout->addWidget(btn8, 3, 1, 1, 1);

        btn4 = new QPushButton(verticalLayoutWidget);
        btn4->setObjectName("btn4");

        gridLayout->addWidget(btn4, 2, 0, 1, 1);

        btn3 = new QPushButton(verticalLayoutWidget);
        btn3->setObjectName("btn3");

        gridLayout->addWidget(btn3, 0, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 3, 0, 1, 3);

        lineEditResult = new QLineEdit(verticalLayoutWidget);
        lineEditResult->setObjectName("lineEditResult");

        gridLayout_2->addWidget(lineEditResult, 2, 2, 1, 1);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        lineEditNum2 = new QLineEdit(verticalLayoutWidget);
        lineEditNum2->setObjectName("lineEditNum2");

        gridLayout_2->addWidget(lineEditNum2, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 0, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(30, 0, 49, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnIncrease->setText(QCoreApplication::translate("MainWindow", "Increase", nullptr));
        pushReset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        lineEdit->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "OSA 1", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Number 2", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Result", nullptr));
        btn1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        btn0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        btnMiinus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        btn9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        btn2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        btn6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        btnEnter->setText(QCoreApplication::translate("MainWindow", "enter", nullptr));
        btnPlussa->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btnClear->setText(QCoreApplication::translate("MainWindow", "clear", nullptr));
        btn7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        btnKerto->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        btn5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        btnJako->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        btn8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        btn4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        btn3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Number 1", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "OSA 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
