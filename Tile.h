//
// Created by daniel on 21.05.16.
//

#ifndef GAME_TILE_H
#define GAME_TILE_H


#include <SFML/Graphics/Rect.hpp>
#include "constants.h"

class Tile {
public:
  Tile(sf::IntRect tex_pos = GRASS , int property = 0);

  sf::IntRect getTexPos();
  int getProp();
  void setProp(int prop);
  void setTexPos(sf::IntRect pos);

private:
  int property_;
  sf::IntRect tex_pos_;
};


#endif //GAME_TILE_H
