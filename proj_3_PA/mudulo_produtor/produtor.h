#ifndef PRODUTOR_H
#define PRODUTOR_H

#include <QMainWindow>

namespace Ui {
class Produtor;
}

class Produtor : public QMainWindow
{
    Q_OBJECT

public:
    explicit Produtor(QWidget *parent = 0);
    ~Produtor();

private:
    Ui::Produtor *ui;
};

#endif // PRODUTOR_H
