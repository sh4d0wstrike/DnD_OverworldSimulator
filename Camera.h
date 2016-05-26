//
// Created by daniel on 26.05.16.
//

#ifndef GAME_CAMERA_H
#define GAME_CAMERA_H


#include <SFML/System/Vector2.hpp>
#include "constants.h"

class Camera {
public:
  Camera(int window_size_x, int window_size_y);
  ~Camera();

  void setPosition(sf::Vector2f new_pos);

  sf::Vector2f getPosition();

  void moveCam(sf::Vector2f amount);

  void changeZoom(float amount);

private:

  int window_size_x_;
  int window_size_y_;

  sf::Vector2f cam_pos_;
  float zoom_factor_;


};


#endif //GAME_CAMERA_H
