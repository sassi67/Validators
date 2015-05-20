#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QValidator>

class QLineEdit;
class QDoubleValidator;
class ValidatorDouble;
class Validator;
class QVBoxLayout;


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

    QVBoxLayout *lay_;
    QLineEdit      *editInt_;
    QLineEdit      *editDouble_;
    QLineEdit      *editString_;
    Validator       *validatorInt_;
    Validator       *validatorDouble_;
    Validator       *validatorString_;

private slots:
    void onStateChanged(QValidator::State s);
};

#endif // MAINWINDOW_H
