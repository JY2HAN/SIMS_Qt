/********************************************************************************
** Form generated from reading UI file 'Add.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_H
#define UI_ADD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Add
{
public:
    QPushButton *returnButton;
    QPushButton *addButton;
    QLabel *nameLabel;
    QLineEdit *nameLineEdit;
    QLineEdit *idLineEdit;
    QLabel *idLabel;
    QLabel *mathLabel;
    QLineEdit *mathLineEdit;
    QLabel *enLabel;
    QLineEdit *enLineEdit;
    QLabel *cLabel;
    QLineEdit *cLineEdit;

    void setupUi(QWidget *Add)
    {
        if (Add->objectName().isEmpty())
            Add->setObjectName(QStringLiteral("Add"));
        Add->resize(640, 480);
        returnButton = new QPushButton(Add);
        returnButton->setObjectName(QStringLiteral("returnButton"));
        returnButton->setGeometry(QRect(320, 260, 93, 28));
        addButton = new QPushButton(Add);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setGeometry(QRect(200, 260, 93, 28));
        nameLabel = new QLabel(Add);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setGeometry(QRect(200, 50, 72, 21));
        nameLineEdit = new QLineEdit(Add);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));
        nameLineEdit->setGeometry(QRect(300, 50, 113, 21));
        idLineEdit = new QLineEdit(Add);
        idLineEdit->setObjectName(QStringLiteral("idLineEdit"));
        idLineEdit->setGeometry(QRect(300, 90, 113, 21));
        idLabel = new QLabel(Add);
        idLabel->setObjectName(QStringLiteral("idLabel"));
        idLabel->setGeometry(QRect(200, 90, 72, 21));
        mathLabel = new QLabel(Add);
        mathLabel->setObjectName(QStringLiteral("mathLabel"));
        mathLabel->setGeometry(QRect(200, 130, 72, 21));
        mathLineEdit = new QLineEdit(Add);
        mathLineEdit->setObjectName(QStringLiteral("mathLineEdit"));
        mathLineEdit->setGeometry(QRect(300, 130, 113, 21));
        enLabel = new QLabel(Add);
        enLabel->setObjectName(QStringLiteral("enLabel"));
        enLabel->setGeometry(QRect(200, 170, 72, 21));
        enLineEdit = new QLineEdit(Add);
        enLineEdit->setObjectName(QStringLiteral("enLineEdit"));
        enLineEdit->setGeometry(QRect(300, 170, 113, 21));
        cLabel = new QLabel(Add);
        cLabel->setObjectName(QStringLiteral("cLabel"));
        cLabel->setGeometry(QRect(200, 210, 81, 21));
        cLineEdit = new QLineEdit(Add);
        cLineEdit->setObjectName(QStringLiteral("cLineEdit"));
        cLineEdit->setGeometry(QRect(300, 210, 113, 21));

        retranslateUi(Add);

        QMetaObject::connectSlotsByName(Add);
    } // setupUi

    void retranslateUi(QWidget *Add)
    {
        Add->setWindowTitle(QApplication::translate("Add", "Form", Q_NULLPTR));
        returnButton->setText(QApplication::translate("Add", "\344\270\273\350\217\234\345\215\225", Q_NULLPTR));
        addButton->setText(QApplication::translate("Add", "\346\267\273\345\212\240", Q_NULLPTR));
        nameLabel->setText(QApplication::translate("Add", "\345\247\223\345\220\215", Q_NULLPTR));
        idLabel->setText(QApplication::translate("Add", "\345\255\246\345\217\267", Q_NULLPTR));
        mathLabel->setText(QApplication::translate("Add", "\346\225\260\345\255\246\346\210\220\347\273\251", Q_NULLPTR));
        enLabel->setText(QApplication::translate("Add", "\350\213\261\350\257\255\346\210\220\347\273\251", Q_NULLPTR));
        cLabel->setText(QApplication::translate("Add", "C\350\257\255\350\250\200\346\210\220\347\273\251", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Add: public Ui_Add {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_H
