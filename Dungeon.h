#ifndef DUNGEON_H
#define DUNGEON_H
#include "Friendly/friendly.h"
#include "Enemy/enemy.h"
#include "Player/Player.h"
#include <vector>
#include <iostream>
using namespace std;

class Dungeon {

private: 

public: 
int level = 1;
bool partyDefeat = false;
int defeatedEnemies = 0;
vector<Enemy> EnemyParty;

//omit the print battle text, that should be game text's job
//Dungeon();
void showEnemies();
void showParty(vector<Friendly> party);

void postBattleStep(vector<Friendly> party, Player player);
void createEnemyParty();
void startBattle(vector<Friendly> party, Player player);
bool battleIsWon();
void setDungeonLVL(int);
void retreatStep();

};



#endif