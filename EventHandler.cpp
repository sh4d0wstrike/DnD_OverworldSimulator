//
// Created by daniel on 21.05.16.
//



#include "EventHandler.h"

EventHandler::EventHandler(int* game_state) : game_state_(game_state)
{

}

bool EventHandler::changeState(int new_state)
{
  *game_state_ = new_state;
  return true;
}

int EventHandler::handleEvent(sf::Event event, sf::Time delta_time)
{
  switch(*game_state_)
  {
      //----------------------------------------------------------------------------------------------------------------
    case GAMESTATE_MENU:
      if(event.type == sf::Event::KeyPressed)
      {
        if(event.key.code == sf::Keyboard::E && event.key.shift)
        {
          std::cout << "Change State to Editor" << std::endl;
          changeState(GAMESTATE_EDITOR);
          std::cout << "GameState = " << *game_state_ << std::endl;
        }
        else if(event.key.code == sf::Keyboard::S && event.key.shift)
        {
          std::cout << "Change State to Simulation" << std::endl;
          changeState(GAMESTATE_SIMULATION);
          std::cout << "GameState = " << *game_state_ << std::endl;
        }

      }
      break;
      //----------------------------------------------------------------------------------------------------------------
    case GAMESTATE_EDITOR:
      if(event.type == sf::Event::KeyPressed)
      {
        if(event.key.code == sf::Keyboard::Escape)
        {
          std::cout << "Change State to Menu" << std::endl;
          changeState(GAMESTATE_MENU);
          std::cout << "GameState = " << *game_state_ << std::endl;
        }
      }
      break;
      //----------------------------------------------------------------------------------------------------------------
    case GAMESTATE_SIMULATION:
      if(event.type == sf::Event::KeyPressed)
      {
        if(event.key.code == sf::Keyboard::Escape)
        {
          std::cout << "Change State to Menu" << std::endl;
          changeState(GAMESTATE_MENU);
          std::cout << "GameState = " << *game_state_ << std::endl;
        }
      }

      break;
      //----------------------------------------------------------------------------------------------------------------
    default:
      break;
  }
  return 0;
}
