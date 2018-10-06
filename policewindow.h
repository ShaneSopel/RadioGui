#ifndef POLICEWINDOW_H
#define POLICEWINDOW_H


#include <QMainWindow>
#include <QPushButton>
#include <QWidget>
#include <QLCDNumber>
#include "mainwindow.h"

namespace Ui
{
    class PoliceWindow;
}

class PoliceWindow : public QWidget
{
    Q_OBJECT

public:
    explicit PoliceWindow(QWidget *parent = 0);
    ~PoliceWindow();
    void updateAddFreq();
    void updateSubFreq();

private:
    Ui::PoliceWindow *ui;

    QLCDNumber     *lcdscreen;
    QPushButton    *upbutton;
    QPushButton    *downbutton;
    QPushButton    *scanbutton;
    QPushButton    *homebutton;

    double policefreq;


private slots:
    void upbutton_clicked();
    void downbutton_clicked();
    void scanbutton_clicked();
    void homebutton_clicked();

}; //end class PoliceWindow

#endif // POLICEWINDOW_H
