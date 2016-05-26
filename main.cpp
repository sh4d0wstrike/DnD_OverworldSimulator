#include <SFML/Graphics.hpp>
#include <iostream>
#include "Tile.h"
#include "EventHandler.h"
#include "constants.h"


void eventLoop(EventHandler &event_handler);
void drawLoop();


sf::RenderWindow* window;

int main()
{
  window = new sf::RenderWindow(sf::VideoMode(400, 400), "ICH BIN NICHT ALLEIN!");

  int GameState = GAMESTATE_MENU;
  sf::Clock main_clock;
  main_clock.restart();
  EventHandler event_handler(&GameState);



  sf::Clock event_timer;
  sf::Event event;
  while(window->isOpen())
  {
    while(window->pollEvent(event))
    {
      if(event.type == sf::Event::Closed)
      {
        window->close();
      }
      else
      {
        event_handler.handleEvent(event, event_timer.getElapsedTime());
      }
    }
    event_timer.restart();

    window->clear();


    window->display();
  }






  std::cout << "<------------------------------------>" << std::endl << "ShutDown" << std::endl << "<------------------------------------>" << std::endl;

  delete window;

  return 0;
}

void eventLoop(EventHandler &event_handler)
{

}

void drawLoop()
{
  sf::Texture testbild;
  testbild.loadFromFile("../Images/testbild.png");

  sf::Sprite sprite;
  sprite.setTexture(testbild);

  while(window->isOpen())
  {
    std::cout << "WHAT?!" << std::endl;
    window->clear(sf::Color::Black);


    window->draw(sprite);

    window->display();
  }
}