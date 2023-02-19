//
// Created by fs200 on 2023/1/28.
//

#ifndef TFT_SIMULATOR_PLAYER_H
#define TFT_SIMULATOR_PLAYER_H

#include "HelperFunctions.h"

class Player {
private:
    int EXP;
public:
    Board board;
    int Health;
    int MaxLevel;
    int MaxUnitNum;

    Player();
    explicit Player(int, int);
    ~Player() = default;
    [[nodiscard]] int getLevel() const;
    void addEXP(int);
};


#endif //TFT_SIMULATOR_PLAYER_H
