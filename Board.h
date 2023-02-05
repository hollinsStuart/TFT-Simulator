//
// Created by fs200 on 2023/1/28.
//

#ifndef TFT_SIMULATOR_BOARD_H
#define TFT_SIMULATOR_BOARD_H

#include "Champion.h"

class Board {
public:
    Champion* Plate[7][4];

    /* initialize the board to be all null pointers */
    Board();



};


#endif //TFT_SIMULATOR_BOARD_H
