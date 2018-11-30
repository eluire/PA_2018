#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
              /**
            @param iniciando o aplicativo
            */
  QApplication a(argc, argv);
  MainWindow w;
  w.show();

  return a.exec();
}
