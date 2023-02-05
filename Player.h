//
// Created by fs200 on 2023/1/28.
//

#ifndef TFT_SIMULATOR_PLAYER_H
#define TFT_SIMULATOR_PLAYER_H

#include "Board.h"

class Player {
public:
    Board board;
    int Health;


    Player();
    Player(int iHealth);
};


#endif //TFT_SIMULATOR_PLAYER_H
