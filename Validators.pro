#-------------------------------------------------
#
# Project created by QtCreator 2015-05-18T19:01:08
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Validators
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    validator.cpp \
    validatordouble.cpp \
    validatorint.cpp \
    validatorstring.cpp \
    lineeditvalidate.cpp \
    lineeditint.cpp \
    lineeditdouble.cpp \
    lineeditstring.cpp \
    validatorintexclude.cpp

HEADERS  += mainwindow.h \
    validator.h \
    validatordouble.h \
    validatorint.h \
    validatorstring.h \
    lineeditvalidate.h \
    lineeditint.h \
    lineeditdouble.h \
    lineeditstring.h \
    validatorintexclude.h

FORMS    += mainwindow.ui
