//
// Created by daniel on 26.05.16.
//

#ifndef GAME_CONSTANTS_H
#define GAME_CONSTANTS_H

#include <SFML/System.hpp>
#include <SFML/Graphics/RectangleShape.hpp>

#define GAMESTATE_MENU        0
#define GAMESTATE_EDITOR      1
#define GAMESTATE_SIMULATION  2


#define TILE_PIXEL_SIZE       16

const sf::IntRect GRASS (3,8,TILE_PIXEL_SIZE,TILE_PIXEL_SIZE);
const sf::IntRect STONE (16,0,TILE_PIXEL_SIZE,TILE_PIXEL_SIZE);


#endif //GAME_CONSTANTS_H
