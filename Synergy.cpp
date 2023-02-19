//
// Created by fs200 on 2023/1/24.
//

#include "Synergy.h"

Synergy::Synergy() {
    Name = "";
}

Synergy::Synergy(string &name) {
    Name = name;
}

Synergy::Synergy(string &name, vector<int> &nums) {
    Name = name;
    actNum = nums;
}

