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

