//
// Created by fs200 on 2023/1/23.
//

#ifndef TFT_SIMULATOR_GEAR_H
#define TFT_SIMULATOR_GEAR_H

#include "Champion.h"
#include <string>

class Gear {
public:
    std::string getName();

private:
    friend Champion;
    std::string Name;
    bool is;


};


#endif //TFT_SIMULATOR_GEAR_H
