#include "GameText.h"



void GameText::printMainMenu(){
    //this is the very main menu bit, the first thing the player will see
    //it should be cout statments for the following:
    /*
    1. Start Game
    2. Quit Game
    */
    cout << "1. Start game" << '\n' << "2. Quit Game" << '\n';
}

void GameText::printSmithMenu(){
    /*
    Should print out:
    1. Upgrade Weapon
    2. Upgrade Armor
    3. Quit
    */
    cout << "1. Upgrade Weapon" << endl
     << "2. Upgrade Armor" << endl
     << "3. Quit" << endl;
}

void GameText::printPotionMenu(){
    /*
    Should print out:
    1. Buy Potion of Health
    2. Buy Potion of Damage
    3. Buy Potion of Defense
    4. Quit
    */
    cout << "1. Buy Potion of Health" << endl
     << "2. Buy Potion of Damage" << endl
     << "3. Buy Potion of Defense" << endl
     << "4. Quit" << endl;
}

void GameText::printTavernMenu(){
    /*
    Should print out:
    1. Hire someone
    2. Quit
    */
    cout << "1. Hire Someone" << endl
     << "2. Quit" << endl;
    
}

void GameText::printTownMenu(){
/*
    Should print out:
    1. Raid Dungeon
    2. Go to Smith
    3. Go to Tavern
    4. Go to Potion Shop
    */
    cout << "1. Raid Dungeon" << endl
     << "2. Go to Smith" << endl
     << "3. Go to Tavern" << endl
     << "4. Go to Potion Shop" << endl;
}

void GameText::printPotionBag(Player &player){
    //should print out the contents of the player bag as such:
    //1. Def Potion, Dam Potion, Hel potion, etc.
    //for the players bag:
    /*
    0 = empty potion
    1 = health potion
    2 = Damage potion
    3 = defense potion
    */
}

void GameText::printStageSelection(){
//skip this one for now
}



int GameText::getPromptChoice(){
    int choice = 0;
    cout<<"Choose a prompt(0 to return)"<<endl;
    cin>>choice;
    return choice;
}
