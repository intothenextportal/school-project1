#ifndef BUDGETTRACKER_H
#define BUDGETTRACKER_H

#include <QDialog>
#include <QString>

namespace Ui {
class BudgetTracker;
}

class BudgetTracker : public QDialog
{
    Q_OBJECT

public:
    explicit BudgetTracker(QWidget *parent = nullptr);
    ~BudgetTracker();



private slots:
    void on_cmbBudget_activated(int index);

private:
    Ui::BudgetTracker *ui;
    friend class MainWindow; // Declare MainWindow as a friend
};

#endif // BUDGETTRACKER_H
