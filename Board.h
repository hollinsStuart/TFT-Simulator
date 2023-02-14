//
// Created by fs200 on 2023/1/28.
//

#ifndef TFT_SIMULATOR_BOARD_H
#define TFT_SIMULATOR_BOARD_H

#include "HelperFunctions.h"

class Board {
public:
    /* Plate points to contents in unit list */
    Unit* Plate[7][4]{};

    /* initialize the board to be all null pointers */
    Board();
    ~Board() = default;



};


#endif //TFT_SIMULATOR_BOARD_H
