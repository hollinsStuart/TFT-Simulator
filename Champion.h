//
// Created by fs200 on 2023/1/23.
//

#ifndef TFT_SIMULATOR_CHAMPION_H
#define TFT_SIMULATOR_CHAMPION_H

#include <string>
#include "Gear.h"
#include "Synergy.h"

class Champion {
public:
    [[nodiscard]] std::string getName() const;
    [[nodiscard]] int getCost() const;
    [[nodiscard]] double getAttack() const;
    [[nodiscard]] double getHealth() const;

private:
    friend Gear;
    std::string Name;
    int Cost;
    double Attack;
    double Health;
    double AtkSpeed;
    int CritRate;
    int Range;
    int maxMana;
    int initialMana;
    std::string abilityName;
};


#endif //TFT_SIMULATOR_CHAMPION_H
