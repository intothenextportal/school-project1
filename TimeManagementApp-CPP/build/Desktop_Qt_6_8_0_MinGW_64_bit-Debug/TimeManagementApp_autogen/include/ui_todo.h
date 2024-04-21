/********************************************************************************
** Form generated from reading UI file 'todo.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TODO_H
#define UI_TODO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>

QT_BEGIN_NAMESPACE

class Ui_Todo
{
public:
    QGridLayout *gridLayout;
    QCheckBox *checkBox;

    void setupUi(QDialog *Todo)
    {
        if (Todo->objectName().isEmpty())
            Todo->setObjectName("Todo");
        Todo->resize(685, 40);
        Todo->setLayoutDirection(Qt::LeftToRight);
        Todo->setAutoFillBackground(false);
        gridLayout = new QGridLayout(Todo);
        gridLayout->setObjectName("gridLayout");
        checkBox = new QCheckBox(Todo);
        checkBox->setObjectName("checkBox");

        gridLayout->addWidget(checkBox, 0, 0, 1, 1);


        retranslateUi(Todo);

        QMetaObject::connectSlotsByName(Todo);
    } // setupUi

    void retranslateUi(QDialog *Todo)
    {
        Todo->setWindowTitle(QCoreApplication::translate("Todo", "Dialog", nullptr));
        checkBox->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Todo: public Ui_Todo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TODO_H
