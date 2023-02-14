//
// Created by fs200 on 2023/2/14.
//

#ifndef TFT_SIMULATOR_EXCEPTIONS_H
#define TFT_SIMULATOR_EXCEPTIONS_H

#include "HelperFunctions.h"

using std::string, std::exception;

class ChampionNotFound : private exception {
public:
    ChampionNotFound()= default;
    ~ChampionNotFound() override = default;
};

class ItemNumberExceed : private exception {
public:
    ItemNumberExceed()= default;
    ~ItemNumberExceed() override = default;
};

#endif //TFT_SIMULATOR_EXCEPTIONS_H
