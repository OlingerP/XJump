#include "gamelevel.h"

GameLevel::GameLevel(){
    for(unsigned int i = 0; i < 10; ++i){
        m_obstacles.append(new Obstacle{qrand()%100 , qrand()%100});
    }
}

QQmlListProperty<Obstacle> GameLevel::obstacles(){
    return QQmlListProperty<Obstacle>{this, this,
                                       &GameLevel::countObstacles,
                                       &GameLevel::obstacle};
}

int GameLevel::obstaclesCount() const{
    return m_obstacles.size();
}

Obstacle *GameLevel::getObstacle(int index) const{
    return m_obstacles.at(index);
}

int GameLevel::countObstacles(QQmlListProperty<Obstacle>* list){
    return reinterpret_cast< GameLevel* >(list->data)->obstaclesCount();
}

Obstacle *GameLevel::obstacle(QQmlListProperty<Obstacle> *list, int index){
    return reinterpret_cast< GameLevel* >(list->data)->getObstacle(index);
}
