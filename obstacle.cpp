#include "obstacle.h"

Obstacle::Obstacle(): Obstacle{0,0}{}

Obstacle::Obstacle(quint64 x, quint64 y, QObject *parent): QObject{parent}, x{x}, y{y}{}
