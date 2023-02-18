//
// Created by fs200 on 2023/1/23.
//

#include "Champion.h"

Champion::Champion() {
    this->Name = "";
    this->Cost = 0;
    this->Health = 0;
    this->Attack = 0;
    this->AtkSpeed = 5;
    this->CritRate = 25;
    this->abilityName = "";
}

Champion::Champion(string name, int cost, double attack,
                   double health, double atkSpeed, int range,
                   int maxmana, int initialmana, const string &abilityname) {
    this->Name = name;
    this->Cost = cost;
    this->Health = health;
    this->Attack = attack;
    this->AtkSpeed = atkSpeed;
    this->CritRate = 25;
    this->abilityName = "";

}

string Champion::getName() const {return this->Name;}

int Champion::getCost() const {return this->Cost;}

double Champion::getAttack() const {return this->Attack;}

double Champion::getHealth() const {return this->Health;}

double Champion::getAtkSpeed() const {return this->AtkSpeed;}

int Champion::getCritRate() const {return this->CritRate;}

int Champion::getRange() const {return Range;}

int Champion::getMaxmana() const {return maxMana;}

int Champion::getInitmana() const {return initialMana;}

double Champion::getAbilityPower() const {return AbilityPower;}

ostream &operator<<(ostream &os, const Champion &ch) {
    cout << "Champion: " << ch.Name << "\n"
        << "Cost  " << ch.Cost << "Health: " << ch.Health;

    return os;
}

