#ifndef GAMEMASTER_H
#define GAMEMASTER_H
#include "GameText.h"
#include "Dungeon.h"
#include "Character/character.h"
#include "Enemy/enemy.h"
#include "Friendly/friendly.h"
#include "Player/Player.h"
#include <string>
#include <vector>

class GameMaster {

private: 

 vector<Friendly> party; 
 Player player;
bool runGame = false;

public: 
GameMaster();


void goShopping();
void goToSmith();
void hireHero();
void enterDungeon();
void enterTown();

void gameIntro();
void potionShop();


bool gameRunning(); //checks if game is running
void gameRun(); //switches game on and off


};



#endif