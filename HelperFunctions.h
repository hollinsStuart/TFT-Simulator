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

template<class T>
void printVector(std::vector<T> Vec) {
    for (auto elem : Vec) {
        std::cout << elem << " ";
    }
}


#endif //TFT_SIMULATOR_HELPERFUNCTIONS_H
