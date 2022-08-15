#ifndef THIAGOTODO_H
#define THIAGOTODO_H

#include <QMainWindow>
#include <QtSql>
#include <QMessageBox>
#include <QFileInfo>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class ThiagoToDo; }
QT_END_NAMESPACE

class ThiagoToDo : public QMainWindow
{
    Q_OBJECT

public:
    QString home=getenv("HOME");
    void start();
    QString dir=":/ThiagoTodoList.db";
    QString user=home+"/.config/ThiagoTodoList.db";
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    void show_data();
    ThiagoToDo(QWidget *parent = nullptr);
    ~ThiagoToDo();

private slots:
    void on_actionExit_triggered();

    void on_actionAbout_triggered();

private:
    Ui::ThiagoToDo *ui;
};
#endif // THIAGOTODO_H
