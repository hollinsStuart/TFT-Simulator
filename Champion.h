//
// Created by fs200 on 2023/1/23.
//

#ifndef TFT_SIMULATOR_CHAMPION_H
#define TFT_SIMULATOR_CHAMPION_H

#include <string>
#include <iostream>
#include <fstream>
#include "Gear.h"
#include "Item.h"
#include "Synergy.h"

using std::ostream, std::vector, std::string;

class Champion {
public:
    Champion();
    Champion(string Name, int Cost, double Attack, double Health,
            double AtkSpeed, int Range, int maxMana,
            int initialMana, const string &abilityName);
    [[nodiscard]] string getName() const;
    [[nodiscard]] int getCost() const;
    [[nodiscard]] double getAttack() const;
    [[nodiscard]] double getHealth() const;
    [[nodiscard]] double getAtkSpeed() const;
    [[nodiscard]] int getCritRate() const;
    [[nodiscard]] int getRange() const;
    [[nodiscard]] int getMaxmana() const;
    [[nodiscard]] int getInitmana() const;
    [[nodiscard]] double getAbilityPower() const;
    ostream& operator<<(ostream &os, const Champion &ch);



private:
    friend class Gear;
    friend class Item;
    friend ostream& operator<<(ostream&, const Champion&);

    string Name;
    int Cost;
    double Attack;
    double Health;
    double AtkSpeed;
    int CritRate;
    int Range;
    int maxMana;
    int initialMana;
    double AbilityPower;
    string abilityName;
    vector<Item*> Items;

};


#endif //TFT_SIMULATOR_CHAMPION_H
