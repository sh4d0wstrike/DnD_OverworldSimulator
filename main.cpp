#include <SFML/Graphics.hpp>
#include <iostream>
#include "Tile.h"
#include "EventHandler.h"
#include "constants.h"

int main()
{
  sf::RenderWindow window(sf::VideoMode(400, 400), "ICH BIN NICHT ALLEIN!");

  int GameState = GAMESTATE_MENU;
  sf::Clock main_clock;
  main_clock.restart();
  EventHandler test(&GameState);

  sf::Texture testbild;
  testbild.loadFromFile("../Images/testbild.png");

  sf::Sprite sprite;
  sprite.setTexture(testbild);


  while (window.isOpen())
  {
    double elapsedTime = main_clock.getElapsedTime().asSeconds();
    sf::Event event;

    while (window.pollEvent(event))
    {
      if (event.type == sf::Event::Closed)
        window.close();
      test.handleEvent(event, main_clock.getElapsedTime());
    }

    window.clear();
    window.draw(sprite);


    window.display();
    main_clock.restart();
  }

  return 0;
}

void eventLoop(EventHandler &event_handler, sf::RenderWindow &window)
{
  sf::Clock event_timer;
  sf::Event event;
  while(window.isOpen())
  {
    while(window.pollEvent(event))
    {
      event_handler.handleEvent(event, event_timer.getElapsedTime());
    }
    event_timer.restart();
  }
}

void drawLoop(sf::RenderWindow &window)
{
  while(window.isOpen())
  {
    window.clear(sf::Color::Black);
    //DrawManager.draw
    window.display();
  }
}