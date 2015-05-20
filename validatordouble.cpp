#include "validatordouble.h"

#include <QDoubleValidator>

ValidatorDouble::ValidatorDouble(double bottom, double top, int decimals, QObject *parent) :
    Validator(parent),
    validator_(new QDoubleValidator(bottom, top, decimals, parent))
{
}

QValidator::State ValidatorDouble::validateThis(QString &s, int &pos) const
{
    return validator_->validate(s, pos);
}
