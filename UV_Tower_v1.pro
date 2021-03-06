
QT       += core gui network
QT += multimedia multimediawidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

TARGET = UV_Tower_v1
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
    main.cpp \
    mainwindow.cpp \
    ping.cpp \
    thread.cpp

HEADERS += \
    mainwindow.h \
    ping.h \
    thread.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    pic.qrc \
    pic.qrc
win32 | win64 {
LIBS     += -lws2_32
LIBS     += -liphlpapi
}
unix:QMAKE_LFLAGS += -no-pie
GST_DEBUG=3
INCLUDEPATH += $$PWD/../lib1-build
DEPENDPATH += $$PWD/../lib1-build
INCLUDEPATH += /usr/lib/x86_64-linux-gnu/

#QMAKE_LFLAGS += -z noexecstack -z relro -z now
#QMAKE_CXX= lld
#INCLUDEPATH +=/home/rohit/mxe/usr/x86_64-pc-linux-gnu/include
win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../usr/local/lib/release/ -lSDL2
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../usr/local/lib/debug/ -lSDL2
else:unix: LIBS += -L$$PWD/../../../usr/local/lib/ -lSDL2


INCLUDEPATH += $$PWD/../../../usr/local/include
DEPENDPATH += $$PWD/../../../usr/local/include

