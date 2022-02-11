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
    QGraphicsDropShadowEffect *effect1 = new QGraphicsDropShadowEffect;effect1->setYOffset(-2);effect1->setXOffset(-2);effect1->setColor(QColor(48, 98, 156, 50));effect1->setBlurRadius(30);
    ui->statActive->setGraphicsEffect(effect1);

//    QGraphicsDropShadowEffect *effect2 = new QGraphicsDropShadowEffect;effect2->setYOffset(-2);effect2->setXOffset(-2);effect2->setColor(QColor(48, 98, 156, 50));effect2->setBlurRadius(30);
//    ui->statCompleted->setGraphicsEffect(effect2);

//    QGraphicsDropShadowEffect *effect3 = new QGraphicsDropShadowEffect;effect3->setYOffset(-2);effect3->setXOffset(-2);effect3->setColor(QColor(48, 98, 156, 50));effect3->setBlurRadius(30);
//    ui->statsTasks->setGraphicsEffect(effect3);

//    QGraphicsDropShadowEffect *effect4 = new QGraphicsDropShadowEffect;effect4->setYOffset(-2);effect4->setXOffset(-2);effect4->setColor(QColor(48, 98, 156, 50));effect4->setBlurRadius(30);
//    ui->statOverdue->setGraphicsEffect(effect4);

//    QGraphicsDropShadowEffect *effect5 = new QGraphicsDropShadowEffect;effect5->setYOffset(-2);effect5->setXOffset(-2);effect5->setColor(QColor(25,52,82, 50));effect5->setBlurRadius(30);
//    ui->sideBar->setGraphicsEffect(effect5);

//    QGraphicsDropShadowEffect *effect6 = new QGraphicsDropShadowEffect;effect6->setYOffset(-2);effect6->setXOffset(-2);effect6->setColor(QColor(25,52,82, 50));effect6->setBlurRadius(30);
//    ui->upperWidget->setGraphicsEffect(effect6);

//    QGraphicsDropShadowEffect *effect7 = new QGraphicsDropShadowEffect;effect7->setYOffset(-2);effect7->setXOffset(-2);effect7->setColor(QColor(25,52,82, 50));effect7->setBlurRadius(30);
//    ui->userImage->setGraphicsEffect(effect7);

//    QGraphicsDropShadowEffect *effect8 = new QGraphicsDropShadowEffect;effect8->setYOffset(-2);effect8->setXOffset(-2);effect8->setColor(QColor(25,52,82, 50));effect8->setBlurRadius(30);
//    ui->taskCard->setGraphicsEffect(effect8);

//    QGraphicsDropShadowEffect *effect9 = new QGraphicsDropShadowEffect;effect9->setYOffset(-3);effect9->setXOffset(-3);effect9->setColor(QColor(48, 98, 156, 70));effect9->setBlurRadius(20);
//    ui->taskCard->setGraphicsEffect(effect9);


}
MainWindow::~MainWindow(){
    time->stop = true;
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
    ui->upperTime->setText(QString("%1:%2").arg(QString::number(Hours, 10), QString::number(Minutes, 10)));
}
