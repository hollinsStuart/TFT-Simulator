//
// Created by fs200 on 2023/2/9.
//

#ifndef TFT_SIMULATOR_UNIT_H
#define TFT_SIMULATOR_UNIT_H

#include "HelperFunctions.h"

using std::vector, std::string;

class Unit {
public:
    Champion* Champ{};
    vector<Item*> Items;
    vector<Synergy*> additionalSynergies;
    int Level{};
    int itemNum{};
    bool sellable;

    Unit();
    explicit Unit(Champion *Champ);
    ~Unit();
    void addItem(Item* item);
    void swap(Unit &target);
    void assignChamp(Champion *ch);
    void sellUnit();
    void clear();

};


#endif //TFT_SIMULATOR_UNIT_H
