//
// Created by fs200 on 2023/1/23.
//

#include <iostream>
#include <fstream>
#include <vector>
#include "HelperFunctions.h"

using std::cout, std::vector, std::string, std::fstream;

void printChampion(const Champion& C) {
    cout << "Name: " << C.getName() << "\nCost: " << C.getCost();
}

vector<Synergy> makeSynergyList() {
    vector<Synergy> temp;
    string string = "Brawler";
    Synergy s = Synergy(string);
    temp.push_back(s);


    return temp;
}

int main() {
    fstream Champion_f, Item_f;
    string ChampFile = "Champion.txt", SynergyFile = "Synergy.txt";
    vector<Synergy> SynergyList = makeSynergyList();
    vector<Champion> ChampionList;

    int ChampNum;
    Champion_f.open(ChampFile);
    Champion_f >> ChampNum;
    ChampionList.reserve(ChampNum);
    for (int i = 0; i < ChampNum; ++i) {
        string tName, tAName;
        int tCost, tCircR, iMana, mMana, tRange;
        double tAtt, tHea, tAtkS;
        Champion_f >> tName >> tCost >> tAtt >> tAtkS >> tRange >> mMana >> iMana >> tAName;
        Champion tempChamp = Champion(tName, tCost, tAtt, tHea,
                                      tAtkS, tRange, mMana,
                                 iMana, tAName);
        ChampionList.push_back(tempChamp);
    }
    Champion_f.close();

    vector<Item> ItemList;






    cout << "0\n";
    return 0;
}
