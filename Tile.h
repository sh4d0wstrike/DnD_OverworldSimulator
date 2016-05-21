//
// Created by daniel on 21.05.16.
//

#ifndef GAME_TILE_H
#define GAME_TILE_H


#include <SFML/Graphics/Rect.hpp>

class Tile {
public:
  Tile(int property, sf::IntRect tex_pos);

  sf::IntRect getTexPos();
  int getProp();

private:
  int property_;
  sf::IntRect tex_pos_;
};


#endif //GAME_TILE_H
