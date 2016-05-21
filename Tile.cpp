//
// Created by daniel on 21.05.16.
//

#include "Tile.h"

Tile::Tile(int property, sf::IntRect tex_pos) : property_(property), tex_pos_(tex_pos)
{
}

sf::IntRect Tile::getTexPos()
{
  return tex_pos_;
}

int Tile::getProp()
{
  return property_;
}
