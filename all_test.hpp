#ifndef __ALL_TEST_HPP__
#define __ALL_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"
#include "rand.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "mult.hpp"
#include "div.hpp"
#include "pow.hpp"


//TEST(AllTest, EvaluateAddMult) {
//    Base* two = new Op(2);
//    Base* three = new Op(3);
//    Base* mult = new Mult(two, three);
//    Base* add = new Add(two, mult);
//    EXPECT_EQ(add->evaluate(), 8);
//}

TEST(AllTest, EvaluateAddPow) {
    Base* two = new Op(2);
    Base* three = new Op(3);
    Base* pow = new Pow(three, two);
    Base* add = new Add(two, pow);
    EXPECT_EQ(add->evaluate(), 11);
}

TEST(AllTest, EvaluateAddDiv) {
    Base* two = new Op(2);
    Base* three = new Op(3);
    Base* div = new Div(two, two);
    Base* add = new Add(three, div);
    EXPECT_EQ(add->evaluate(), 4);
}

//TEST(AllTest, EvaluateAddSub) {
//    Base* two = new Op(2);
//    Base* three = new Op(3);
//    Base* sub = new Sub(two, two);
//    Base* add = new Add(three, sub);
//    EXPECT_EQ(add->evaluate(), 3);
//}

TEST(AllTest, EvaluateAddAdd) {
    Base* two = new Op(2);
    Base* three = new Op(3);
    Base* add1 = new Add(two, two);
    Base* add2 = new Add(three, add1);
    EXPECT_EQ(add2->evaluate(), 7);
}


//TEST(AllTest, StingifyAddMult) {
//    Base* two = new Op(2);
//    Base* three = new Op(3);
//    Base* mult = new Mult(two, three);
//    Base* add = new Add(two, mult);
//    EXPECT_EQ(add->stringify(), "2.000000 + 2.000000 * 3.000000);
//}

TEST(AllTest, StringifyAddPow) {
    Base* two = new Op(2);
    Base* three = new Op(3);
    Base* pow = new Pow(three, two);
    Base* add = new Add(two, pow);
    EXPECT_EQ(add->stringify(), "2.000000 + 3.000000 ** 2.000000");
}

TEST(AllTest, StringifyAddDiv) {
    Base* two = new Op(2);
    Base* three = new Op(3);
    Base* div = new Div(two, two);
    Base* add = new Add(three, div);
    EXPECT_EQ(add->stringify(), "3.000000 + 2.000000 / 2.000000");
}

//TEST(AllTest, StringifyAddSub) {
//    Base* two = new Op(2);
//    Base* three = new Op(3);
//    Base* sub = new Sub(two, two);
//    Base* add = new Add(three, sub);
//    EXPECT_EQ(add->stringify(), "3.000000 + 2.000000 - 2.000000");
//}

TEST(AllTest, StingifyAddAdd) {
    Base* two = new Op(2);
    Base* three = new Op(3);
    Base* add1 = new Add(two, two);
    Base* add2 = new Add(three, add1);
    EXPECT_EQ(add2->stringify(), "3.000000 + 2.000000 + 2.000000");
}



#endif //__ALL_TEST_HPP__


