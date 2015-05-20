/**************************************************************************
** Qt Creator license header template
**   Special keywords: alessandro 20.05.2015 2015
**   Environment variables:
**   To protect a percent sign, use '%'.
**************************************************************************/

#ifndef LINEEDITDOUBLE_H
#define LINEEDITDOUBLE_H
#include "lineeditvalidate.h"

class LineEditDouble : public LineEditValidate
{
public:
    LineEditDouble(double bottom, double top, int decimals, QWidget *parent=0);
    LineEditDouble(double bottom, double top, int decimals,
                   QDoubleValidator::Notation notation = QDoubleValidator::StandardNotation, QWidget *parent=0);
};

#endif // LINEEDITDOUBLE_H
