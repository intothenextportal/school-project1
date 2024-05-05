/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QDateTimeEdit *dateTimeEdit;
    QWidget *gridLayoutWidget;
    QGridLayout *mainGridLayout;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_4;
    QPushButton *todoBtn;
    QPushButton *calendarBtn;
    QPushButton *notesBtn;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *leTimerResult;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *leTimerEntry;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *startBtn;
    QPushButton *pauseBtn;
    QPushButton *stopBtn;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *addBtn;
    QLineEdit *leTodo;
    QWidget *layoutWidget3;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *totalSpentLabel;
    QLineEdit *leTotalSpent;
    QLineEdit *leBudgetEntry;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *addBudgetBtn;
    QPushButton *minusBudgetBtn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1327, 612);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        dateTimeEdit = new QDateTimeEdit(centralwidget);
        dateTimeEdit->setObjectName("dateTimeEdit");
        dateTimeEdit->setGeometry(QRect(10, 20, 241, 61));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dateTimeEdit->sizePolicy().hasHeightForWidth());
        dateTimeEdit->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("Cascadia Code")});
        font.setPointSize(16);
        font.setBold(false);
        dateTimeEdit->setFont(font);
        dateTimeEdit->setMouseTracking(false);
        dateTimeEdit->setFrame(false);
        dateTimeEdit->setAlignment(Qt::AlignCenter);
        dateTimeEdit->setReadOnly(true);
        dateTimeEdit->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dateTimeEdit->setDate(QDate(2024, 4, 20));
        dateTimeEdit->setTime(QTime(7, 1, 0));
        dateTimeEdit->setCurrentSection(QDateTimeEdit::MonthSection);
        dateTimeEdit->setCalendarPopup(false);
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(290, 20, 1021, 511));
        mainGridLayout = new QGridLayout(gridLayoutWidget);
        mainGridLayout->setObjectName("mainGridLayout");
        mainGridLayout->setContentsMargins(0, 0, 0, 0);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 110, 241, 131));
        gridLayout_4 = new QGridLayout(layoutWidget);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        todoBtn = new QPushButton(layoutWidget);
        todoBtn->setObjectName("todoBtn");
        QFont font1;
        font1.setPointSize(17);
        todoBtn->setFont(font1);

        gridLayout_4->addWidget(todoBtn, 2, 0, 1, 1);

        calendarBtn = new QPushButton(layoutWidget);
        calendarBtn->setObjectName("calendarBtn");
        calendarBtn->setFont(font1);

        gridLayout_4->addWidget(calendarBtn, 0, 0, 1, 1);

        notesBtn = new QPushButton(layoutWidget);
        notesBtn->setObjectName("notesBtn");
        notesBtn->setFont(font1);

        gridLayout_4->addWidget(notesBtn, 1, 0, 1, 1);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(10, 270, 256, 179));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName("label");
        QFont font2;
        font2.setPointSize(20);
        label->setFont(font2);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        leTimerResult = new QLineEdit(layoutWidget1);
        leTimerResult->setObjectName("leTimerResult");
        QFont font3;
        font3.setPointSize(22);
        leTimerResult->setFont(font3);
        leTimerResult->setReadOnly(true);

        gridLayout_2->addWidget(leTimerResult, 1, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName("label_2");
        QFont font4;
        font4.setPointSize(12);
        label_2->setFont(font4);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        leTimerEntry = new QLineEdit(layoutWidget1);
        leTimerEntry->setObjectName("leTimerEntry");

        gridLayout->addWidget(leTimerEntry, 0, 1, 2, 1);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName("label_3");
        QFont font5;
        font5.setPointSize(10);
        label_3->setFont(font5);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        startBtn = new QPushButton(layoutWidget1);
        startBtn->setObjectName("startBtn");
        startBtn->setFont(font4);

        horizontalLayout->addWidget(startBtn);

        pauseBtn = new QPushButton(layoutWidget1);
        pauseBtn->setObjectName("pauseBtn");
        pauseBtn->setFont(font4);

        horizontalLayout->addWidget(pauseBtn);

        stopBtn = new QPushButton(layoutWidget1);
        stopBtn->setObjectName("stopBtn");
        stopBtn->setFont(font4);

        horizontalLayout->addWidget(stopBtn);


        gridLayout_2->addLayout(horizontalLayout, 3, 0, 1, 1);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(290, 540, 1021, 26));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        addBtn = new QPushButton(layoutWidget2);
        addBtn->setObjectName("addBtn");

        horizontalLayout_2->addWidget(addBtn);

        leTodo = new QLineEdit(layoutWidget2);
        leTodo->setObjectName("leTodo");

        horizontalLayout_2->addWidget(leTodo);

        layoutWidget3 = new QWidget(centralwidget);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(10, 470, 241, 95));
        gridLayout_3 = new QGridLayout(layoutWidget3);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        totalSpentLabel = new QLabel(layoutWidget3);
        totalSpentLabel->setObjectName("totalSpentLabel");
        totalSpentLabel->setFont(font4);

        horizontalLayout_3->addWidget(totalSpentLabel);

        leTotalSpent = new QLineEdit(layoutWidget3);
        leTotalSpent->setObjectName("leTotalSpent");
        leTotalSpent->setReadOnly(true);

        horizontalLayout_3->addWidget(leTotalSpent);


        gridLayout_3->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        leBudgetEntry = new QLineEdit(layoutWidget3);
        leBudgetEntry->setObjectName("leBudgetEntry");
        leBudgetEntry->setReadOnly(false);

        gridLayout_3->addWidget(leBudgetEntry, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        addBudgetBtn = new QPushButton(layoutWidget3);
        addBudgetBtn->setObjectName("addBudgetBtn");
        QFont font6;
        font6.setPointSize(12);
        font6.setBold(true);
        addBudgetBtn->setFont(font6);

        horizontalLayout_4->addWidget(addBudgetBtn);

        minusBudgetBtn = new QPushButton(layoutWidget3);
        minusBudgetBtn->setObjectName("minusBudgetBtn");
        minusBudgetBtn->setFont(font6);

        horizontalLayout_4->addWidget(minusBudgetBtn);


        gridLayout_3->addLayout(horizontalLayout_4, 2, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1327, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        todoBtn->setText(QCoreApplication::translate("MainWindow", "To-Do", nullptr));
        calendarBtn->setText(QCoreApplication::translate("MainWindow", "Calendar", nullptr));
        notesBtn->setText(QCoreApplication::translate("MainWindow", "Notes", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Timer", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Enter time", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "(in seconds)", nullptr));
        startBtn->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        pauseBtn->setText(QCoreApplication::translate("MainWindow", "Pause", nullptr));
        stopBtn->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        addBtn->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        totalSpentLabel->setText(QCoreApplication::translate("MainWindow", "Total spent", nullptr));
        addBudgetBtn->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        minusBudgetBtn->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
