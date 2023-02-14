//
// Created by fs200 on 2023/1/23.
//

#ifndef TFT_SIMULATOR_GEAR_H
#define TFT_SIMULATOR_GEAR_H

#include "HelperFunctions.h"

using std::string, std::vector;

class Gear {
public:
    [[nodiscard]] string getName() const;

private:
    friend class Champion;
    std::string Name;
    bool is;


};


#endif //TFT_SIMULATOR_GEAR_H
