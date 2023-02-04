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

Champion::Champion(std::string name, int cost, double attack,
                   double health, double atkSpeed, int range,
                   int maxmana, int initialmana, std::string abilityname) {
    this->Name = name;
    this->Cost = cost;
    this->Health = health;
    this->Attack = attack;
    this->AtkSpeed = atkSpeed;
    this->CritRate = 25;
    this->abilityName = "";

}

std::string Champion::getName() const {
    return this->Name;
}

int Champion::getCost() const {
    return this->Cost;
}

double Champion::getAttack() const {
    return this->Attack;
}

double Champion::getHealth() const {
    return this->Health;
}

double Champion::getAtkSpeed() const {
    return this->AtkSpeed;
}
