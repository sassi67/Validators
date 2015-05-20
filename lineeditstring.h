/**************************************************************************
** Qt Creator license header template
**   Special keywords: alessandro 20.05.2015 2015
**   Environment variables:
**   To protect a percent sign, use '%'.
**************************************************************************/

#ifndef LINEEDITSTRING_H
#define LINEEDITSTRING_H
#include "lineeditvalidate.h"

class LineEditString : public LineEditValidate
{
public:
    LineEditString(const QRegExp &rx,  QWidget *parent=0);
};

#endif // LINEEDITSTRING_H
