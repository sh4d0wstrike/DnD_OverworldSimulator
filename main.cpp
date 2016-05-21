#include <SFML/Graphics.hpp>
#include <iostream>
#include "Tile.h"
#include "EventHandler.h"


#define GAMESTATE_MENU        0
#define GAMESTATE_EDITOR      1
#define GAMESTATE_SIMULATION  2

int main()
{
  sf::RenderWindow window(sf::VideoMode(400, 400), "ICH BIN!");

  int GameState = GAMESTATE_MENU;
  sf::Clock main_clock;
  main_clock.restart();
  EventHandler test(&GameState);


  while (window.isOpen())
  {
    double elapsedTime = main_clock.getElapsedTime().asSeconds();
    sf::Event event;

    while (window.pollEvent(event))
    {
      if (event.type == sf::Event::Closed)
        window.close();
      test.handleEvent(event);
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
    main_clock.restart();
  }

  return 0;
}


