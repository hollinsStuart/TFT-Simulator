//
// Created by fs200 on 2023/1/28.
//

#include "Player.h"

Player::Player() {
    EXP = 0;
    Health = 100;
    MaxLevel = 9;
}

Player::Player(int iHealth, int Maxlevel = 9) {
    EXP = 0;
    Health = iHealth;
    MaxLevel = 9;
}

int Player::getLevel() const {
    if (EXP) {

    }
}

void Player::addEXP(int num = 2) {
    EXP += num;
}

void Player::changeHP(int num) {
    Health += num;
}

/* catch notEnoughGold after this */
void Player::changeGold(int gold) {

}
