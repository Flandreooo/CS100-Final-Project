
#ifndef ENEMY_H
#define ENEMY_H

#include <string>
#include "../Character/character.h"
using namespace std;


class Enemy : public Character {

public: 
int lvl;
string type_name;

Enemy();
Enemy(int lvl, string classname, int hel, int def, int dam);

int getEnemyLVL();
void setEnemyLVL(int);
int getType();
string getTypeName();

};

#endif