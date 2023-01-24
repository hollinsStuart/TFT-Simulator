//
// Created by fs200 on 2023/1/23.
//

#include "Champion.h"

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
