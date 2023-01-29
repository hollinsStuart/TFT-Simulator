//
// Created by fs200 on 2023/1/24.
//

#ifndef TFT_SIMULATOR_SYNERGY_H
#define TFT_SIMULATOR_SYNERGY_H

#include <string>
#include <vector>

class Synergy {
public:
    Synergy();
    explicit Synergy(std::string &name);
    Synergy(std::string &name, std::vector<int> &nums);
    std::string Name;
    std::vector<int> actNum;        // the number of champions to activate the synergy
};


#endif //TFT_SIMULATOR_SYNERGY_H
