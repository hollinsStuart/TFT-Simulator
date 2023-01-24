//
// Created by fs200 on 2023/1/23.
//

#include <iostream>
#include <fstream>
#include <vector>
#include "Champion.h"
#include "Gear.h"
#include "Synergy.h"
#include "Item.h"

int main() {
    std::fstream Champion_f, Synergy_f;
    std::string ChampFile = "Champion.txt", SynergyFile = "Synergy.txt";
    std::vector<Champion> champList;
    int ChampNum, SynNum;
    Champion_f.open(ChampFile);
    Champion_f >> ChampNum;
    champList.reserve(ChampNum);
    for (int i = 0; i < ChampNum; ++i) {
        auto temp = new Champion;

    }
    Champion_f.close();

    std::cout << "0" << std::endl;
    return 0;
}
