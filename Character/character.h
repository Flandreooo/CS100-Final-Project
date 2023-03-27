#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>
using namespace std;

class Character {

public: 
string name;
int health;
int defense;
int damage;
bool isDead = false;

Character();
void Attack(Character &c);
string getName();
int getHealth();
int getDefense();
int getDamage();
bool getLife();

void setHealth(int h);
void setDefense(int d);
void setDamage(int dam);
void kill();

};



#endif