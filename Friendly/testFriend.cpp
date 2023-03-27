#include"friendly.h"
#include"../Character/character.h"
#include "gtest/gtest.h"
#include<iostream>


TEST(friendsd, testings) {
    Friendly *get = new Friendly();
    EXPECT_EQ(get->getEXP_PROG(),0);
}

TEST(friendClass, Default_constructor) {
    Friendly *f = new Friendly(); 
    // successful initializations
    EXPECT_EQ(f->getEXP_PROG(), 0);
    EXPECT_EQ(f->getEXP_LVL(), 0);

}

TEST(friendClass, updateLVL) {
    Friendly *f = nullptr; 
    f = new Friendly();
    f->updateLVL(103);
    EXPECT_EQ(f->getEXP_LVL(), 1);
    EXPECT_EQ(f->getEXP_PROG(), 0);
}

TEST(friendClass, Friendly_person){
    Friendly *g = new Friendly(12,34,4,29,30);
    EXPECT_EQ(g->getEXP_LVL(), 12);
    EXPECT_EQ(g->getHealth(), 34);
    EXPECT_EQ(g->getDefense(), 4);
    EXPECT_EQ(g->getDamage(),29);
    EXPECT_EQ(g->getEXP_PROG(), 30);
}
