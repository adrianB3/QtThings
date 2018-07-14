#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_btnAstroid_clicked();

    void on_btnCycloid_clicked();

    void on_btnHuygensCycloid_clicked();

    void on_btnHypoCycloid_clicked();

    void on_btnLine_clicked();

    void on_scaleSpin_valueChanged(double scale);

    void on_lengthSpin_valueChanged(double length);

    void on_countSpin_valueChanged(int count);

private:
    void update_ui();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
