#include "skywarnwindow.h"
#include "fmwindow.h"
#include "ui_skywarnwindow.h"
#include "mainwindow.h"
#include <iostream>
#include <QTimer>

SkyWarnWindow::SkyWarnWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SkyWarnWindow)
{
    ui->setupUi(this);
    skyfreq = 700;

    //QTimer *Addtimer = new QTimer(this);
    //connect(Addtimer, SIGNAL(timeout()), this, SLOT(updateAddFreq()));
    //Addtimer->start();

    //QTimer *Subtimer = new QTimer(this);
    //connect(Subtimer, SIGNAL(timeout()), this, SLOT(updateSubFreq()));
    //Subtimer->start();

    //initiate Home Button to call back home screen.
    homebutton = new QPushButton(this);
    connect(ui->HomeButton, SIGNAL(clicked()), this, SLOT(homebutton_clicked()));

    //initiate up Button to move radio freq up.
    upbutton = new QPushButton(this);
    connect(ui->UpButton, SIGNAL(clicked()), this, SLOT(upbutton_clicked()));

    //initiate up Button to move radio freq down.
    downbutton = new QPushButton(this);
    connect(ui->DownButton, SIGNAL(clicked()), this, SLOT(downbutton_clicked()));

    //initiate scan Button to scan radio freqs.
    scanbutton = new QPushButton(this);
    connect(ui->ScanButton,SIGNAL(clicked()), this, SLOT(scanbutton_clicked()));

    QString freq = QString::number(skyfreq);
    ui->lcdNumber->display(freq);

}

SkyWarnWindow::SkyWarnWindow::~SkyWarnWindow()
{
    delete ui;
}

void SkyWarnWindow::SkyWarnWindow::homebutton_clicked()
{
    std::cout << "home button clicked" << std::endl;
    hide();
    //Talk to Mark about this.
    static MainWindow mainwindow;
    mainwindow.show();
}

void SkyWarnWindow::SkyWarnWindow::upbutton_clicked()
{
    //updateAddFreq();
    std::cout << "Up Button Pressed" << std::endl;
}

void SkyWarnWindow::SkyWarnWindow::downbutton_clicked()
{
    //updateSubFreq();
    std::cout << "Down Button Pressed" << std::endl;
}

void SkyWarnWindow::SkyWarnWindow::scanbutton_clicked()
{
    std::cout << "scan Button Pressed" << std::endl;
}


