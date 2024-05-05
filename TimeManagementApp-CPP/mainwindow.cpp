#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "./notes.h"
#include "./Calendar.h"
#include <QString>
#include <QMessageBox>
#include <QTimer>
#include <QDateTime>
#include <QCheckBox>
#include <iostream>

static double totalSpent = 0; // Declared as static to retain its value between function calls.


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);

    // Set the current date and time in the QDateTimeEdit widget
    ui->dateTimeEdit->setDateTime(QDateTime::currentDateTime());
    ui->addBtn->setEnabled(false);
    ui->leTodo->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::disableTodo()
{
    ui->addBtn->setEnabled(false);
    ui->leTodo->setEnabled(false);
}
void MainWindow::enableTodo()
{
    ui->addBtn->setEnabled(true);
    ui->leTodo->setEnabled(true);
}



void MainWindow::on_startBtn_clicked()
{
    QString strTime = ui->leTimerEntry->text();
    int timeInSeconds = strTime.toInt();

    // Create a QTimer to update the UI at regular intervals
    timer = new QTimer(this); // Remove QTimer * from here
    connect(timer, &QTimer::timeout, [=]() mutable { // Add mutable keyword here
        if (timeInSeconds >= 0) {
            int minutes = timeInSeconds / 60;
            int seconds = timeInSeconds % 60;

            // Format the time as "mm:ss"
            QString formattedTime = QString("%1:%2").arg(minutes, 2, 10, QChar('0')).arg(seconds, 2, 10, QChar('0'));

            ui->leTimerResult->setText(formattedTime); // Set the formatted time in the line edit widget

            // Update the time value if needed
            timeInSeconds--;
        } else {
            timer->stop(); // Stop the timer when the countdown is finished
            QMessageBox::information(this, "Timer", "Timer has finished!");

        }
    });

    // Start the timer with a interval of 1000 milliseconds (1 second)
    timer->start(1000);
    ui->leTimerEntry->clear();
}

void MainWindow::on_stopBtn_clicked()
{
    // Stop the timer
    if (timer != nullptr) {
        timer->stop();
        delete timer; // Delete the timer object to release the memory
        timer = nullptr; // Reset the timer pointer
    }

    // Reset the timer result field
    ui->leTimerResult->clear();
}

void MainWindow::on_pauseBtn_clicked()
{
    // Toggle between pause and resume functionality
    if (timer != nullptr) {
        if (!isPaused) { // If not paused, pause the timer
            timer->stop();
            isPaused = true;
        } else { // If paused, resume the timer
            timer->start(1000); // Start the timer with an interval of 1000 milliseconds (1 second)
            isPaused = false;
        }
    }
}

void MainWindow::on_notesBtn_clicked()
{
    disableTodo();
    if (notesOpened) {
        // If notes are already opened, close the widget
        // Find the widget in the layout and remove it
        for (int i = 0; i < ui->mainGridLayout->count(); ++i) {
            if (QWidget *widget = ui->mainGridLayout->itemAt(i)->widget()) {
                if (widget->objectName() == "NotesWidget") {
                    ui->mainGridLayout->removeWidget(widget);
                    widget->deleteLater(); // Delete the widget
                    break;
                }
            }
        }
        // Set notesOpened to false to indicate that notes are now closed
        notesOpened = false;
    } else {
        // If notes are not already opened, create and add the Notes widget
        Notes *note = new Notes(this);
        note->setObjectName("NotesWidget"); // Set object name for later identification
        ui->mainGridLayout->addWidget(note);

        // Set notesOpened to true to indicate that notes are now opened
        notesOpened = true;
    }
}

void MainWindow::on_addBtn_clicked()
{
    // Get the text from the addBtn button
    QString newText = ui->leTodo->text();

    // Create a new QCheckBox instance with the text of the addBtn button
    QCheckBox *checkBox = new QCheckBox(newText);

    // Add the checkBox to your layout
    ui->mainGridLayout->addWidget(checkBox);

    // Clear the text of the addBtn button
    ui->leTodo->clear();
}

void MainWindow::on_todoBtn_clicked()
{
    static bool todoEnabled = false; // Static variable to keep track of the state

    if (todoEnabled) {
        // If todo widget is enabled, disable it
        disableTodo(); // Assuming you have a function named disableTodo() to disable the todo widget
        todoEnabled = false;
    } else {
        // If todo widget is disabled, enable it
        enableTodo(); // Assuming you have a function named enableTodo() to enable the todo widget
        todoEnabled = true;
    }
}




void MainWindow::on_calendarBtn_clicked()
{
    static bool calendarOpened = false; // Static variable to keep track of the state

    if (calendarOpened) {
        // If calendar is already opened, close the widget
        // Find the widget in the layout and remove it
        for (int i = 0; i < ui->mainGridLayout->count(); ++i) {
            if (QWidget *widget = ui->mainGridLayout->itemAt(i)->widget()) {
                if (widget->objectName() == "CalendarWidget") {
                    ui->mainGridLayout->removeWidget(widget);
                    widget->deleteLater(); // Delete the widget
                    break;
                }
            }
        }
        // Set calendarOpened to false to indicate that calendar is now closed
        calendarOpened = false;
    } else {
        // If calendar is not already opened, create and add the Calendar widget
        Calendar *calendar = new Calendar;
        calendar->setObjectName("CalendarWidget"); // Set object name for later identification
        ui->mainGridLayout->addWidget(calendar);

        // Set calendarOpened to true to indicate that calendar is now opened
        calendarOpened = true;
    }
}





void MainWindow::on_addBudgetBtn_clicked()
{
    QString priceStr = ui->leBudgetEntry->text();
    bool ok;
    int price = priceStr.toDouble(&ok);

    if (!ok) {
        // Handle invalid input
        QMessageBox::warning(this, "Warning", "Invalid input for price"); return;
    }

    totalSpent += price;

    QString totalSpentStr = QString::number(totalSpent);
    ui->leTotalSpent->setText(totalSpentStr);
    ui->leBudgetEntry->clear();
}


void MainWindow::on_minusBudgetBtn_clicked()
{
    QString priceStr = ui->leBudgetEntry->text();
    bool ok;
    double price = priceStr.toDouble(&ok);

    if (!ok) {
        // Handle invalid input
        QMessageBox::warning(this, "Warning", "Invalid input for price");
        return;
    }
    totalSpent -= price; // Subtract the entered value from the total spent amount

    QString totalSpentStr = QString::number(totalSpent);
    ui->leTotalSpent->setText(totalSpentStr);
    ui->leBudgetEntry->clear();
}


