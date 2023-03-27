#include<iostream>
#include"Player.h"
#include <vector>
using namespace std;

Player::Player() {
    Gold = 0; 
    Reputation = 0;
    
    // Potionbag with size 5 assuming were doing 5 different potions for game
}

int Player::getGold() {
    return this->Gold;
}

void Player::setGold(int Gold) {
    this->Gold = Gold;
}

int Player::getRep() {return this->Reputation;}

void Player::setRep(int Rep) {
    this->Reputation = Rep;
}
