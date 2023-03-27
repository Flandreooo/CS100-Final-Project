#include<iostream>
#include"character.h"
#include "gtest/gtest.h"

TEST(CharacterTest, CharacterDefaultConstructor){
    Character character1;

    EXPECT_EQ(character1.getName(),"Cogito Ergo Sum");
    EXPECT_EQ(character1.getHealth(),100);
    EXPECT_EQ(character1.getDefense(),20);
    EXPECT_EQ(character1.getDamage(),30);
}

TEST(CharacterTest, CharacterSetHealth){
    Character character1;
    character1.setHealth(20);

    EXPECT_EQ(character1.getHealth(),20);
}

TEST(CharacterTest, CharacterSetDefense){
    Character character1;
    character1.setDefense(200);

    EXPECT_EQ(character1.getDefense(),200);
}

TEST(CharacterTest, CharacterSetDamage){
    Character character1;
    character1.setDamage(2000);

    EXPECT_EQ(character1.getDamage(),2000);
}

TEST(CharacterTest, CharacterAttack){
    Character character1;
    Character character2;
    character1.setHealth(20);
    character1.setDefense(5);
    character1.setDamage(10);
    character2.setHealth(15);
    character2.setDefense(2);
    character2.setDamage(1);

    character1.Attack(character2);
    EXPECT_EQ(character2.getHealth(),7);
}

TEST(CharacterTest, CharacterGetLife1){
    Character character1;
    Character character2;
    character1.setHealth(20);
    character1.setDefense(5);
    character1.setDamage(10);
    character2.setHealth(10);
    character2.setDefense(1);
    character2.setDamage(1);

    character1.Attack(character2);
    EXPECT_TRUE(character2.getLife());
}

TEST(CharacterTest, CharacterGetLife2){
    Character character1;
    Character character2;
    character1.setHealth(20);
    character1.setDefense(5);
    character1.setDamage(50);
    character2.setHealth(10);
    character2.setDefense(1);
    character2.setDamage(1);

    character1.Attack(character2);
    EXPECT_FALSE(character2.getLife());
}