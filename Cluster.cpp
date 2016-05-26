//
// Created by mido on 5/26/16.
//

#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Texture.hpp>
#include "Cluster.h"
#include "constants.h"

Cluster::Cluster()
{
    for (int x=0;x<10;x++)
    {
        for(int y=0;y<10;y++)
        {
            Tile_array_[x][y] = new Tile();
        }
    }
}

Cluster::~Cluster()
{

}

void Cluster::changeTile(int x, int y,int property,sf::IntRect pos)
{
 Tile_array_[x][y]->setProp(property);
 Tile_array_[x][y]->setTexPos(pos);
}

void Cluster::draw(sf::RenderWindow &window)
{
    sf::Sprite sprite;

    sf::Texture testbild;
    testbild.loadFromFile("../Images/testbild.png");
    sprite.setTexture(testbild);

    for (int x=0;x<10;x++)
    {
        for(int y=0;y<10;y++)
        {
            sprite.setTextureRect(Tile_array_[x][y]->getTexPos());
            sprite.setPosition(x*TILE_PIXEL_SIZE,y*TILE_PIXEL_SIZE);
            window.draw(sprite);
        }
    }

}