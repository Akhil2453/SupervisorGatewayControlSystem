QT += core
QT -= gui

CONFIG += c++11

TARGET = ChatServer
CONFIG += console
CONFIG -= app_bundle

QT += network

TEMPLATE = app

SOURCES += main.cpp \
    chatserver.cpp

HEADERS += \
    chatserver.h
