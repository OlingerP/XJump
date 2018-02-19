#ifndef GAMELEVEL_H
#define GAMELEVEL_H

#include <QObject>
#include <QList>
#include <QVector>
#include <QQmlListProperty>

#include "obstacle.h"

class GameLevel : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QQmlListProperty<Obstacle> obstacles READ obstacles)
public:
    GameLevel();

    QQmlListProperty<Obstacle> obstacles();

    int obstaclesCount()const;
    Obstacle* getObstacle(int index) const;

private:
    QVector<Obstacle*> m_obstacles;

    static int countObstacles(QQmlListProperty<Obstacle> *list);
    static Obstacle* obstacle(QQmlListProperty<Obstacle> *list, int index);

signals:
    void obstaclesChanged();
};

#endif // GAMELEVEL_H
