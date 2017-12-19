/**
 * EES Praktikum 1
 * main.cpp
 */
#include <QGuiApplication>
#include <QtQuick>

extern "C"
{
//#include "libs/own_lib.h"
}

#include "libs/leds.h"


int main(int argc, char* argv[])
{
    LEDs LED;

    LED.init(argc, argv);

    LED.clear();

    LED.lightGlas(0,255,255,255);
    LED.lightGlas(1,255,255,255);
    LED.lightGlas(2,255,255,255);
    LED.lightGlas(3,255,255,255);

    QGuiApplication app(argc, argv);

    QScopedPointer<QQmlApplicationEngine> engine(new QQmlApplicationEngine);
    qmlRegisterType<LEDs>("LEDs", 1, 0, "LEDs");
    engine->addImportPath(":/");


    engine->load(QUrl("qrc:/main.qml"));

    //LED.close();

    return app.exec();
}
