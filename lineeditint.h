/**************************************************************************
** Qt Creator license header template
**   Special keywords: alessandro 20.05.2015 2015
**   Environment variables:
**   To protect a percent sign, use '%'.
**************************************************************************/

#ifndef LINEEDITINT_H
#define LINEEDITINT_H
#include "lineeditvalidate.h"

class LineEditInt : public LineEditValidate
{
public:
    LineEditInt(int bottom, int top, QWidget *parent=0);
};

#endif // LINEEDITINT_H
