#include "Player.h" 
#include "gtest/gtest.h"
#include <iostream>

TEST(PlayerTest, PlayerDefaultConstructor){
    Player player1;

    EXPECT_EQ(player1.getGold(),0);
    EXPECT_EQ(player1.getRep(),0);
    EXPECT_EQ(player1.getEXP_LVL(),0);
    EXPECT_EQ(player1.getEXP_PROG(),0);
    EXPECT_EQ(player1.getHealth(),100);
    EXPECT_EQ(player1.getDefense(),20);
    EXPECT_EQ(player1.getDamage(),30);
}

TEST(PlayerTest, PlayerSetGod){
    Player player1;
    player1.setGold(1);

    EXPECT_EQ(player1.getGold(),1);
}

TEST(PlayerTest, PlayerSetRep){
    Player player1;
    player1.setRep(10);

    EXPECT_EQ(player1.getRep(),10);
}

TEST(PlayerTest, PlayerSetHealth){
    Player player1;
    player1.setHealth(20);

    EXPECT_EQ(player1.getHealth(),20);
}

TEST(PlayerTest, PlayerSetDefense){
    Player player1;
    player1.setDefense(200);

    EXPECT_EQ(player1.getDefense(),200);
}

TEST(PlayerTest, PlayerSetDamage){
    Player player1;
    player1.setDamage(2000);

    EXPECT_EQ(player1.getDamage(),2000);
}

TEST(PlayerTest, PlayerSetExpLvl){
    Player player1;
    player1.setEXP_LVL(2);

    EXPECT_EQ(player1.getEXP_LVL(),2);
}

TEST(PlayerTest, PlayerSetExpProg){
    Player player1;
    player1.setEXP_PROG(20);

    EXPECT_EQ(player1.getEXP_PROG(),20);
}

TEST(PlayerTest, PlayerAttack){
    Player player1;
    Player player2;
    player1.setHealth(20);
    player1.setDefense(5);
    player1.setDamage(10);
    player2.setHealth(15);
    player2.setDefense(2);
    player2.setDamage(1);

    player1.Attack(player2);

    EXPECT_EQ(player2.getHealth(),7);
}

TEST(PlayerTest, PlayerGetLife1){
    Player player1;
    Player player2;
    player1.setHealth(20);
    player1.setDefense(5);
    player1.setDamage(10);
    player2.setHealth(10);
    player2.setDefense(1);
    player2.setDamage(1);

    player1.Attack(player2);
    EXPECT_TRUE(player2.getLife());
}

TEST(PlayerTest, PlayerGetLife2){
    Player player1;
    Player player2;
    player1.setHealth(20);
    player1.setDefense(5);
    player1.setDamage(50);
    player2.setHealth(10);
    player2.setDefense(1);
    player2.setDamage(1);

    player1.Attack(player2);
    EXPECT_FALSE(player2.getLife());
}

TEST(PlayerTest, PlayerUpdateLVL){
    Player player1;
    player1.setEXP_LVL(10);
    player1.updateLVL(100);

    EXPECT_EQ(player1.getEXP_LVL(),11);
}

TEST(PlayerTest, PlayerLevelUp){
    Player player1;
    player1.setEXP_LVL(10);
    player1.level_up();
    player1.level_up();
    player1.level_up();

    EXPECT_EQ(player1.getEXP_LVL(),13);
}