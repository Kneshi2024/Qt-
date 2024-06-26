QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    tdialog.cpp \
    tdialogheaders.cpp \
    tdialoglocate.cpp \
    tformdoc.cpp \
    trormtable.cpp

HEADERS += \
    mainwindow.h \
    tdialog.h \
    tdialogheaders.h \
    tdialoglocate.h \
    tformdoc.h \
    trormtable.h

FORMS += \
    mainwindow.ui \
    tdialog.ui \
    tdialogheaders.ui \
    tdialoglocate.ui \
    tformdoc.ui \
    trormtable.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc
