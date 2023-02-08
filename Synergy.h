//
// Created by fs200 on 2023/1/24.
//

#ifndef TFT_SIMULATOR_SYNERGY_H
#define TFT_SIMULATOR_SYNERGY_H

#include <string>
#include <vector>

using std::vector, std::string;

class Synergy {
public:
    Synergy();
    explicit Synergy(string &name);
    Synergy(string &name, vector<int> &nums);

    string Name;
    vector<int> actNum;        // the number of champions to activate the synergy


};


#endif //TFT_SIMULATOR_SYNERGY_H
