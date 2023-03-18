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
    bool sellable{};

    Unit();
    explicit Unit(Champion *Champ, bool sell = false, int iNum = 0);
    Unit(const Unit& u);
    ~Unit();
    void addItem(Item* item);
    void swap(Unit &target);
    void assignChamp(Champion *ch);
    void sellUnit(Player&);

private:
    void clear();

};

/* swap u1 and u2 */
void swap(Unit &u1, Unit &u2);



#endif //TFT_SIMULATOR_UNIT_H
