#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "clock.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    Clock *time;

protected:
    void mouseMoveEvent(QMouseEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;

private slots:
    void on_upperClose_clicked();

    void on_upperMinimize_clicked();

public slots:
    void onTimeChanged(int, int, int, int, int);

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
