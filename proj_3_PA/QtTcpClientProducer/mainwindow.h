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
    /** @brief chamado da janela, e inicia seus parametros
     * @param ponteiro parent recebe valor 0
     *  */
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();

    /** @brief Conexão com o servidor
     * */
  void tcpConnect(bool cd);

  /** @brief Para pegar o horário
   * */
   void timerEvent(QTimerEvent *event);

public slots:
   /** @brief add valores de min, max e timing
        * */
  void putData();
 //void on_min_slider_sliderMoved(int position);

  /** @brief Conectar com o servidor
       * */
  void on_ip_server_connect_clicked(bool checked);

private slots:

  /** @brief Desconectar com o servidor
       * */
  void on_ip_server_disconnect_clicked(bool checked);

  /** @brief Envia o valor min do slide pro display
       * */
  void on_min_slider_valueChanged(int value);
  /** @brief Envia o valor min do slide pro display
       * */
  void on_max_slider_valueChanged(int value);

  /** @brief Envia o valor timing do slide pro display
       * */
  void on_time_slider_valueChanged(int value);

  /** @brief Ação do Botão iniciar
       * */
  void on_pushButtonPut_clicked();


  /** @brief Ação do botão parar
       * */
  void on_stop_clicked();

private:
  Ui::MainWindow *ui;
  QTcpSocket *socket;
  int temporizador;
};

#endif // MAINWINDOW_H
