/********************************************************************************
** Form generated from reading UI file 'budgettracker.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUDGETTRACKER_H
#define UI_BUDGETTRACKER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_BudgetTracker
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;

    void setupUi(QDialog *BudgetTracker)
    {
        if (BudgetTracker->objectName().isEmpty())
            BudgetTracker->setObjectName("BudgetTracker");
        BudgetTracker->resize(455, 474);
        gridLayout = new QGridLayout(BudgetTracker);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_3 = new QLabel(BudgetTracker);
        label_3->setObjectName("label_3");
        QFont font;
        font.setPointSize(12);
        label_3->setFont(font);

        horizontalLayout->addWidget(label_3);

        lineEdit = new QLineEdit(BudgetTracker);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(BudgetTracker);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(BudgetTracker);
        lineEdit_2->setObjectName("lineEdit_2");

        horizontalLayout_2->addWidget(lineEdit_2);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);


        retranslateUi(BudgetTracker);

        QMetaObject::connectSlotsByName(BudgetTracker);
    } // setupUi

    void retranslateUi(QDialog *BudgetTracker)
    {
        BudgetTracker->setWindowTitle(QCoreApplication::translate("BudgetTracker", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("BudgetTracker", "Spent", nullptr));
        label_2->setText(QCoreApplication::translate("BudgetTracker", "Total", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BudgetTracker: public Ui_BudgetTracker {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUDGETTRACKER_H
