#include "validatordouble.h"
#include <QDoubleValidator>
//-------------------------------------------------------------------------------------------
ValidatorDouble::ValidatorDouble(double bottom, double top, int decimals, QObject *parent) :
    Validator(parent),
    validator_(new QDoubleValidator(bottom, top, decimals, parent))
{
    validator_->setNotation(QDoubleValidator::StandardNotation);
}
//-------------------------------------------------------------------------------------------
ValidatorDouble::ValidatorDouble(double bottom, double top, int decimals, QDoubleValidator::Notation notation, QObject *parent):
    Validator(parent),
    validator_(new QDoubleValidator(bottom, top, decimals, parent))
{
    validator_->setNotation(notation);
}
//-------------------------------------------------------------------------------------------
QValidator::State ValidatorDouble::validateThis(QString &s, int &pos) const
{
    Q_UNUSED(pos);

    if (s.isEmpty() || s == "-" || s == "+")
        return QValidator::Intermediate;

    QLocale locale;
    bool ok;
    double d = locale.toDouble(s, &ok);
    if (!ok)
        return QValidator::Invalid;

    QChar decimalPoint = locale.decimalPoint();
    bool hasDecimalPoint = (s.indexOf(decimalPoint) != -1);
    if (hasDecimalPoint)
    {
        int charsAfterPoint = s.length() - s.indexOf(decimalPoint) - 1;
        if (charsAfterPoint > validator_->decimals())
            return QValidator::Invalid;
        if (charsAfterPoint == validator_->decimals())
        {
            if (d == 0 && (d < validator_->bottom() || d > validator_->top()))
                return QValidator::Invalid;
        }
    }

    if (d >= validator_->bottom() && d <= validator_->top())
        return QValidator::Acceptable;
    else
        return QValidator::Invalid;
}
