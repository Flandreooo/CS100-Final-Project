#ifndef PLAYER_H
#define PLAYER_H
#include "../Friendly/friendly.h"
#include <vector>


class Player : public Friendly{
    private:
    int Gold;
    
  
    int Reputation;
    
    public: 
    vector<int> potionBag;
    Player();
    
    int getGold();
    void setGold(int);
    int getRep();
    void setRep(int);

};














#endif