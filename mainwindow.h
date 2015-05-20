#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QVBoxLayout;
class LineEditInt;
class LineEditDouble;
class LineEditString;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    QVBoxLayout     *lay_;
    LineEditInt     *editInt_;
    LineEditDouble  *editDouble_;
    LineEditString  *editString_;

};

#endif // MAINWINDOW_H
