#include "friendly.h"

Friendly::Friendly()//some generic friendly character
{
    EXPlevel = 0;
    ExpProgress = 0; 
}

Friendly::Friendly(int explvl, int hel, int def, int dam, int Expprog)//initializes a friendly character
{
    EXPlevel = explvl; // EXPlevel is from the friend class
    health = hel;
    defense = def;
    damage = dam;
    ExpProgress = Expprog;
}

void Friendly::updateLVL(int exp)
{
    //add exp to exp progess variable
    //whenever exp progess is 100 or greater, reset exp progress to 0, perfrom level_up() function
        ExpProgress+=exp;
        if(ExpProgress >= 100) {
            ExpProgress = 0;
            level_up();
        }
}

void Friendly::level_up(){
    //increase health by some reasonable amount
    //increase damage and defense by a lesser amount
    ++EXPlevel;

}

int Friendly::getEXP_LVL() // done
{
    return this->EXPlevel;
}

void Friendly::setEXP_LVL(int x) // done
{
    this->EXPlevel = x; 
}

int Friendly::getEXP_PROG() // done
{
    return this->ExpProgress;
}

void Friendly::setEXP_PROG(int expProg) // done
{
    this->ExpProgress = expProg;
}

string Friendly::getClass_Name()
{
    return class_name;
}

