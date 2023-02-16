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

/* catch ItemNumberExceed then after this function */
void Unit::addItem(Item* item) {
    if (this->itemNum + item->slotRequired > 6) {
        throw ItemNumberExceed();
    } else if (this->itemNum==5 ) {

    } else if (this->itemNum / 2) {
            // synthesize items
            Items.push_back(item);
    } else {
        // just add
        Items.push_back(item);
    }
}

Unit::~Unit() = default;

/* swap contents in the units */
void Unit::swap(Unit &target) {

}

/* Call when a new champion is bought */
void Unit::assignChamp(Champion *ch) {
    this->Champ = ch;
}

/* catch CannotSellUnit after this */
void Unit::sellUnit() {
    if (this->sellable) {
        // sell and return the items

        this->clear();
    } else {
        throw CannotSellUnit();
    }
}

/* restore initial state */
void Unit::clear() {
    Champ = nullptr;
    Items.clear();
    additionalSynergies.clear();
    Level = 0;
    itemNum = 0;
    sellable = false;
}


