#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->ui->scaleSpin->setValue(this->ui->renderArea->scale());
    this->ui->lengthSpin->setValue(this->ui->renderArea->intervalLength());
    this->ui->countSpin->setValue(this->ui->renderArea->stepCount());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::update_ui()
{
    this->ui->scaleSpin->setValue(this->ui->renderArea->scale());
    this->ui->lengthSpin->setValue(this->ui->renderArea->intervalLength());
    this->ui->countSpin->setValue(this->ui->renderArea->stepCount());
}

void MainWindow::on_btnAstroid_clicked()
{
    this->ui->renderArea->setShape(RenderArea::Astroid);
    this->ui->renderArea->repaint();
    update_ui();
}

void MainWindow::on_btnCycloid_clicked()
{
    this->ui->renderArea->setShape(RenderArea::Cycloid);
    this->ui->renderArea->repaint();
    update_ui();
}

void MainWindow::on_btnHuygensCycloid_clicked()
{
    this->ui->renderArea->setShape(RenderArea::HuygensCycloid);
    this->ui->renderArea->repaint();
    update_ui();
}

void MainWindow::on_btnHypoCycloid_clicked()
{
    this->ui->renderArea->setShape(RenderArea::HypoCycloid);
    this->ui->renderArea->repaint();
    update_ui();
}

void MainWindow::on_btnLine_clicked()
{
    this->ui->renderArea->setShape(RenderArea::Line);
    this->ui->renderArea->repaint();
    update_ui();
}

void MainWindow::on_scaleSpin_valueChanged(double scale)
{
    this->ui->renderArea->setScale (scale);
}

void MainWindow::on_lengthSpin_valueChanged(double length)
{
    this->ui->renderArea->setIntervalLength(length);
}

void MainWindow::on_countSpin_valueChanged(int count)
{
    this->ui->renderArea->setStepCount(count);
}
