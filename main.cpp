#include "thiagotodo.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ThiagoToDo w;
    w.show();
    return a.exec();
}
