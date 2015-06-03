/**************************************************************************
**    CFDEM Workbench
**
**    File: validatorintexclude.h
**    Author: Alessandro Sacilotto
**    Created on: 2015-06-02
**
**    Copyright (C) 2015 DCS Computing GmbH
**************************************************************************/

#ifndef VALIDATORINTEXCLUDE_H
#define VALIDATORINTEXCLUDE_H
#include "validator.h"

class QIntValidator;

class ValidatorIntExclude : public Validator
{
    Q_OBJECT
public:
    ValidatorIntExclude(int bottom, int top, QObject *parent=0);
protected:
    virtual QValidator::State validateThis(QString &s, int &pos) const;

private:
    //Pre C++2011 hide by making private and don't implement
    explicit ValidatorIntExclude(const ValidatorIntExclude& rhs);
    ValidatorIntExclude& operator= (const ValidatorIntExclude& rhs);

    int bottom_;
    int top_;
    QIntValidator *validator_;

signals:

public slots:

private slots:

};
#endif // VALIDATORINTEXCLUDE_H



