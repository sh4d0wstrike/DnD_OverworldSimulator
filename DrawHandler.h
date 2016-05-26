//
// Created by daniel on 26.05.16.
//

#ifndef GAME_DRAWHANDLER_H
#define GAME_DRAWHANDLER_H


#include <SFML/Graphics/RenderWindow.hpp>
#include "Camera.h"

class DrawHandler {
public:
  DrawHandler(int* game_state, Camera* cam);
  ~DrawHandler();

  void setBoard();

  void draw(sf::RenderWindow& window);

private:
  int* game_state_;
  Camera* cam_;
};


#endif //GAME_DRAWHANDLER_H
