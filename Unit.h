//
// Created by fs200 on 2023/2/9.
//

#ifndef TFT_SIMULATOR_UNIT_H
#define TFT_SIMULATOR_UNIT_H

#include <vector>
#include <string>
#include "HelperFunctions.h"

using std::vector, std::string;

class Unit {
public:
    Champion* Champ;
    vector<Item*> Items;
    int Level;
    int itemNum;

    Unit();
    Unit(Champion& Champ);
    ~Unit();    // Only called when selling
    void addItem(Item& item);
    void Swap(Unit &target);
};


#endif //TFT_SIMULATOR_UNIT_H
