#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();
  void tcpConnect(bool cd);
   void timerEvent(QTimerEvent *event);
public slots:
  void putData();
 //void on_min_slider_sliderMoved(int position);
  void on_ip_server_connect_clicked(bool checked);

private slots:


  void on_ip_server_disconnect_clicked(bool checked);

  void on_min_slider_valueChanged(int value);

  void on_max_slider_valueChanged(int value);

  void on_time_slider_valueChanged(int value);

  void on_pushButtonPut_clicked();



  void on_stop_clicked();

private:
  Ui::MainWindow *ui;
  QTcpSocket *socket;
  int temporizador;
};

#endif // MAINWINDOW_H
