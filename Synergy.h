//
// Created by fs200 on 2023/1/24.
//

#ifndef TFT_SIMULATOR_SYNERGY_H
#define TFT_SIMULATOR_SYNERGY_H

#include "HelperFunctions.h"

using std::vector, std::string;

class Synergy {
public:
    string Name;
    vector<int> actNum;        // the number of champions to activate the synergy


    Synergy();
    explicit Synergy(string&);
    Synergy(string&, vector<int> &nums);

};

class Brawler: public Synergy {
    string Name = "Brawler";


};


#endif //TFT_SIMULATOR_SYNERGY_H
