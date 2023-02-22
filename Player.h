//
// Created by fs200 on 2023/1/28.
//

#ifndef TFT_SIMULATOR_PLAYER_H
#define TFT_SIMULATOR_PLAYER_H

#include "HelperFunctions.h"

class Player {
private:
    int EXP;
    int Health;
    int Gold;
public:
    Board board;

    int MaxLevel;
    int MaxUnitNum;


    Player();
    explicit Player(int, int);
    ~Player() = default;
    [[nodiscard]] int getLevel() const;
    void addEXP(int);
    void changeHP(int);
    void changeGold(int);
};


#endif //TFT_SIMULATOR_PLAYER_H
