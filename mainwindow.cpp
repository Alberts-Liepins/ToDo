#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QMouseEvent>
#include <QGraphicsDropShadowEffect>
#include <QCursor>
#include <QPoint>
#include <ctime>

MainWindow::MainWindow(QWidget *parent):QMainWindow(parent),ui(new Ui::MainWindow){
    ui->setupUi(this);
    this->setFixedSize(1280,800);

    time = new Clock(this);
    connect(time, SIGNAL(getTime(int,int)), this, SLOT(onTimeChanged(int,int)));
    time->start();

    //Varbūt ir iespējams šo ar "findChild" ciklu kaut kādā veidā izdarīt, lai pēc kārtas izpildās effect izveidošana un pēc tam tās izvade widgetam.
    //pagaidām ir šādi, tas strādātu.
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    QGraphicsDropShadowEffect *effect = new QGraphicsDropShadowEffect;
    effect->setYOffset(-3);
    effect->setXOffset(-3);
    effect->setColor(QColor(225, 69, 69, 255));

    ui->statActive->setGraphicsEffect(effect);
    QGraphicsDropShadowEffect *effect2 = new QGraphicsDropShadowEffect;
    effect2->setYOffset(-3);
    effect2->setXOffset(-3);
    effect2->setColor(QColor(225, 69, 69, 255));

    ui->statCompleted->setGraphicsEffect(effect2);

    QGraphicsDropShadowEffect *effect3 = new QGraphicsDropShadowEffect;
    effect3->setYOffset(-3);
    effect3->setXOffset(-3);
    effect3->setColor(QColor(225, 69, 69, 255));

    ui->statsTasks->setGraphicsEffect(effect3);

    QGraphicsDropShadowEffect *effect4 = new QGraphicsDropShadowEffect;
    effect4->setYOffset(-3);
    effect4->setXOffset(-3);
    effect4->setColor(QColor(225, 69, 69, 255));

    ui->statOverdue->setGraphicsEffect(effect4);
}
MainWindow::~MainWindow(){
    delete ui;
}

QPoint dragPosition;
QPoint asd {0, 41};
int height = asd.y();


void MainWindow::mousePressEvent(QMouseEvent *event){
    //QPoint mousePos = QCursor::pos();
    if (event->button() == Qt::LeftButton) {
        qDebug() << asd;
        if (asd.y() >= event->pos().y()) {
            dragPosition = event->globalPosition().toPoint() - frameGeometry().topLeft();
            event->accept();
        }
    }
}

void MainWindow::mouseMoveEvent(QMouseEvent *event){
    if (event->buttons() & Qt::LeftButton) {
        if (asd.y() >= event->pos().y()) {
            move(event->globalPosition().toPoint() - dragPosition);
            event->accept();
        }
    }
}

void MainWindow::on_upperClose_clicked(){
    this->close();
}


void MainWindow::on_upperMinimize_clicked(){
    this->setWindowState(Qt::WindowMinimized);
}

void MainWindow::onTimeChanged(int Hours, int Minutes)
{
    ui->upperTime->setText(QString("%1:%2 ").arg(QString::number(Hours, 10), QString::number(Minutes, 10)));
//    ui->Hour->display(Hours);
//    ui->Minutes->display(Minutes);
}
