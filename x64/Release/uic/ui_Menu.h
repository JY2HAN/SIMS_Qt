/********************************************************************************
** Form generated from reading UI file 'Menu.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QPushButton *modifyButton;
    QPushButton *addButton;
    QPushButton *sortButton;
    QPushButton *selectButton;
    QPushButton *exitButton;

    void setupUi(QWidget *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName(QStringLiteral("Menu"));
        Menu->resize(640, 480);
        modifyButton = new QPushButton(Menu);
        modifyButton->setObjectName(QStringLiteral("modifyButton"));
        modifyButton->setGeometry(QRect(270, 190, 93, 28));
        addButton = new QPushButton(Menu);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setGeometry(QRect(270, 90, 93, 28));
        sortButton = new QPushButton(Menu);
        sortButton->setObjectName(QStringLiteral("sortButton"));
        sortButton->setGeometry(QRect(270, 240, 93, 28));
        selectButton = new QPushButton(Menu);
        selectButton->setObjectName(QStringLiteral("selectButton"));
        selectButton->setGeometry(QRect(270, 140, 93, 28));
        exitButton = new QPushButton(Menu);
        exitButton->setObjectName(QStringLiteral("exitButton"));
        exitButton->setGeometry(QRect(270, 290, 93, 28));

        retranslateUi(Menu);

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QWidget *Menu)
    {
        Menu->setWindowTitle(QApplication::translate("Menu", "Form", Q_NULLPTR));
        modifyButton->setText(QApplication::translate("Menu", "\344\277\256\346\224\271\344\277\241\346\201\257", Q_NULLPTR));
        addButton->setText(QApplication::translate("Menu", "\346\267\273\345\212\240\345\255\246\347\224\237", Q_NULLPTR));
        sortButton->setText(QApplication::translate("Menu", "\346\210\220\347\273\251\346\216\222\345\272\217", Q_NULLPTR));
        selectButton->setText(QApplication::translate("Menu", "\346\237\245\350\257\242\345\255\246\347\224\237", Q_NULLPTR));
        exitButton->setText(QApplication::translate("Menu", "\351\200\200\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
