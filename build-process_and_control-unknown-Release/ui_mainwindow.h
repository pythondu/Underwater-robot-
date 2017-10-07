/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *pushButton_open;
    QPushButton *pushButton_up;
    QPushButton *pushButton_left;
    QPushButton *pushButton_down;
    QPushButton *pushButton_right;
    QPushButton *pushButton_show;
    QPushButton *pushButton_light;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_float;
    QPushButton *pushButton_sink;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(636, 407);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(300, 10, 281, 321));
        pushButton_open = new QPushButton(centralWidget);
        pushButton_open->setObjectName(QStringLiteral("pushButton_open"));
        pushButton_open->setGeometry(QRect(110, 260, 81, 31));
        pushButton_open->setStyleSheet(QStringLiteral("border-image: url(:/new/Icon/image/play.jpg);"));
        pushButton_open->setFlat(true);
        pushButton_up = new QPushButton(centralWidget);
        pushButton_up->setObjectName(QStringLiteral("pushButton_up"));
        pushButton_up->setGeometry(QRect(110, 220, 81, 31));
        pushButton_up->setStyleSheet(QStringLiteral("border-image: url(:/new/Icon/image/up.jpg);"));
        pushButton_up->setFlat(true);
        pushButton_left = new QPushButton(centralWidget);
        pushButton_left->setObjectName(QStringLiteral("pushButton_left"));
        pushButton_left->setGeometry(QRect(20, 260, 81, 31));
        pushButton_left->setStyleSheet(QStringLiteral("border-image: url(:/new/Icon/image/left.jpg);"));
        pushButton_left->setFlat(true);
        pushButton_down = new QPushButton(centralWidget);
        pushButton_down->setObjectName(QStringLiteral("pushButton_down"));
        pushButton_down->setGeometry(QRect(110, 300, 81, 31));
        pushButton_down->setStyleSheet(QStringLiteral("border-image: url(:/new/Icon/image/down.jpg);"));
        pushButton_down->setFlat(true);
        pushButton_right = new QPushButton(centralWidget);
        pushButton_right->setObjectName(QStringLiteral("pushButton_right"));
        pushButton_right->setGeometry(QRect(200, 260, 81, 31));
        pushButton_right->setStyleSheet(QStringLiteral("border-image: url(:/new/Icon/image/right.jpg);"));
        pushButton_right->setFlat(true);
        pushButton_show = new QPushButton(centralWidget);
        pushButton_show->setObjectName(QStringLiteral("pushButton_show"));
        pushButton_show->setGeometry(QRect(20, 10, 99, 27));
        pushButton_light = new QPushButton(centralWidget);
        pushButton_light->setObjectName(QStringLiteral("pushButton_light"));
        pushButton_light->setGeometry(QRect(20, 40, 99, 27));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 170, 206, 29));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_float = new QPushButton(layoutWidget);
        pushButton_float->setObjectName(QStringLiteral("pushButton_float"));

        horizontalLayout->addWidget(pushButton_float);

        pushButton_sink = new QPushButton(layoutWidget);
        pushButton_sink->setObjectName(QStringLiteral("pushButton_sink"));

        horizontalLayout->addWidget(pushButton_sink);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 636, 31));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        menuBar->addAction(menu->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        pushButton_open->setText(QString());
        pushButton_up->setText(QString());
        pushButton_left->setText(QString());
        pushButton_down->setText(QString());
        pushButton_right->setText(QString());
        pushButton_show->setText(QApplication::translate("MainWindow", "Show Picture", 0));
        pushButton_light->setText(QApplication::translate("MainWindow", "Flash Light", 0));
        pushButton_float->setText(QApplication::translate("MainWindow", "Floating", 0));
        pushButton_sink->setText(QApplication::translate("MainWindow", "Sink", 0));
        menu->setTitle(QApplication::translate("MainWindow", "\346\260\264\344\270\213\346\234\272\345\231\250\344\272\272", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
