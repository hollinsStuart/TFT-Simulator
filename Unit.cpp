//
// Created by fs200 on 2023/2/9.
//

#include "Unit.h"

Unit::Unit() {
    Champ = nullptr;
    Items.reserve(6);
    sellable = false;
}

Unit::Unit(Champion *Champ, bool sell, int iNum) {
    Champ = nullptr;
    Items.reserve(6);
    sellable = sell;
    itemNum = iNum;
}

Unit::Unit(const Unit &u) {
    this->Champ = u.Champ;
    this->Items = u.Items;
    this->additionalSynergies = u.additionalSynergies;
    this->Level = u.Level;
    this->itemNum = u.itemNum;
    this->sellable = u.sellable;
}

/* catch itemNumberExceed then after this function */
void Unit::addItem(Item* item) {
    if (this->itemNum + item->slotRequired > 6) {
        throw itemNumberExceed();
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
    // TODO: deal with sellable
    this->Champ = ch;
}

/* catch cannotSellUnit after this */
void Unit::sellUnit(Player& player) {
    if (this->sellable) {
        // sell and return the items
        switch (this->Level) {
            case 0:

                break;
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            default:

        }
        this->clear();
    } else {
        throw cannotSellUnit();
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


