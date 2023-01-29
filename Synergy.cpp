//
// Created by fs200 on 2023/1/24.
//

#include "Synergy.h"

Synergy::Synergy() {
    Name = "";
}

Synergy::Synergy(std::string &name) {
    Name = name;
}

Synergy::Synergy(std::string &name, std::vector<int> &nums) {
    Name = name;
    actNum = nums;
}

