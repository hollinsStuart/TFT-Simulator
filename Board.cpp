//
// Created by fs200 on 2023/1/28.
//

#include "Board.h"

Board::Board() {
    for (auto & i : this->Plate) {
        for (auto & j : i) {
            j = nullptr;
        }   // hopefully these code would work
    }
}

