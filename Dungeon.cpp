#include "Dungeon.h"

void Dungeon::postBattleStep(vector<Friendly> party, Player player)
{
    //this calculates the exp points distributed for the party and gold for the player
    //this function also clears the enemy party vector

    //there should also be a check here for stagepass

    int expgain = 0;
    int repgain = 0;
    for(int i = 0; i<EnemyParty.size(); i++){
        expgain += EnemyParty[i].getEnemyLVL();
        repgain += 1;
    }

    for(int i = 0; i<party.size(); i++){
        party[i].updateLVL(expgain);
    }
    int goldgain = expgain/2;

    player.setGold(goldgain);
    player.setRep(repgain);

    cout<<"Party gains "<<expgain<<" EXP"<<endl;
    cout<<"You gain "<<goldgain<<" GOLD and "<<repgain<<" REP"<<endl;

    EnemyParty.clear();

}

void Dungeon::createEnemyParty(){

    Enemy bad1(level,"Goblin",15,3,5);
    EnemyParty.push_back(bad1);

    Enemy bad2(level,"Boar",30,1,5);
    EnemyParty.push_back(bad2);

    Enemy bad3(level,"Ghost",5,20,5);
    EnemyParty.push_back(bad3);
    
}

void Dungeon::startBattle(vector<Friendly> party, Player player)
{
    createEnemyParty();
    
    cout<<"An enemy party is battling you!"<<endl;
    int turn = 0;
    int enemyturn = 0;
    int choice, enemy = 0;
    while(!battleIsWon() && !partyDefeat){
        char c;
        cout<<"Would you like to retreat?(y/n)"<<endl;
        cin>>c;
        if(c == 'y'){
            retreatStep();
            cout<<"You flee from the ravenous clutches of the dungeon"<<endl;
            return;
        }

        showEnemies();
        cout<<endl;
        showParty(party);
        
        if(turn%2 == 0){
            cout<<"Who will attack?"<<endl;
            cin>>choice;
            cout<<"Who shall they attack?"<<endl;
            cin>>enemy;
            cout<<party[choice-1].getClass_Name()<<" attacks "<<EnemyParty[enemy-1].getTypeName()<<endl;
            party[choice-1].Attack(EnemyParty[enemy-1]);
            cout<<"NEW TURN"<<endl<<endl;
            turn += 1;
        }
        else{
            cout<<EnemyParty[enemyturn].getTypeName()<<" attacks "<<party[enemyturn-1].getClass_Name()<<endl;
            EnemyParty[enemyturn].Attack(party[enemyturn]);
            turn+=1;
            enemyturn += 1;
            if(enemyturn >= 3){
                enemyturn = 0;
            }
            cout<<"NEW TURN"<<endl<<endl;
        }
        
        if(battleIsWon()){
            cout<<"You won the battle!"<<endl;
            postBattleStep(party,player);
        }


    }

    
}

bool Dungeon::battleIsWon()
{
    for(int i = 0; i < 3; i++){
        if(EnemyParty[i].getLife()){
            return false;
        }
    }
    return true;
}

void Dungeon::setDungeonLVL(int x)
{
    level = x;
}

void Dungeon::retreatStep()
{
    partyDefeat = true;

}

void Dungeon::showParty(vector<Friendly> party)
{
    cout<<"Your Party: "<<endl;
    for(int i = 0; i<party.size(); i++){
        if(party[i].getLife() ){
            cout<<i+1<<". "<<party[i].getClass_Name()<<"|HP:"<<party[i].getHealth()<<"|DEF:"<<party[i].getDefense()<<"|DAM:"<<party[i].getDamage()<<endl;
        }
    }
}

void Dungeon::showEnemies(){
    cout<<"Enemy Party: "<<endl;
    for(int i = 0; i<EnemyParty.size(); i++){
        if(EnemyParty[i].getLife() ){
            cout<<i+1<<". "<<EnemyParty[i].getTypeName()<<"|HP:"<<EnemyParty[i].getHealth()<<"|DEF:"<<EnemyParty[i].getDefense()<<"|DAM:"<<EnemyParty[i].getDamage()<<endl;
        }
    }
}
