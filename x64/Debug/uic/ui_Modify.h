/********************************************************************************
** Form generated from reading UI file 'Modify.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFY_H
#define UI_MODIFY_H

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

class Ui_Modify
{
public:
    QPushButton *returnButton;
    QLabel *idLabel;
    QLineEdit *idLineEdit;
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
    QPushButton *deleteButton;
    QPushButton *modifyButton;

    void setupUi(QWidget *Modify)
    {
        if (Modify->objectName().isEmpty())
            Modify->setObjectName(QStringLiteral("Modify"));
        Modify->resize(640, 480);
        returnButton = new QPushButton(Modify);
        returnButton->setObjectName(QStringLiteral("returnButton"));
        returnButton->setGeometry(QRect(510, 410, 93, 28));
        idLabel = new QLabel(Modify);
        idLabel->setObjectName(QStringLiteral("idLabel"));
        idLabel->setGeometry(QRect(150, 50, 72, 20));
        idLineEdit = new QLineEdit(Modify);
        idLineEdit->setObjectName(QStringLiteral("idLineEdit"));
        idLineEdit->setGeometry(QRect(260, 50, 113, 21));
        nameLabel = new QLabel(Modify);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setGeometry(QRect(150, 90, 72, 21));
        nameLineEdit = new QLineEdit(Modify);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));
        nameLineEdit->setGeometry(QRect(260, 90, 113, 21));
        gradeLabel = new QLabel(Modify);
        gradeLabel->setObjectName(QStringLiteral("gradeLabel"));
        gradeLabel->setGeometry(QRect(150, 130, 72, 21));
        gradeLineEdit = new QLineEdit(Modify);
        gradeLineEdit->setObjectName(QStringLiteral("gradeLineEdit"));
        gradeLineEdit->setGeometry(QRect(260, 130, 113, 21));
        ALabel = new QLabel(Modify);
        ALabel->setObjectName(QStringLiteral("ALabel"));
        ALabel->setGeometry(QRect(150, 170, 72, 21));
        ALineEdit = new QLineEdit(Modify);
        ALineEdit->setObjectName(QStringLiteral("ALineEdit"));
        ALineEdit->setGeometry(QRect(260, 170, 113, 21));
        BLabel = new QLabel(Modify);
        BLabel->setObjectName(QStringLiteral("BLabel"));
        BLabel->setGeometry(QRect(150, 210, 72, 21));
        BLineEdit = new QLineEdit(Modify);
        BLineEdit->setObjectName(QStringLiteral("BLineEdit"));
        BLineEdit->setGeometry(QRect(260, 210, 113, 21));
        CLabel = new QLabel(Modify);
        CLabel->setObjectName(QStringLiteral("CLabel"));
        CLabel->setGeometry(QRect(150, 250, 72, 21));
        CLineEdit = new QLineEdit(Modify);
        CLineEdit->setObjectName(QStringLiteral("CLineEdit"));
        CLineEdit->setGeometry(QRect(260, 250, 113, 21));
        deleteButton = new QPushButton(Modify);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setGeometry(QRect(120, 320, 93, 28));
        modifyButton = new QPushButton(Modify);
        modifyButton->setObjectName(QStringLiteral("modifyButton"));
        modifyButton->setGeometry(QRect(330, 320, 93, 28));

        retranslateUi(Modify);

        QMetaObject::connectSlotsByName(Modify);
    } // setupUi

    void retranslateUi(QWidget *Modify)
    {
        Modify->setWindowTitle(QApplication::translate("Modify", "Form", Q_NULLPTR));
        returnButton->setText(QApplication::translate("Modify", "\344\270\273\350\217\234\345\215\225", Q_NULLPTR));
        idLabel->setText(QApplication::translate("Modify", "\345\255\246\345\217\267", Q_NULLPTR));
        nameLabel->setText(QApplication::translate("Modify", "\345\247\223\345\220\215", Q_NULLPTR));
        gradeLabel->setText(QApplication::translate("Modify", "\347\217\255\347\272\247", Q_NULLPTR));
        ALabel->setText(QApplication::translate("Modify", "\347\247\221\347\233\256A", Q_NULLPTR));
        BLabel->setText(QApplication::translate("Modify", "\347\247\221\347\233\256B", Q_NULLPTR));
        CLabel->setText(QApplication::translate("Modify", "\347\247\221\347\233\256C", Q_NULLPTR));
        deleteButton->setText(QApplication::translate("Modify", "\345\210\240\351\231\244", Q_NULLPTR));
        modifyButton->setText(QApplication::translate("Modify", "\344\277\256\346\224\271", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Modify: public Ui_Modify {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFY_H
