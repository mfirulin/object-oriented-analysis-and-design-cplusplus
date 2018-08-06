TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    guitarspec.cpp \
    guitar.cpp \
    inventory.cpp

HEADERS += \
    builder.h \
    type.h \
    wood.h \
    guitarspec.h \
    guitar.h \
    inventory.h
