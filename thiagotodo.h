#ifndef THIAGOTODO_H
#define THIAGOTODO_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class ThiagoToDo; }
QT_END_NAMESPACE

class ThiagoToDo : public QMainWindow
{
    Q_OBJECT

public:
    ThiagoToDo(QWidget *parent = nullptr);
    ~ThiagoToDo();

private:
    Ui::ThiagoToDo *ui;
};
#endif // THIAGOTODO_H
