#include "todo.h"
#include "ui_todo.h"

Todo::Todo(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Todo)
{
    ui->setupUi(this);
}

Todo::~Todo()
{
    delete ui;
}
