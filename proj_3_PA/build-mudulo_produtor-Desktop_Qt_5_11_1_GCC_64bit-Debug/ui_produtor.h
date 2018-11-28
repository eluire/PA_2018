/********************************************************************************
** Form generated from reading UI file 'produtor.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUTOR_H
#define UI_PRODUTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Produtor
{
public:
    QAction *actionModulo_Produtor;
    QWidget *centralWidget;
    QLineEdit *ip_connect;
    QPushButton *connect;
    QPushButton *disconnect;
    QSlider *min_slider;
    QLabel *mim_label;
    QLCDNumber *min_count;
    QLabel *max_label;
    QSlider *max_slider;
    QLCDNumber *max_count;
    QLabel *time_label;
    QSlider *time_slide;
    QLCDNumber *time_count;
    QPushButton *start;
    QPushButton *stop;
    QLabel *status_label;
    QTextBrowser *historic;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Produtor)
    {
        if (Produtor->objectName().isEmpty())
            Produtor->setObjectName(QStringLiteral("Produtor"));
        Produtor->resize(693, 446);
        actionModulo_Produtor = new QAction(Produtor);
        actionModulo_Produtor->setObjectName(QStringLiteral("actionModulo_Produtor"));
        centralWidget = new QWidget(Produtor);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        ip_connect = new QLineEdit(centralWidget);
        ip_connect->setObjectName(QStringLiteral("ip_connect"));
        ip_connect->setGeometry(QRect(40, 20, 241, 25));
        connect = new QPushButton(centralWidget);
        connect->setObjectName(QStringLiteral("connect"));
        connect->setGeometry(QRect(40, 70, 111, 25));
        disconnect = new QPushButton(centralWidget);
        disconnect->setObjectName(QStringLiteral("disconnect"));
        disconnect->setGeometry(QRect(170, 70, 111, 25));
        min_slider = new QSlider(centralWidget);
        min_slider->setObjectName(QStringLiteral("min_slider"));
        min_slider->setGeometry(QRect(40, 160, 160, 16));
        min_slider->setOrientation(Qt::Horizontal);
        mim_label = new QLabel(centralWidget);
        mim_label->setObjectName(QStringLiteral("mim_label"));
        mim_label->setGeometry(QRect(38, 120, 67, 17));
        min_count = new QLCDNumber(centralWidget);
        min_count->setObjectName(QStringLiteral("min_count"));
        min_count->setGeometry(QRect(210, 130, 61, 41));
        max_label = new QLabel(centralWidget);
        max_label->setObjectName(QStringLiteral("max_label"));
        max_label->setGeometry(QRect(40, 200, 67, 17));
        max_slider = new QSlider(centralWidget);
        max_slider->setObjectName(QStringLiteral("max_slider"));
        max_slider->setGeometry(QRect(40, 230, 160, 16));
        max_slider->setOrientation(Qt::Horizontal);
        max_count = new QLCDNumber(centralWidget);
        max_count->setObjectName(QStringLiteral("max_count"));
        max_count->setGeometry(QRect(210, 200, 64, 41));
        time_label = new QLabel(centralWidget);
        time_label->setObjectName(QStringLiteral("time_label"));
        time_label->setGeometry(QRect(40, 265, 71, 17));
        time_slide = new QSlider(centralWidget);
        time_slide->setObjectName(QStringLiteral("time_slide"));
        time_slide->setGeometry(QRect(40, 300, 160, 16));
        time_slide->setOrientation(Qt::Horizontal);
        time_count = new QLCDNumber(centralWidget);
        time_count->setObjectName(QStringLiteral("time_count"));
        time_count->setGeometry(QRect(210, 270, 64, 41));
        start = new QPushButton(centralWidget);
        start->setObjectName(QStringLiteral("start"));
        start->setGeometry(QRect(40, 340, 101, 25));
        stop = new QPushButton(centralWidget);
        stop->setObjectName(QStringLiteral("stop"));
        stop->setGeometry(QRect(171, 340, 101, 25));
        status_label = new QLabel(centralWidget);
        status_label->setObjectName(QStringLiteral("status_label"));
        status_label->setGeometry(QRect(43, 390, 91, 17));
        historic = new QTextBrowser(centralWidget);
        historic->setObjectName(QStringLiteral("historic"));
        historic->setGeometry(QRect(350, 20, 256, 341));
        Produtor->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(Produtor);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Produtor->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Produtor);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Produtor->setStatusBar(statusBar);

        retranslateUi(Produtor);

        QMetaObject::connectSlotsByName(Produtor);
    } // setupUi

    void retranslateUi(QMainWindow *Produtor)
    {
        Produtor->setWindowTitle(QApplication::translate("Produtor", "Produtor", nullptr));
        actionModulo_Produtor->setText(QApplication::translate("Produtor", "Modulo Produtor", nullptr));
        ip_connect->setText(QString());
        connect->setText(QApplication::translate("Produtor", "Connect", nullptr));
        disconnect->setText(QApplication::translate("Produtor", "Disconnect", nullptr));
        mim_label->setText(QApplication::translate("Produtor", " M\303\255nimo", nullptr));
        max_label->setText(QApplication::translate("Produtor", "M\303\241ximo", nullptr));
        time_label->setText(QApplication::translate("Produtor", "Timing(s)", nullptr));
        start->setText(QApplication::translate("Produtor", "Start", nullptr));
        stop->setText(QApplication::translate("Produtor", "Stop", nullptr));
        status_label->setText(QApplication::translate("Produtor", "Disconnected", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Produtor: public Ui_Produtor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUTOR_H
