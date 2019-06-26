#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QTimer>
#include <QMessageBox>
#include <QDebug>
#include <windows.h>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

    QTimer *workTimer = new QTimer(this);
    QTimer *restTimer = new QTimer(this);
    int WorkTime;
    int RestTime;
    int currentTime;
    void Init();



    ~MainWindow();

private slots:
    void BtnStartClicked();
    void BtnStopClicked();
    void WorkTimeUpdate();
    void RestTimeUpdate();


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
