//
// Created by mido on 5/26/16.
//

#ifndef GAME_CLUSTER_H
#define GAME_CLUSTER_H

#include <SFML/Graphics/RenderWindow.hpp>
#include "Tile.h"

class Cluster {
public:
    Cluster();
    ~Cluster();
    void changeTile(int x, int y,int property, sf::IntRect pos);
    void draw(sf::RenderWindow &window);
private:
  Tile* Tile_array_[10][10];
};


#endif //GAME_CLUSTER_H
