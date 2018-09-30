#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //sopeltronics logo
    QPixmap sopel = QPixmap("/home/dev/RadioGui/resources/sopel.png");
    //sopel = sopel.scaled(size-5, size-5, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    ui->sopel->setPixmap(sopel);

    //I need to figure out why it only likes hard coded links....
    //Setting up FM Radio Icon
    QPixmap fmicon("/home/dev/RadioGui/resources/radio.png");
    QIcon fmIcon(fmicon);
    ui->fmradio->setIcon(fmIcon);

    //Setting up Skywarn Icon
    QPixmap skyicon("/home/dev/RadioGui/resources/skywarn.png");
    QIcon   skyIcon(skyicon);
    ui->Skywarn->setIcon(skyIcon);

    //Setting up Ham Radio
    QPixmap hamradio("/home/dev/RadioGui/resources/HAMRadio.png");
    QIcon   hamRadio(hamradio);
    ui->hamradio->setIcon(hamRadio);

    //Setting up Police Icon
    QPixmap police("/home/dev/RadioGui/resources/POLICE.png");
    QIcon   Police(police);
    ui->Police->setIcon(police);

    //Connect the FMRadio button with the fmbutton_clicked() function.
    fmbutton = new QPushButton(this);
    connect(ui->fmradio, SIGNAL(clicked()), this, SLOT(fmbutton_clicked()));

    //Connect the Skywarn button with the skywarnbutton_clicked function.
    skywarnbutton = new QPushButton(this);
    connect(ui->Skywarn, SIGNAL(clicked()), this, SLOT(skywarnbutton_clicked()));

    //Connect the Ham button with the hambutton_clicked function.
    hambutton = new QPushButton(this);
    connect(ui->hamradio, SIGNAL(clicked()), this, SLOT(hambutton_clicked()));

    //Connect the Police button with the policebutton_clicked function.
    policebutton = new QPushButton(this);
    connect(ui->Police, SIGNAL(clicked()), this, SLOT(policebutton_clicked()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::fmbutton_clicked()
{
    std::cout << "FM Window" << std::endl;
}

void MainWindow::skywarnbutton_clicked()
{
    std::cout << "SkyWarn Window" << std::endl;
}

void MainWindow::hambutton_clicked()
{
    std::cout << "Ham Window" << std::endl;
}

void MainWindow::policebutton_clicked()
{
    std::cout << "Police Window" << std::endl;
}
