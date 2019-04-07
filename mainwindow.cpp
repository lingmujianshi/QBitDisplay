#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit_code->setText("0");
    data = ui->lineEdit_code->text().toInt();
    bits = reinterpret_cast<struct Bits *>(&data);
    qDebug() << data;
    displayButtons();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::displayButtons()
{
    ui->pushButton_b0->setDefault(bits->bit0);
    ui->pushButton_b1->setDefault(bits->bit1);
    ui->pushButton_b2->setDefault(bits->bit2);
    ui->pushButton_b3->setDefault(bits->bit3);
    ui->pushButton_b4->setDefault(bits->bit4);
    ui->pushButton_b5->setDefault(bits->bit5);
    ui->pushButton_b6->setDefault(bits->bit6);
    ui->pushButton_b7->setDefault(bits->bit7);
    ui->pushButton_b8->setDefault(bits->bit8);
    ui->pushButton_b9->setDefault(bits->bit9);
    ui->pushButton_b10->setDefault(bits->bit10);
    ui->pushButton_b11->setDefault(bits->bit11);
    ui->pushButton_b12->setDefault(bits->bit12);
    ui->pushButton_b13->setDefault(bits->bit13);
    ui->pushButton_b14->setDefault(bits->bit14);
    ui->pushButton_b15->setDefault(bits->bit15);
}

void MainWindow::on_pushButton_calc_clicked()
{
    qDebug() << "on_pushButton_calc_clicked";
    data = ui->lineEdit_code->text().toInt();
    qDebug() << QString::number(data);
    displayButtons();
}

void MainWindow::setLineData()
{
    qDebug() << data;
    ui->lineEdit_code->setText(QString::number(data));
}

void MainWindow::on_pushButton_b0_clicked()
{
    bits->bit0 = ~bits->bit0;
    setLineData();
    displayButtons();
}

void MainWindow::on_pushButton_b1_clicked()
{
    bits->bit1 = ~bits->bit1;
    setLineData();
    displayButtons();
}

void MainWindow::on_pushButton_b2_clicked()
{
    bits->bit2 = ~bits->bit2;
    setLineData();
    displayButtons();
}

void MainWindow::on_pushButton_b3_clicked()
{
    bits->bit3 = ~bits->bit3;
    setLineData();
    displayButtons();
}

void MainWindow::on_pushButton_b4_clicked()
{
    bits->bit4 = ~bits->bit4;
    setLineData();
    displayButtons();
}

void MainWindow::on_pushButton_b5_clicked()
{
    bits->bit5 = ~bits->bit5;
    setLineData();
    displayButtons();
}

void MainWindow::on_pushButton_b6_clicked()
{
    bits->bit6 = ~bits->bit6;
    setLineData();
    displayButtons();
}

void MainWindow::on_pushButton_b7_clicked()
{
    bits->bit7 = ~bits->bit7;
    setLineData();
    displayButtons();
}

void MainWindow::on_pushButton_b8_clicked()
{
    bits->bit8 = ~bits->bit8;
    setLineData();
    displayButtons();
}

void MainWindow::on_pushButton_b9_clicked()
{
    bits->bit9 = ~bits->bit9;
    setLineData();
    displayButtons();
}

void MainWindow::on_pushButton_b10_clicked()
{
    bits->bit10 = ~bits->bit10;
    setLineData();
    displayButtons();
}

void MainWindow::on_pushButton_b11_clicked()
{
    bits->bit11 = ~bits->bit11;
    setLineData();
    displayButtons();
}

void MainWindow::on_pushButton_b12_clicked()
{
    bits->bit12 = ~bits->bit12;
    setLineData();
    displayButtons();
}

void MainWindow::on_pushButton_b13_clicked()
{
    bits->bit13 = ~bits->bit13;
    setLineData();
    displayButtons();
}

void MainWindow::on_pushButton_b14_clicked()
{
    bits->bit14 = ~bits->bit14;
    setLineData();
    displayButtons();
}

void MainWindow::on_pushButton_b15_clicked()
{
    bits->bit15 = ~bits->bit15;
    setLineData();
    displayButtons();
}
