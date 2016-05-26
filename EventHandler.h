//
// Created by daniel on 21.05.16.
//

#ifndef GAME_EVENTHANDLER_H
#define GAME_EVENTHANDLER_H


#include <iostream>
#include <SFML/Window/Event.hpp>
#include <SFML/System/Time.hpp>
#include "constants.h"

class EventHandler {
public:
  EventHandler(int* game_state);

  bool changeState(int new_state);

  int handleEvent(sf::Event event, sf::Time delta_time);


private:
  int* game_state_;
};


#endif //GAME_EVENTHANDLER_H
