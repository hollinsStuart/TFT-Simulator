//
// Created by fs200 on 2023/1/29.
//

#ifndef TFT_SIMULATOR_HELPER_FUNCTIONS_H
#define TFT_SIMULATOR_HELPER_FUNCTIONS_H

#include <vector>
#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include "Champion.h"
#include "Gear.h"
#include "Synergy.h"
#include "Item.h"
#include "Board.h"
#include "Player.h"
#include "Game.h"
#include "Unit.h"
#include "Exceptions.h"

using std::vector, std::cout, std::string, std::exception;

template<class T>
void printVector(vector<T> Vec) {
    for (auto elem : Vec) {
        cout << elem << " ";
    }
} const

Champion* findChampion(const string &name, const vector<Champion> *C) {
    for (const auto& temp : *C) {
        if (temp.getName() == name) return &temp;
    }
    throw ChampionNotFound();
}

#endif //TFT_SIMULATOR_HELPER_FUNCTIONS_H
