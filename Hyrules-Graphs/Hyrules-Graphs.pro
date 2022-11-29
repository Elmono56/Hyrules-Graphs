QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    instrucciones.cpp \
    main.cpp \
    mainwindow.cpp \
    mostrarbusqueda.cpp

HEADERS += \
    arco.h \
    ciudad.h \
    contenido.h \
    grafo.h \
    instrucciones.h \
    mainwindow.h \
    mostrarbusqueda.h \
    nodografo.h

FORMS += \
    instrucciones.ui \
    mainwindow.ui \
    mostrarbusqueda.ui

TRANSLATIONS += \
    Hyrules-Graphs_es_CR.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
