/**************************************************************************
**    CFDEM Workbench
**
**    File: validatorintexclude.cpp
**    Author: Alessandro Sacilotto
**    Created on: 2015-06-02
**
**    Copyright (C) 2015 DCS Computing GmbH
**************************************************************************/

#include "validatorintexclude.h"

ValidatorIntExclude::ValidatorIntExclude(int bottom, int top, QObject *parent) :
    Validator(parent),
    bottom_(bottom),
    top_(top),
    validator_(new QIntValidator(bottom, top, parent))
{
}

QValidator::State ValidatorIntExclude::validateThis(QString &s, int &pos) const
{
    if (s.isEmpty() || s == "-" || s == "+")
        return QValidator::Intermediate;

    QLocale locale;
    bool ok;
    int d = locale.toInt(s, &ok);
    if (!ok)
        return QValidator::Invalid;

    // exclude the extremities
    if (d == bottom_ || d == top_)
        return QValidator::Invalid;

    return validator_->validate(s, pos);
}

