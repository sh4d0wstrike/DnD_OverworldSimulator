//
// Created by daniel on 21.05.16.
//

#ifndef GAME_EVENTHANDLER_H
#define GAME_EVENTHANDLER_H

#define GAMESTATE_MENU        0
#define GAMESTATE_EDITOR      1
#define GAMESTATE_SIMULATION  2

#include <iostream>
#include <SFML/Window/Event.hpp>

class EventHandler {
public:
  EventHandler(int* game_state);

  bool changeState(int new_state);

  int handleEvent(sf::Event event);


private:
  int* game_state_;
};


#endif //GAME_EVENTHANDLER_H
