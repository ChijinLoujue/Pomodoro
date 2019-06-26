#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "QLCDNumber"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Pomodoro by Chijin");
    Init();
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::Init()
{
    WorkTime = 0;
    RestTime = 0;
    currentTime = 0;
    QObject::connect(ui->BtnStart,SIGNAL(clicked(bool)),this,SLOT(BtnStartClicked()));
    QObject::connect(ui->BtnStop,SIGNAL(clicked(bool)),this,SLOT(BtnStopClicked()));
    ui->LineEditWork->setText("25");
    ui->LineEditRest->setText("5");
    ui->LcdMinute->display(88);
    ui->LcdSecond->display(88);

}

void MainWindow::BtnStartClicked()
{
    QString myWorkTime=ui->LineEditWork->text();
    QString myRestTime=ui->LineEditRest->text();
    WorkTime = (myWorkTime.toInt())*60;
    RestTime = (myRestTime.toInt())*60;
    if(WorkTime<=0||RestTime<=0)
    {
        QMessageBox::information(this,"Warning!","Please set available time value!");
        return;
    }

    //ui->LcdMinute->display(WorkTime/60);
    //ui->LcdSecond->display(WorkTime%60);
    currentTime=WorkTime;
    QObject::connect(workTimer,SIGNAL(timeout()),this,SLOT(WorkTimeUpdate()));
    workTimer->start(1000);



   // QMessageBox::information(this,"OK","that's all");

}
void MainWindow::BtnStopClicked()
{

}


void MainWindow::WorkTimeUpdate()
{
    if(currentTime>=0)
    {
        ui->LcdMinute->display(currentTime/60);
        ui->LcdSecond->display(currentTime%60);
        currentTime=currentTime-1;
    }
    else
    {
        workTimer->stop();
        currentTime = 0;
        QMessageBox::information(this,"End of work time","It't time to rest!");
        currentTime=RestTime;
        QObject::connect(restTimer,SIGNAL(timeout()),this,SLOT(RestTimeUpdate()));
        restTimer->start(1000);



    }
}

void MainWindow::RestTimeUpdate()
{

    if(currentTime>=0)
    {
        ui->LcdMinute->display(currentTime/60);
        ui->LcdSecond->display(currentTime%60);
        currentTime=currentTime-1;
    }
    else
    {
        restTimer->stop();
        QMessageBox::information(this,"End of rest time","It't time to work agin!");
    }
}
