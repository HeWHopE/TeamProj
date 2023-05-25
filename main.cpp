#include "mainwindow.h"

#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QLabel *label = new QLabel("Sup");

    label->resize(400,400);
    label->show();
   // MainWindow w;
  //  w.show();


    return a.exec();
}
