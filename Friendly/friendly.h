#ifndef FRIENDLY_H
#define FRIENDLY_H

#include <string>
#include "../Character/character.h"
using namespace std;
enum CLASS_TYPE {Warrior, Ranger, Wizard};

class Friendly : public Character {

public: 
int EXPlevel;
int ExpProgress;
CLASS_TYPE C_class;
string class_name;



Friendly();
Friendly(int explvl, int hel, int def, int dam,int Expprog);

void updateLVL(int exp);
void level_up();
int getEXP_LVL();
void setEXP_LVL(int);
int getEXP_PROG();
void setEXP_PROG(int);
string getClass_Name();

};

#endif