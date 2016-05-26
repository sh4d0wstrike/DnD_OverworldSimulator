//
// Created by mido on 5/26/16.
//

#ifndef GAME_BOARD_H
#define GAME_BOARD_H

#include "constants.h"

class Board {
public:
    Board();
    ~Board();
private:
    int cluster_counter_;
    sf::Vector2u boardsize_;
};


#endif //GAME_BOARD_H
