#include "GameMaster.h"
//#include "GameText.h"

int main(){
    GameMaster game;
    GameText text;

    text.printMainMenu();
    if(text.getPromptChoice() == 1){
        game.gameRun();
        game.gameIntro();
    }
    
    
    while(game.gameRunning()){
        game.enterTown();

    }

    return 0;
}