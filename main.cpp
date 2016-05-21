#include <SFML/Graphics.hpp>
#include <iostream>
#include "Tile.h"


#define GAMESTATE_MENU        0
#define GAMESTATE_EDITOR      1
#define GAMESTATE_SIMULATION  2

int main()
{
  sf::RenderWindow window(sf::VideoMode(1000, 1000), "ICH BIN!");

  int GameState = GAMESTATE_MENU;



  while (window.isOpen())
  {
    sf::Event event;
    while (window.pollEvent(event))
    {
      switch(GameState){
        case GAMESTATE_MENU:
          break;
        case GAMESTATE_EDITOR:
          break;
        case GAMESTATE_SIMULATION:
          break;
        default:
          break;
      }
      if (event.type == sf::Event::Closed)
        window.close();
    }
    window.clear();
    switch(GameState){
      case GAMESTATE_MENU:
        break;
      case GAMESTATE_EDITOR:
        break;
      case GAMESTATE_SIMULATION:
        break;
      default:
        break;
    }

    window.display();
  }

  return 0;
}


