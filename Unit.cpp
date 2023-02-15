//
// Created by fs200 on 2023/2/9.
//

#include "Unit.h"

Unit::Unit() {
    Champ = nullptr;
    Items.reserve(6);
}

Unit::Unit(Champion *Champ) {

}

/* catch ItemNumberExceed after this function */
void Unit::addItem(Item* item) {
    if (this->itemNum == 6) {
        throw ItemNumberExceed();
    } else if (this->itemNum / 2) {
        // synthesize items
        Items.push_back(item);
    } else {
        // just add
        Items.push_back(item);
    }
}

Unit::~Unit() = default;

/* Swap contents in the units */
void Unit::Swap(Unit &target) {

}

/* Call when a new champion is bought */
void Unit::assignChamp(Champion *ch) {
    this->Champ = ch;
}


