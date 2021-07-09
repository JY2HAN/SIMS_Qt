/********************************************************************************
** Form generated from reading UI file 'SIMS_Qt.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMS_QT_H
#define UI_SIMS_QT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SIMS_QtClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SIMS_QtClass)
    {
        if (SIMS_QtClass->objectName().isEmpty())
            SIMS_QtClass->setObjectName(QStringLiteral("SIMS_QtClass"));
        SIMS_QtClass->resize(600, 400);
        menuBar = new QMenuBar(SIMS_QtClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        SIMS_QtClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SIMS_QtClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        SIMS_QtClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(SIMS_QtClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        SIMS_QtClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(SIMS_QtClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        SIMS_QtClass->setStatusBar(statusBar);

        retranslateUi(SIMS_QtClass);

        QMetaObject::connectSlotsByName(SIMS_QtClass);
    } // setupUi

    void retranslateUi(QMainWindow *SIMS_QtClass)
    {
        SIMS_QtClass->setWindowTitle(QApplication::translate("SIMS_QtClass", "SIMS_Qt", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SIMS_QtClass: public Ui_SIMS_QtClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMS_QT_H
