#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent), ui(new Ui::MainWindow){
    ui->setupUi(this);
    bool cd = true;
    socket = new QTcpSocket(this);
    tcpConnect(cd);

    connect(ui->pushButtonPut,
            SIGNAL(clicked(bool)),
            this,
            SLOT(putData()));
    connect(ui->ip_server_connect,
            SIGNAL(clicked(bool)),
            this,
            SLOT(on_ip_server_connect_clicked(bool)));
    connect(ui->ip_server_disconnect,
            SIGNAL(clicked(bool)),
            this,
            SLOT(on_ip_server_disconnect_clicked(bool)));
    connect(ui->min_slider,
            SIGNAL(valueChanged(int)),
            this,
            SLOT(on_min_slider_valueChanged(int)));
    connect(ui->max_slider,
            SIGNAL(valueChanged(int)),
            this,
            SLOT(on_max_slider_valueChanged(int)));
    connect(ui->time_slider,
            SIGNAL(valueChanged(int)),
            this,
            SLOT(on_time_slider_valueChanged(int)));
}


void MainWindow::tcpConnect(bool cd){

    if(cd == true){
        QString a = ui->ip_server_input->text();
        qint16 b = ui->port_server_input->text().toInt();
        qDebug()<<b;

        socket->connectToHost(a,b);
        if(socket->waitForConnected(3000)){
            qDebug() << "Connected";
            ui->status_label->setText("Connect");
        }
        else{
            qDebug() << "Disconnected";
            ui->status_label->setText("Disconnect");
        }

    }
    else{
        socket->disconnectFromHost();
        ui->status_label->setText("Disconnect");

    }

}

void MainWindow::putData(){
    QDateTime datetime;
    QString str;
    qint64 msecdate;

    int high = ui->max_slider->value();
    int low = ui->min_slider->value();
    if(socket->state()== QAbstractSocket::ConnectedState){
        //teste


        msecdate = QDateTime::currentDateTime().toMSecsSinceEpoch();
        str = "set "+ QString::number(msecdate) + " " + QString::number(qrand() % ((high + 1) - low) + low);


        ui->server_status->append(str);


        qDebug() << str;
        qDebug() << socket->write(str.toStdString().c_str()) << " bytes written";
        if(socket->waitForBytesWritten(3000)){
            qDebug() << "wrote";
        }
    }
}

MainWindow::~MainWindow(){
    delete socket;
    delete ui;
}

/*void MainWindow::on_min_slider_sliderMoved(int position)
{
    ui->min_slider->
}
*/

void MainWindow::on_ip_server_connect_clicked(bool checked)
{
    bool cd = true;
    tcpConnect(cd);
}

void MainWindow::on_ip_server_disconnect_clicked(bool checked)
{
    bool cd = false;
    tcpConnect(cd);
}

void MainWindow::on_min_slider_valueChanged(int value)
{
    ui->min_display->display(value);
}

void MainWindow::on_max_slider_valueChanged(int value)
{
    ui->max_display->display(value);
}

void MainWindow::on_time_slider_valueChanged(int value)
{
    ui->time_display->display(value);
}

void MainWindow::on_pushButtonPut_clicked()
{
    int time = ui->time_slider->value();
    temporizador = startTimer(time*1000);
}
void MainWindow::timerEvent(QTimerEvent *event){
    putData();
}


void MainWindow::on_stop_clicked()
{
    killTimer(temporizador);
}
