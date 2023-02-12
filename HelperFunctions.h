//
// Created by fs200 on 2023/1/29.
//

#ifndef TFT_SIMULATOR_HELPERFUNCTIONS_H
#define TFT_SIMULATOR_HELPERFUNCTIONS_H

#include <vector>
#include <iostream>
#include "Champion.h"
#include "Gear.h"
#include "Synergy.h"
#include "Item.h"
#include "Board.h"
#include "Player.h"

using std::vector, std::cout, std::string;

class ChampionNotFound : private std::exception {
public:
    ChampionNotFound(){};
};

template<class T>
void printVector(vector<T> Vec) {
    for (auto elem : Vec) {
        cout << elem << " ";
    }
}

Champion* findChampion(const string &name, const vector<Champion> &C) {
    for (auto temp : C) {
        if (temp.getName() == name) return &temp;
    }
    throw ChampionNotFound();
    return nullptr;
}


#endif //TFT_SIMULATOR_HELPERFUNCTIONS_H
