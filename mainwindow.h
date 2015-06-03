#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QFormLayout;
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

    QFormLayout     *frmLay_;
    LineEditInt     *editInt_;
    LineEditDouble  *editDouble_;
    LineEditString  *editString_;
    LineEditString  *editScientific_;
    LineEditInt     *editIntExclude_;

};

#endif // MAINWINDOW_H
