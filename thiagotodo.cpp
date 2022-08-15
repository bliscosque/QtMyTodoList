#include "thiagotodo.h"
#include "ui_thiagotodo.h"

ThiagoToDo::ThiagoToDo(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ThiagoToDo)
{
    ui->setupUi(this);
}

ThiagoToDo::~ThiagoToDo()
{
    delete ui;
}


void ThiagoToDo::on_actionExit_triggered()
{
    close();
}


void ThiagoToDo::on_actionAbout_triggered()
{
    QMessageBox::about(this, "About...", "This is a Thiago's TodoList developed using Qt");
}

