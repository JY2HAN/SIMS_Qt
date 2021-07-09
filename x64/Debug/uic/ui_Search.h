/********************************************************************************
** Form generated from reading UI file 'Search.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_H
#define UI_SEARCH_H

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

class Ui_Search
{
public:
    QPushButton *returnButton;
    QLabel *idLabel;
    QLineEdit *idLineEdit;
    QLabel *nameLabel;
    QLabel *showNameLabel;
    QLabel *gradeLabel;
    QLabel *showGradeLabel;
    QLabel *ALabel;
    QLabel *showALabel;
    QLabel *BLabel;
    QLabel *showBLabel;
    QLabel *CLabel;
    QLabel *showCLabel;
    QLabel *avgLabel;
    QLabel *showAvgLabel;
    QPushButton *selectButton;

    void setupUi(QWidget *Search)
    {
        if (Search->objectName().isEmpty())
            Search->setObjectName(QStringLiteral("Search"));
        Search->resize(640, 480);
        returnButton = new QPushButton(Search);
        returnButton->setObjectName(QStringLiteral("returnButton"));
        returnButton->setGeometry(QRect(350, 410, 93, 28));
        idLabel = new QLabel(Search);
        idLabel->setObjectName(QStringLiteral("idLabel"));
        idLabel->setGeometry(QRect(150, 60, 72, 15));
        idLineEdit = new QLineEdit(Search);
        idLineEdit->setObjectName(QStringLiteral("idLineEdit"));
        idLineEdit->setGeometry(QRect(300, 60, 113, 21));
        nameLabel = new QLabel(Search);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setGeometry(QRect(150, 120, 72, 21));
        showNameLabel = new QLabel(Search);
        showNameLabel->setObjectName(QStringLiteral("showNameLabel"));
        showNameLabel->setGeometry(QRect(350, 120, 111, 16));
        gradeLabel = new QLabel(Search);
        gradeLabel->setObjectName(QStringLiteral("gradeLabel"));
        gradeLabel->setGeometry(QRect(150, 170, 72, 21));
        showGradeLabel = new QLabel(Search);
        showGradeLabel->setObjectName(QStringLiteral("showGradeLabel"));
        showGradeLabel->setGeometry(QRect(350, 170, 111, 16));
        ALabel = new QLabel(Search);
        ALabel->setObjectName(QStringLiteral("ALabel"));
        ALabel->setGeometry(QRect(150, 220, 72, 21));
        showALabel = new QLabel(Search);
        showALabel->setObjectName(QStringLiteral("showALabel"));
        showALabel->setGeometry(QRect(350, 220, 111, 21));
        BLabel = new QLabel(Search);
        BLabel->setObjectName(QStringLiteral("BLabel"));
        BLabel->setGeometry(QRect(150, 270, 72, 15));
        showBLabel = new QLabel(Search);
        showBLabel->setObjectName(QStringLiteral("showBLabel"));
        showBLabel->setGeometry(QRect(350, 270, 111, 20));
        CLabel = new QLabel(Search);
        CLabel->setObjectName(QStringLiteral("CLabel"));
        CLabel->setGeometry(QRect(150, 320, 72, 15));
        showCLabel = new QLabel(Search);
        showCLabel->setObjectName(QStringLiteral("showCLabel"));
        showCLabel->setGeometry(QRect(350, 320, 111, 21));
        avgLabel = new QLabel(Search);
        avgLabel->setObjectName(QStringLiteral("avgLabel"));
        avgLabel->setGeometry(QRect(150, 370, 72, 15));
        showAvgLabel = new QLabel(Search);
        showAvgLabel->setObjectName(QStringLiteral("showAvgLabel"));
        showAvgLabel->setGeometry(QRect(350, 370, 111, 20));
        selectButton = new QPushButton(Search);
        selectButton->setObjectName(QStringLiteral("selectButton"));
        selectButton->setGeometry(QRect(150, 410, 93, 28));

        retranslateUi(Search);
        QObject::connect(Search, SIGNAL(objectNameChanged(QString)), selectButton, SLOT(click()));

        QMetaObject::connectSlotsByName(Search);
    } // setupUi

    void retranslateUi(QWidget *Search)
    {
        Search->setWindowTitle(QApplication::translate("Search", "Form", Q_NULLPTR));
        returnButton->setText(QApplication::translate("Search", "\344\270\273\350\217\234\345\215\225", Q_NULLPTR));
        idLabel->setText(QApplication::translate("Search", "\345\255\246\345\217\267", Q_NULLPTR));
        nameLabel->setText(QApplication::translate("Search", "\345\247\223\345\220\215", Q_NULLPTR));
        showNameLabel->setText(QApplication::translate("Search", "NULL", Q_NULLPTR));
        gradeLabel->setText(QApplication::translate("Search", "\347\217\255\347\272\247", Q_NULLPTR));
        showGradeLabel->setText(QApplication::translate("Search", "NULL", Q_NULLPTR));
        ALabel->setText(QApplication::translate("Search", "\347\247\221\347\233\256A", Q_NULLPTR));
        showALabel->setText(QApplication::translate("Search", "NULL", Q_NULLPTR));
        BLabel->setText(QApplication::translate("Search", "\347\247\221\347\233\256B", Q_NULLPTR));
        showBLabel->setText(QApplication::translate("Search", "NULL", Q_NULLPTR));
        CLabel->setText(QApplication::translate("Search", "\347\247\221\347\233\256C", Q_NULLPTR));
        showCLabel->setText(QApplication::translate("Search", "NULL", Q_NULLPTR));
        avgLabel->setText(QApplication::translate("Search", "\345\271\263\345\235\207\346\210\220\347\273\251", Q_NULLPTR));
        showAvgLabel->setText(QApplication::translate("Search", "NULL", Q_NULLPTR));
        selectButton->setText(QApplication::translate("Search", "\346\237\245\350\257\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Search: public Ui_Search {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_H
