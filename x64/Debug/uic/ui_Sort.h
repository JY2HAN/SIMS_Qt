/********************************************************************************
** Form generated from reading UI file 'Sort.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SORT_H
#define UI_SORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sort
{
public:
    QPushButton *returnButton;
    QPushButton *sortButton;
    QRadioButton *ARadioButton;
    QRadioButton *BRadioButton;
    QRadioButton *CRadioButton;
    QRadioButton *avgRadioButton;
    QTableWidget *tableWidget;

    void setupUi(QWidget *Sort)
    {
        if (Sort->objectName().isEmpty())
            Sort->setObjectName(QStringLiteral("Sort"));
        Sort->resize(640, 480);
        returnButton = new QPushButton(Sort);
        returnButton->setObjectName(QStringLiteral("returnButton"));
        returnButton->setGeometry(QRect(500, 420, 93, 30));
        sortButton = new QPushButton(Sort);
        sortButton->setObjectName(QStringLiteral("sortButton"));
        sortButton->setGeometry(QRect(470, 40, 93, 28));
        ARadioButton = new QRadioButton(Sort);
        ARadioButton->setObjectName(QStringLiteral("ARadioButton"));
        ARadioButton->setGeometry(QRect(90, 40, 71, 19));
        ARadioButton->setChecked(false);
        BRadioButton = new QRadioButton(Sort);
        BRadioButton->setObjectName(QStringLiteral("BRadioButton"));
        BRadioButton->setGeometry(QRect(170, 40, 71, 19));
        CRadioButton = new QRadioButton(Sort);
        CRadioButton->setObjectName(QStringLiteral("CRadioButton"));
        CRadioButton->setGeometry(QRect(250, 40, 71, 19));
        avgRadioButton = new QRadioButton(Sort);
        avgRadioButton->setObjectName(QStringLiteral("avgRadioButton"));
        avgRadioButton->setGeometry(QRect(340, 40, 71, 19));
        avgRadioButton->setChecked(true);
        tableWidget = new QTableWidget(Sort);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(85, 81, 481, 321));

        retranslateUi(Sort);

        QMetaObject::connectSlotsByName(Sort);
    } // setupUi

    void retranslateUi(QWidget *Sort)
    {
        Sort->setWindowTitle(QApplication::translate("Sort", "Form", Q_NULLPTR));
        returnButton->setText(QApplication::translate("Sort", "\344\270\273\350\217\234\345\215\225", Q_NULLPTR));
        sortButton->setText(QApplication::translate("Sort", "\346\216\222\345\220\215", Q_NULLPTR));
        ARadioButton->setText(QApplication::translate("Sort", "\347\247\221\347\233\256A", Q_NULLPTR));
        BRadioButton->setText(QApplication::translate("Sort", "\347\247\221\347\233\256B", Q_NULLPTR));
        CRadioButton->setText(QApplication::translate("Sort", "\347\247\221\347\233\256C", Q_NULLPTR));
        avgRadioButton->setText(QApplication::translate("Sort", "\345\271\263\345\235\207\345\210\206", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Sort: public Ui_Sort {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SORT_H
