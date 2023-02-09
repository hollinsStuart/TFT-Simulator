//
// Created by fs200 on 2023/2/9.
//

#ifndef TFT_SIMULATOR_UNIT_H
#define TFT_SIMULATOR_UNIT_H

#include <vector>
#include <string>
#include "Champion.h"
#include "Item.h"

using std::vector, std::string;

class Unit {
    Champion* Champ;
    vector<Item*> Items;

    Unit();
    void Swap(Unit &target);
};


#endif //TFT_SIMULATOR_UNIT_H
