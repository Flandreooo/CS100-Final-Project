#include "character.h"

Character::Character(){
    name = "Cogito Ergo Sum";
    health = 100;
    defense = 20;
    damage = 30;
}

string Character::getName(){
    return name;
}

int Character::getHealth(){
    return health;
}

int Character::getDefense(){
    return defense;
}

int Character::getDamage(){
    return damage;
}

void Character::setDamage(int dam){
    damage = dam;
}

void Character::setDefense(int d){
    defense = d;
}

void Character::setHealth(int h){
    health = h;
}


void Character::Attack(Character &c){
   int healthDown = (damage - c.getDefense());
    if(healthDown < 0){
        healthDown = 0;
    }

    c.setHealth(c.getHealth() - healthDown);
    
    if(c.getHealth() <= 0){
        c.kill();
    }
}

bool Character::getLife()
{
    return !(isDead);
}

void Character::kill()
{
    isDead = true;
}
