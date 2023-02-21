//
// Created by fs200 on 2023/2/20.
//

#ifndef TFT_SIMULATOR_TIER_1_H
#define TFT_SIMULATOR_TIER_1_H

#include "HelperFunctions.h"

class Renekton: public Champion {
public:
    string getName() override;
private:
    const string Name = "Renekton";
    const int Cost = 1;
    const double Attack;
    const double Health;
    const double AtkSpeed;
    const int CritRate;
    int Range = 1;
    const int maxMana;
    const int initialMana;
    const double AbilityPower;
    const string abilityName = "Dominus";
    const vector<Synergy*> Synergies = {};
};


#endif //TFT_SIMULATOR_TIER_1_H
