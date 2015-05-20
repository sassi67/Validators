/**************************************************************************
** Qt Creator license header template
**   Special keywords: alessandro 20.05.2015 2015
**   Environment variables:
**   To protect a percent sign, use '%'.
**************************************************************************/

#ifndef LINEEDITVALIDATE_H
#define LINEEDITVALIDATE_H

#include <QLineEdit>
#include <QValidator>

class Validator;

class LineEditValidate : public QLineEdit
{
    Q_OBJECT
public:
    explicit LineEditValidate(QWidget *parent = 0);

protected:
    Validator *validator_;
private:

signals:

protected slots:
    virtual void onStateChanged(QValidator::State s);
};

#endif // LINEEDITVALIDATE_H
