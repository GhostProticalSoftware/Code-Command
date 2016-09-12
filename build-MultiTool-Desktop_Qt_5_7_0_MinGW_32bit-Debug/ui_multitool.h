/********************************************************************************
** Form generated from reading UI file 'multitool.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MULTITOOL_H
#define UI_MULTITOOL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MultiTool
{
public:
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_9;
    QPushButton *pushButton_4;
    QLabel *label_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QGridLayout *gridLayout_13;
    QGridLayout *gridLayout_11;
    QGridLayout *gridLayout_12;
    QPushButton *pushButton_3;
    QGridLayout *gridLayout_16;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MultiTool)
    {
        if (MultiTool->objectName().isEmpty())
            MultiTool->setObjectName(QStringLiteral("MultiTool"));
        MultiTool->resize(400, 300);
        centralWidget = new QWidget(MultiTool);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 391, 241));
        gridLayout_8 = new QGridLayout(gridLayoutWidget);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        gridLayout_9 = new QGridLayout();
        gridLayout_9->setSpacing(6);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        pushButton_4 = new QPushButton(gridLayoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        gridLayout_9->addWidget(pushButton_4, 4, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout_9->addWidget(label_2, 0, 0, 1, 3);

        pushButton_5 = new QPushButton(gridLayoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        gridLayout_9->addWidget(pushButton_5, 4, 1, 1, 1);

        pushButton_6 = new QPushButton(gridLayoutWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        gridLayout_9->addWidget(pushButton_6, 4, 2, 1, 1);

        gridLayout_13 = new QGridLayout();
        gridLayout_13->setSpacing(6);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));

        gridLayout_9->addLayout(gridLayout_13, 2, 2, 1, 1);

        gridLayout_11 = new QGridLayout();
        gridLayout_11->setSpacing(6);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));

        gridLayout_9->addLayout(gridLayout_11, 2, 0, 1, 1);

        gridLayout_12 = new QGridLayout();
        gridLayout_12->setSpacing(6);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout_12->addWidget(pushButton_3, 0, 0, 1, 1);


        gridLayout_9->addLayout(gridLayout_12, 3, 2, 1, 1);

        gridLayout_16 = new QGridLayout();
        gridLayout_16->setSpacing(6);
        gridLayout_16->setObjectName(QStringLiteral("gridLayout_16"));
        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout_16->addWidget(pushButton_2, 0, 0, 1, 1);


        gridLayout_9->addLayout(gridLayout_16, 3, 1, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_9->addWidget(pushButton, 3, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout_9->addWidget(label, 1, 0, 1, 3);


        gridLayout_8->addLayout(gridLayout_9, 0, 0, 1, 1);

        MultiTool->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MultiTool);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        MultiTool->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MultiTool);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MultiTool->addToolBar(Qt::TopToolBarArea, mainToolBar);
        MultiTool->insertToolBarBreak(mainToolBar);
        statusBar = new QStatusBar(MultiTool);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MultiTool->setStatusBar(statusBar);

        retranslateUi(MultiTool);

        QMetaObject::connectSlotsByName(MultiTool);
    } // setupUi

    void retranslateUi(QMainWindow *MultiTool)
    {
        MultiTool->setWindowTitle(QApplication::translate("MultiTool", "MultiTool", 0));
        pushButton_4->setText(QApplication::translate("MultiTool", "Button4", 0));
        label_2->setText(QApplication::translate("MultiTool", "MultiTool By Tiny Bits Software", 0));
        pushButton_5->setText(QApplication::translate("MultiTool", "Button 5", 0));
        pushButton_6->setText(QApplication::translate("MultiTool", "Button 6", 0));
        pushButton_3->setText(QApplication::translate("MultiTool", "Button 3", 0));
        pushButton_2->setText(QApplication::translate("MultiTool", "Button 2", 0));
        pushButton->setText(QApplication::translate("MultiTool", "Button 1", 0));
        label->setText(QApplication::translate("MultiTool", "Verson 0.0.3.1", 0));
    } // retranslateUi

};

namespace Ui {
    class MultiTool: public Ui_MultiTool {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULTITOOL_H
