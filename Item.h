//
// Created by fs200 on 2023/1/24.
//

#ifndef TFT_SIMULATOR_ITEM_H
#define TFT_SIMULATOR_ITEM_H

#include "HelperFunctions.h"

using std::string;

enum itemClass {none, direct_damage};

class Item {
public:
    virtual void function() = 0;
    virtual ~Item() = 0;
    friend class Champion;
    string Name;
    bool isUnique;
    bool isCombined;
    itemClass iClass;

};


#endif //TFT_SIMULATOR_ITEM_H
