#include "enemy.h"
#include "gtest/gtest.h"
#include <iostream>


TEST(EnemyTest, EnemyConstructor){
    Enemy joe(3,"goblin",15,2,3);

    EXPECT_EQ(joe.getEnemyLVL(),3);
    EXPECT_EQ(joe.getTypeName(),"goblin");
    EXPECT_EQ(joe.getHealth(),15);
    EXPECT_EQ(joe.getDefense(),2);
    EXPECT_EQ(joe.getDamage(),3);
}

TEST(EnemyTest, EnemyDefaultConstructor){
    Enemy enemy1;

    EXPECT_EQ(enemy1.getEnemyLVL(),1);
    EXPECT_EQ(enemy1.getTypeName(),"Generic");
    EXPECT_EQ(enemy1.getHealth(),99);
    EXPECT_EQ(enemy1.getDefense(),11);
    EXPECT_EQ(enemy1.getDamage(),22);
}

TEST(EnemyTest, EnemySetlevel){
    Enemy enemy1;
    enemy1.setEnemyLVL(2);

    EXPECT_EQ(enemy1.getEnemyLVL(),2);
}

TEST(EnemyTest, EnemySetHealth){
    Enemy enemy1;
    enemy1.setHealth(20);

    EXPECT_EQ(enemy1.getHealth(),20);
}

TEST(EnemyTest, EnemySetDefense){
    Enemy enemy1;
    enemy1.setDefense(200);

    EXPECT_EQ(enemy1.getDefense(),200);
}

TEST(EnemyTest, EnemySetDamage){
    Enemy enemy1;
    enemy1.setDamage(2000);

    EXPECT_EQ(enemy1.getDamage(),2000);
}

TEST(EnemyTest, EnemyAttack){
    Enemy enemy1(3,"goblin",15,2,3);
    Enemy enemy2(4,"Devil",15,1,5);

    enemy1.Attack(enemy2);
    EXPECT_EQ(enemy2.getHealth(),13);
}

TEST(EnemyTest, EnemyGetLife1){
    Enemy enemy1(3,"goblin",15,2,15);
    Enemy enemy2(4,"Devil",15,1,5);

    enemy1.Attack(enemy2);
    EXPECT_TRUE(enemy2.getLife());
}

TEST(EnemyTest, EnemyGetLife2){
    Enemy enemy1(3,"goblin",15,2,16);
    Enemy enemy2(4,"Devil",15,1,5);

    enemy1.Attack(enemy2);
    EXPECT_FALSE(enemy2.getLife());
}