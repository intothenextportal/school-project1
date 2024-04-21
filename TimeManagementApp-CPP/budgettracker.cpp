#include "./budgettracker.h"
#include "./ui_budgettracker.h"

BudgetTracker::BudgetTracker(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::BudgetTracker)
{
    ui->setupUi(this);
    ui->cmbBudget->addItem("Groceries");
    ui->cmbBudget->addItem("Electronic");
    ui->cmbBudget->addItem("Clothing");
    ui->cmbBudget->addItem("Hobbie");
}

BudgetTracker::~BudgetTracker()
{
    delete ui;
}
void BudgetTracker::on_cmbBudget_activated(int index)
{

}

