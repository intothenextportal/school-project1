/********************************************************************************
** Form generated from reading UI file 'calendar.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALENDAR_H
#define UI_CALENDAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>

QT_BEGIN_NAMESPACE

class Ui_Calendar
{
public:
    QGridLayout *gridLayout;
    QCalendarWidget *calendarWidget;

    void setupUi(QDialog *Calendar)
    {
        if (Calendar->objectName().isEmpty())
            Calendar->setObjectName("Calendar");
        Calendar->resize(995, 588);
        gridLayout = new QGridLayout(Calendar);
        gridLayout->setObjectName("gridLayout");
        calendarWidget = new QCalendarWidget(Calendar);
        calendarWidget->setObjectName("calendarWidget");

        gridLayout->addWidget(calendarWidget, 0, 0, 1, 1);


        retranslateUi(Calendar);

        QMetaObject::connectSlotsByName(Calendar);
    } // setupUi

    void retranslateUi(QDialog *Calendar)
    {
        Calendar->setWindowTitle(QCoreApplication::translate("Calendar", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calendar: public Ui_Calendar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALENDAR_H
