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
    QLineEdit *idLineEdit;
    QLabel *idLabel;
    QLabel *nameLabel;
    QLineEdit *nameLineEdit;
    QLabel *gradeLabel;
    QLineEdit *gradeLineEdit;
    QLabel *ALabel;
    QLineEdit *ALineEdit;
    QLabel *BLabel;
    QLineEdit *BLineEdit;
    QLabel *CLabel;
    QLineEdit *CLineEdit;

    void setupUi(QWidget *Add)
    {
        if (Add->objectName().isEmpty())
            Add->setObjectName(QStringLiteral("Add"));
        Add->resize(640, 480);
        returnButton = new QPushButton(Add);
        returnButton->setObjectName(QStringLiteral("returnButton"));
        returnButton->setGeometry(QRect(320, 300, 93, 28));
        addButton = new QPushButton(Add);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setGeometry(QRect(200, 300, 93, 28));
        idLineEdit = new QLineEdit(Add);
        idLineEdit->setObjectName(QStringLiteral("idLineEdit"));
        idLineEdit->setGeometry(QRect(300, 50, 113, 21));
        idLabel = new QLabel(Add);
        idLabel->setObjectName(QStringLiteral("idLabel"));
        idLabel->setGeometry(QRect(200, 50, 72, 21));
        nameLabel = new QLabel(Add);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setGeometry(QRect(200, 90, 72, 21));
        nameLineEdit = new QLineEdit(Add);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));
        nameLineEdit->setGeometry(QRect(300, 90, 113, 21));
        gradeLabel = new QLabel(Add);
        gradeLabel->setObjectName(QStringLiteral("gradeLabel"));
        gradeLabel->setGeometry(QRect(200, 130, 72, 21));
        gradeLineEdit = new QLineEdit(Add);
        gradeLineEdit->setObjectName(QStringLiteral("gradeLineEdit"));
        gradeLineEdit->setGeometry(QRect(300, 130, 113, 21));
        ALabel = new QLabel(Add);
        ALabel->setObjectName(QStringLiteral("ALabel"));
        ALabel->setGeometry(QRect(200, 170, 72, 21));
        ALineEdit = new QLineEdit(Add);
        ALineEdit->setObjectName(QStringLiteral("ALineEdit"));
        ALineEdit->setGeometry(QRect(300, 170, 113, 21));
        BLabel = new QLabel(Add);
        BLabel->setObjectName(QStringLiteral("BLabel"));
        BLabel->setGeometry(QRect(200, 210, 72, 21));
        BLineEdit = new QLineEdit(Add);
        BLineEdit->setObjectName(QStringLiteral("BLineEdit"));
        BLineEdit->setGeometry(QRect(300, 210, 113, 21));
        CLabel = new QLabel(Add);
        CLabel->setObjectName(QStringLiteral("CLabel"));
        CLabel->setGeometry(QRect(200, 250, 81, 21));
        CLineEdit = new QLineEdit(Add);
        CLineEdit->setObjectName(QStringLiteral("CLineEdit"));
        CLineEdit->setGeometry(QRect(300, 250, 113, 21));

        retranslateUi(Add);

        QMetaObject::connectSlotsByName(Add);
    } // setupUi

    void retranslateUi(QWidget *Add)
    {
        Add->setWindowTitle(QApplication::translate("Add", "Form", Q_NULLPTR));
        returnButton->setText(QApplication::translate("Add", "\344\270\273\350\217\234\345\215\225", Q_NULLPTR));
        addButton->setText(QApplication::translate("Add", "\346\267\273\345\212\240", Q_NULLPTR));
        idLabel->setText(QApplication::translate("Add", "\345\255\246\345\217\267", Q_NULLPTR));
        nameLabel->setText(QApplication::translate("Add", "\345\247\223\345\220\215", Q_NULLPTR));
        gradeLabel->setText(QApplication::translate("Add", "\347\217\255\347\272\247", Q_NULLPTR));
        ALabel->setText(QApplication::translate("Add", "\347\247\221\347\233\256A", Q_NULLPTR));
        BLabel->setText(QApplication::translate("Add", "\347\247\221\347\233\256B", Q_NULLPTR));
        CLabel->setText(QApplication::translate("Add", "\347\247\221\347\233\256C", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Add: public Ui_Add {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_H
