//
// Created by fs200 on 2023/2/14.
//

#ifndef TFT_SIMULATOR_EXCEPTIONS_H
#define TFT_SIMULATOR_EXCEPTIONS_H

#include "HelperFunctions.h"

using std::string, std::exception;

class championNotFound : private exception {
public:
    championNotFound()= default;
    ~championNotFound() override = default;
};

class itemNumberExceed : private exception {
public:
    itemNumberExceed()= default;
    ~itemNumberExceed() override = default;
};

class cannotSellUnit : private exception {
public:
    cannotSellUnit()= default;
    ~cannotSellUnit() override = default;
};

class notEnoughGold : private exception {
public:
    notEnoughGold()= default;
    ~notEnoughGold() override = default;
};

#endif //TFT_SIMULATOR_EXCEPTIONS_H
