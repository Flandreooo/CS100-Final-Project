#include "enemy.h"

Enemy::Enemy()//some generic enemy, basic parameters as you want
{
    lvl = 1;
    type_name = "Generic";
    health = 99;
    defense = 11;
    damage = 22;

}

Enemy::Enemy(int lvlcurr, string classname, int hel, int def, int dam)//creates a new enemy with these parameters
{
    lvl = lvlcurr;
    type_name = classname;
    health = hel;
    defense = def;
    damage = dam;
}

int Enemy::getEnemyLVL()
{
    return lvl;
}

void Enemy::setEnemyLVL(int lvlcurr)
{
    lvl = lvlcurr;
}

string Enemy::getTypeName()
{
    return type_name;
}
