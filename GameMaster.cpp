#include<iostream> 
#include<fstream>
#include "GameMaster.h"

using namespace std; 

GameMaster::GameMaster(){

}

void GameMaster::gameIntro(){
    GameText txt;
    string player_class_name = "Nobody";
    cout<<"Will your be character a: \n 1.warrior \n 2.mage  \n 3.ranger"<<endl;
    switch(txt.getPromptChoice()){
        case 1:
        player_class_name = "Warrior";
        break;
        case 2:
        player_class_name = "Mage";
        break;
        case 3:
        player_class_name = "Ranger";
        break;
    }

    cout<<endl;
    cout<<"You are a "<<player_class_name<<" on a mission to prune the local population of beasts and monsters from the nearby town. You will be rewarded for every kill by both gold and glory. In time, you will be a legend in the dreams of men, women, and children around the land."<<endl;
    player.class_name = player_class_name;
    player.setDamage(10);
    player.setDefense(10);
    player.setHealth(100);
    player.setEXP_LVL(1);
    player.setEXP_PROG(0);
    player.setRep(1);
    player.setGold(100);
    party.push_back(player);

}

void GameMaster::goShopping(){
    GameText shop;
    int cost = 50-player.getRep();
    cout<<"The potion seller currently charges "<<cost<<" for each potion"<<endl;
    if(player.getGold() < cost){
        cout<<"You can't afford his services right now!"<<endl;
        return;
    }
    shop.printPotionMenu();
    int x = shop.getPromptChoice();
    switch(x){
        case 1:
        player.potionBag.push_back(1);
        player.setGold(player.getGold()-cost);
        break;
        case 2:
        player.potionBag.push_back(2);
        player.setGold(player.getGold()-cost);
        break;
        case 3:
        player.potionBag.push_back(3);
        player.setGold(player.getGold()-cost);
        break;

    }


}

void GameMaster::goToSmith(){
    GameText store;
    int cost = 50-player.getRep();
    cout<<"The blacksmith currently charges "<<cost<<" gold for his services"<<endl;
    if(player.getGold() < cost){
        cout<<"You can't afford his services right now!"<<endl;
        return;
    }
    store.printSmithMenu();
    int y = store.getPromptChoice();
    switch(y){
        case 1:
        player.setDamage(player.getDamage()+5);
        player.setGold(player.getGold()-cost);
        break;
        case 2:
        player.setDefense(player.getDefense()+5);
        player.setGold(player.getGold()-cost);
        break;

    }
    

}

void GameMaster::hireHero(){
     GameText TavernMenu;
     int cost = 100-player.getRep();
     cout<<"You can hire a mercenary for "<<cost<<" gold to aid you"<<endl;
     cout<<"Stats: HP: 100 | DAM: 7 | DEF: 1"<<endl;
     if(player.getGold() < cost){
        cout<<"You can't afford to hire anyone right now!"<<endl;
        return;
    }
    TavernMenu.printTavernMenu();
    int tavernInput = TavernMenu.getPromptChoice();
    // cases go here

    if(tavernInput == 1) {
        //make/hire nercenary
        player.setGold(player.getGold()-cost);
        Friendly hero = Friendly(1,100,100,7,1);
        hero.class_name = "Mercenary";
        party.push_back(hero);
    }
    else {
        //return to main page
        
    }

}

void GameMaster::enterDungeon(){
    Dungeon dun;
    cout<<"Vicious beasts and foul creatures lurk here. Steel yourself for battle!"<<endl;
    dun.startBattle(party,player);


}

void GameMaster::enterTown(){
    GameText txt2;
    cout<<"Various people mill about the Town as you decide your next move."<<endl;
    cout<<"You currently have "<<player.getGold()<<" gold and "<<player.getRep()<<" Reputation"<<endl;
    cout<<"HP:"<<player.getHealth()<<"   DAM:"<<player.getDamage()<<"   DEF:"<<player.getDefense()<<endl;
    cout<<"There are "<<party.size()<<" mercenaries in your party"<<endl;
    cout<<"You decide to: "<<endl;
    txt2.printTownMenu();
    int input = txt2.getPromptChoice();

    if(input == 1) {
        // raid dungeon 
        enterDungeon();
    }
    else if(input == 2) {
        // go to smith;
        goToSmith();
    }
    else if(input == 3) {
        //tavern shop
        hireHero();
    }
    else if(input == 4) {
        //potion shop
        potionShop();
    }
    else {
        //must return to main page
        gameRun();
    }


}

bool GameMaster::gameRunning(){
    return runGame;
}

void GameMaster::gameRun(){
    runGame = !runGame;
}


void GameMaster::potionShop() {
    GameText shop;
    int cost = 50-player.getRep();
    cout<<"The potion seller currently charges "<<cost<<" gold for each potion"<<endl;
    if(player.getGold() < cost){
        cout<<"You can't afford his services right now!"<<endl;
        return;
    }
    shop.printPotionMenu();
    int x = shop.getPromptChoice();
    switch(x){
        case 1:
        player.potionBag.push_back(1);
        player.setGold(player.getGold()-cost);
        break;
        case 2:
        player.potionBag.push_back(2);
        player.setGold(player.getGold()-cost);
        break;
        case 3:
        player.potionBag.push_back(3);
        player.setGold(player.getGold()-cost);
        break;

    }
}