/********************************************************************************
** Form generated from reading UI file 'budgettracer.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUDGETTRACER_H
#define UI_BUDGETTRACER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BudgetTracer
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QScrollArea *groceries;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QScrollArea *electronic;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QScrollArea *clothing;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_6;
    QScrollArea *hobbie;
    QWidget *scrollAreaWidgetContents_4;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QComboBox *cmbBudget;
    QLineEdit *leItem;
    QLineEdit *lePrice;
    QPushButton *addItemBtn;

    void setupUi(QDialog *BudgetTracer)
    {
        if (BudgetTracer->objectName().isEmpty())
            BudgetTracer->setObjectName("BudgetTracer");
        BudgetTracer->resize(455, 474);
        gridLayout_2 = new QGridLayout(BudgetTracer);
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_3 = new QLabel(BudgetTracer);
        label_3->setObjectName("label_3");
        QFont font;
        font.setPointSize(12);
        label_3->setFont(font);

        verticalLayout_3->addWidget(label_3);

        groceries = new QScrollArea(BudgetTracer);
        groceries->setObjectName("groceries");
        groceries->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 100, 356));
        groceries->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(groceries);


        horizontalLayout_3->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_4 = new QLabel(BudgetTracer);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        verticalLayout_4->addWidget(label_4);

        electronic = new QScrollArea(BudgetTracer);
        electronic->setObjectName("electronic");
        electronic->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 101, 356));
        electronic->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_4->addWidget(electronic);


        horizontalLayout_3->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_5 = new QLabel(BudgetTracer);
        label_5->setObjectName("label_5");
        label_5->setFont(font);

        verticalLayout_5->addWidget(label_5);

        clothing = new QScrollArea(BudgetTracer);
        clothing->setObjectName("clothing");
        clothing->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName("scrollAreaWidgetContents_3");
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 100, 356));
        clothing->setWidget(scrollAreaWidgetContents_3);

        verticalLayout_5->addWidget(clothing);


        horizontalLayout_3->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_6 = new QLabel(BudgetTracer);
        label_6->setObjectName("label_6");
        label_6->setFont(font);

        verticalLayout_6->addWidget(label_6);

        hobbie = new QScrollArea(BudgetTracer);
        hobbie->setObjectName("hobbie");
        hobbie->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName("scrollAreaWidgetContents_4");
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 100, 356));
        hobbie->setWidget(scrollAreaWidgetContents_4);

        verticalLayout_6->addWidget(hobbie);


        horizontalLayout_3->addLayout(verticalLayout_6);


        gridLayout_2->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(BudgetTracer);
        label->setObjectName("label");
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(BudgetTracer);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        cmbBudget = new QComboBox(BudgetTracer);
        cmbBudget->setObjectName("cmbBudget");
        QFont font1;
        font1.setPointSize(9);
        cmbBudget->setFont(font1);

        gridLayout->addWidget(cmbBudget, 0, 2, 1, 1);

        leItem = new QLineEdit(BudgetTracer);
        leItem->setObjectName("leItem");

        gridLayout->addWidget(leItem, 1, 0, 1, 1);

        lePrice = new QLineEdit(BudgetTracer);
        lePrice->setObjectName("lePrice");

        gridLayout->addWidget(lePrice, 1, 1, 1, 1);

        addItemBtn = new QPushButton(BudgetTracer);
        addItemBtn->setObjectName("addItemBtn");
        addItemBtn->setFont(font);

        gridLayout->addWidget(addItemBtn, 1, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);


        retranslateUi(BudgetTracer);

        QMetaObject::connectSlotsByName(BudgetTracer);
    } // setupUi

    void retranslateUi(QDialog *BudgetTracer)
    {
        BudgetTracer->setWindowTitle(QCoreApplication::translate("BudgetTracer", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("BudgetTracer", "Groceries", nullptr));
        label_4->setText(QCoreApplication::translate("BudgetTracer", "Electronic", nullptr));
        label_5->setText(QCoreApplication::translate("BudgetTracer", "Clothing", nullptr));
        label_6->setText(QCoreApplication::translate("BudgetTracer", "Hobbie", nullptr));
        label->setText(QCoreApplication::translate("BudgetTracer", "Item", nullptr));
        label_2->setText(QCoreApplication::translate("BudgetTracer", "Price", nullptr));
        addItemBtn->setText(QCoreApplication::translate("BudgetTracer", "Add item", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BudgetTracer: public Ui_BudgetTracer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUDGETTRACER_H
