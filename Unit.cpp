//
// Created by fs200 on 2023/2/9.
//

#include "Unit.h"

Unit::Unit() {
    Champ = nullptr;
    Items.assign({nullptr, nullptr, nullptr});
    Level = 0;
    itemNum = 0;
}

Unit::Unit(Champion &Champ) {

}

void Unit::addItem(Item& item) {
    if (this->itemNum == 3) {
        throw ItemNumberExceed();
    } else {

    }
}

Unit::~Unit() {

}

/* Swap contents in the units */
void Unit::Swap(Unit &target) {

}


