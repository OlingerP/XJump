#ifndef OBSTACLE_H
#define OBSTACLE_H

#include <QObject>

class Obstacle : public QObject
{
    Q_OBJECT
    Q_PROPERTY(quint64 x MEMBER x NOTIFY xChanged)
public:
    Obstacle();
    Obstacle(quint64 x, quint64 y, QObject* parent = Q_NULLPTR);

private:
    quint64 x;
    quint64 y;

signals:
    void xChanged();
};

#endif // OBSTACLE_H
