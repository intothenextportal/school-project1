#ifndef TODO_H
#define TODO_H

#include <QDialog>
#include <QCheckBox>

namespace Ui {
class Todo;
}

class Todo : public QDialog
{
    Q_OBJECT

public:
    explicit Todo(QWidget *parent = nullptr);
    ~Todo();
    QCheckBox *checkBox; // Add QCheckBox member variable

private:
    Ui::Todo *ui;
};

#endif // TODO_H
