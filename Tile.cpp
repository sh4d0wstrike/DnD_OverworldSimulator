//
// Created by daniel on 21.05.16.
//

#include "Tile.h"

Tile::Tile(sf::IntRect tex_pos , int property) :  tex_pos_(tex_pos) , property_(property)
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

void Tile::setProp(int prop)
{
  property_ = prop;
}

void Tile::setTexPos(sf::IntRect pos)
{
  tex_pos_ = pos;
}