#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QTimer>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_startBtn_clicked();
    void on_stopBtn_clicked();
    void on_pauseBtn_clicked();

    void on_notesBtn_clicked();

    void on_addBtn_clicked();

    void on_todoBtn_clicked();
    void disableTodo();
    void enableTodo();

    void on_calendarBtn_clicked();

    void on_addBudgetBtn_clicked();

    void on_minusBudgetBtn_clicked();

    void on_quitBtn_clicked();

private:
    Ui::MainWindow *ui;
    QTimer *timer = nullptr; // Declare the timer as a member variable
    bool isPaused = false;
    bool notesOpened = false;
};
#endif // MAINWINDOW_H
