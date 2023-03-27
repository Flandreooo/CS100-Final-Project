#include<iostream>
#include"../Player/Player.h"
#include<cassert>
#define NDEBUG
using namespace std;

int main() { 
Player *p = new Player();

assert(p->getGold() == 0);
cout <<"Valid initialization with Gold being 0" << endl;
assert(p->getRep() == 0);
cout << "Valid initialization with Rep being 0" << endl;

p->setGold(200);
assert(p->getGold() == 200); 
cout <<"input 200, valid statement" << endl;

p->setRep(5400);
assert(p->getRep()== 5400);
cout << "inputing 5400 in setRep. Valid" << endl;

delete p;


    return 0;
}