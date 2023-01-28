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
#include "Board.h"
#include "Player.h"

void printChampion(Champion C) {
    std::cout << "Name: " << C.getName() << "\nCost: " << C.getCost();
}

int main() {
    std::fstream Champion_f, Synergy_f, Item_f;
    std::string ChampFile = "Champion.txt", SynergyFile = "Synergy.txt";
    std::vector<Champion> ChampionList;

    int ChampNum;
    Champion_f.open(ChampFile);
    Champion_f >> ChampNum;
    ChampionList.reserve(ChampNum);
    for (int i = 0; i < ChampNum; ++i) {
        std::string tName, tAName;
        int tCost, tCircR, iMana, mMana, tRange;
        double tAtt, tHea, tAtkS;
        Champion_f >> tName >> tCost >> tAtt >> tAtkS >> tRange >> mMana >> iMana >> tAName;
        Champion tempChamp = Champion(tName, tCost, tAtt, tHea,
                                      tAtkS, tRange, mMana,
                                 iMana, tAName);
        ChampionList.push_back(tempChamp);
    }
    Champion_f.close();

    std::vector<Item> ItemList;


    std::vector<Synergy> SynergyList;



    std::cout << "0" << std::endl;
    return 0;
}
