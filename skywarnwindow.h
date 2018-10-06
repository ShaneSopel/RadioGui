#ifndef SKYWARNWINDOW_H
#define SKYWARNWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QWidget>
#include <QLCDNumber>
#include "mainwindow.h"

namespace Ui
{
    class SkyWarnWindow;
}

class SkyWarnWindow : public QWidget
{
    Q_OBJECT

public:
    explicit SkyWarnWindow(QWidget *parent = 0);
    ~SkyWarnWindow();
    void updateAddFreq();
    void updateSubFreq();

private:
    Ui::SkyWarnWindow *ui;

    QLCDNumber     *lcdscreen;
    QPushButton    *upbutton;
    QPushButton    *downbutton;
    QPushButton    *scanbutton;
    QPushButton    *homebutton;

    double skyfreq;


private slots:
    void upbutton_clicked();
    void downbutton_clicked();
    void scanbutton_clicked();
    void homebutton_clicked();

}; //end class SkyWarnWindow

#endif // SKYWARNWINDOW_H
