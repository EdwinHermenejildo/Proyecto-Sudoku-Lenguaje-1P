#-------------------------------------------------
#
# Project created by QtCreator 2013-06-04T13:53:20
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Sudoku
TEMPLATE = app


SOURCES += main.cpp\
        sudoku.cpp \
    vtnfichas.cpp

HEADERS  += sudoku.h \
    vtnfichas.h

FORMS    += sudoku.ui \
    vtnfichas.ui

RESOURCES += \
    img.qrc
