#include "produtor.h"
#include "ui_produtor.h"

Produtor::Produtor(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Produtor)
{
    ui->setupUi(this);
}

Produtor::~Produtor()
{
    delete ui;
}
