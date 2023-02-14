//
// Created by fs200 on 2023/1/28.
//

#ifndef TFT_SIMULATOR_PLAYER_H
#define TFT_SIMULATOR_PLAYER_H

#include "HelperFunctions.h"

class Player {
public:
    Board board;
    int Health;
    int Level;
    int MaxUnitNum;

    Player();
    explicit Player(int iHealth);
    ~Player() = default;
};


#endif //TFT_SIMULATOR_PLAYER_H
