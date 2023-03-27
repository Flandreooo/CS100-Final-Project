#ifndef GAMETEXT_H
#define GAMETEXT_H
#include <iostream>
#include <string>
#include "Player/Player.h"
using namespace std;


class GameText {

public:
string enemy_flavor_text[3]; //initialize with text
string town_flavor_text[3];
string dungeon_flavor_text[3];
string dungeon_battle_text[3];
string tavern_flavor_text[3];

void printMainMenu();

void printSmithMenu();

void printPotionMenu();

void printTavernMenu();

void printTownMenu();

void printPotionBag(Player &player);

void printStageSelection();

void printDungeonEventText();

int getPromptChoice();
    //should just be a basic universal prompt asking for user input
};



#endif