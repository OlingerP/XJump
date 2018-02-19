#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include "gamelevel.h"

int main(int argc, char *argv[])
{
#if defined(Q_OS_WIN)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    qmlRegisterType<Obstacle>("Obstacle", 1,0, "Obstacle");

    engine.rootContext()->setContextProperty("GameLevel", new GameLevel{});

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
