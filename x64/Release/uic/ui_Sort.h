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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sort
{
public:

    void setupUi(QWidget *Sort)
    {
        if (Sort->objectName().isEmpty())
            Sort->setObjectName(QStringLiteral("Sort"));
        Sort->resize(400, 300);

        retranslateUi(Sort);

        QMetaObject::connectSlotsByName(Sort);
    } // setupUi

    void retranslateUi(QWidget *Sort)
    {
        Sort->setWindowTitle(QApplication::translate("Sort", "Sort", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Sort: public Ui_Sort {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SORT_H
