######################################################################
# Automatically generated by qmake (3.1) Sun Feb 23 16:45:50 2020
######################################################################

TEMPLATE = app
TARGET = locus
INCLUDEPATH += .
# ../../../Qt/5.14.1/clang_64/lib/QtWidgets.framework/Versions/5/Headers/QApplication
# You can make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# Please consult the documentation of the deprecated API in order to know
# how to port your code away from it.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

# Input
HEADERS += locus.h        \
           ConsoleFrame.h \
           LocusFrame.h   \
           MainWindow.h   \
           StatusClock.h

SOURCES += locus.cpp      \
           ConsoleFrame.cpp \           
           LocusFrame.cpp \           
           MainWindow.cpp \
           main.cpp

QT += core gui widgets
