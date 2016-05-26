//
// Created by daniel on 26.05.16.
//

#include "Camera.h"


Camera::Camera(int window_size_x, int window_size_y) : window_size_x_(window_size_x), window_size_y_(window_size_y),
                                                       cam_pos_(0,0), zoom_factor_(0)
{

}


Camera::~Camera()
{

}


void Camera::setPosition(sf::Vector2f new_pos)
{
  cam_pos_ = new_pos;
}

sf::Vector2f Camera::getPosition()
{
  return cam_pos_;
}

void Camera::moveCam(sf::Vector2f amount)
{
  cam_pos_ += amount;
}

void Camera::changeZoom(float amount)
{
  zoom_factor_ += amount;
}

