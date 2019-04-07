#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QVector>

struct Bits
{
    int bit0:1;
    int bit1:1;
    int bit2:1;
    int bit3:1;
    int bit4:1;
    int bit5:1;
    int bit6:1;
    int bit7:1;
    int bit8:1;
    int bit9:1;
    int bit10:1;
    int bit11:1;
    int bit12:1;
    int bit13:1;
    int bit14:1;
    int bit15:1;
};

namespace Ui {

class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    void displayButtons();
    void setLineData();

private slots:
    void on_pushButton_calc_clicked();
    void on_pushButton_b0_clicked();
    void on_pushButton_b1_clicked();
    void on_pushButton_b2_clicked();
    void on_pushButton_b3_clicked();
    void on_pushButton_b4_clicked();
    void on_pushButton_b5_clicked();
    void on_pushButton_b6_clicked();
    void on_pushButton_b7_clicked();
    void on_pushButton_b8_clicked();
    void on_pushButton_b9_clicked();
    void on_pushButton_b10_clicked();
    void on_pushButton_b11_clicked();
    void on_pushButton_b12_clicked();
    void on_pushButton_b13_clicked();
    void on_pushButton_b14_clicked();
    void on_pushButton_b15_clicked();

private:
    Ui::MainWindow *ui;
    Bits* bits;
    int data;
};

#endif // MAINWINDOW_H
