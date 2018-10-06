#ifndef HAMWINDOW_H
#define HAMWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QWidget>
#include <QLCDNumber>
#include "mainwindow.h"

namespace Ui
{
    class HamWindow;
}

class HamWindow : public QWidget
{
    Q_OBJECT

public:
    explicit HamWindow(QWidget *parent = 0);
    ~HamWindow();
    void updateAddFreq();
    void updateSubFreq();

private:
    Ui::HamWindow *ui;

    QLCDNumber     *lcdscreen;
    QPushButton    *upbutton;
    QPushButton    *downbutton;
    QPushButton    *scanbutton;
    QPushButton    *homebutton;

    double hamfreq;


private slots:
    void upbutton_clicked();
    void downbutton_clicked();
    void scanbutton_clicked();
    void homebutton_clicked();

}; //end class HamWindow

#endif // HAMWINDOW_H
