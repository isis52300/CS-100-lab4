#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"
#include "div.hpp"

TEST(DivTest, DivEvaluateZeroDNum) {
    Op* zero = new Op(0);
    Op* num = new Op(5);
    Div* div = new Div(zero, num);
    EXPECT_EQ(div->evaluate(), 0);
}

TEST(DivTest, DivEvaluatepPositiveDPositive) {
    Op* five = new Op(5);
    Div* div = new Div(five, five);
    EXPECT_EQ(div->evaluate(), 1);
}

TEST(DivTest, DivEvaluatNegativeDNegative) {
    Op* nten = new Op(-10);
    Op* ntwo = new Op(-2);
    Div* div = new Div(nten, ntwo);
    EXPECT_EQ(div->evaluate(), 5);
}

TEST(DivTest, DivEvaluatNegativeDPositve) {
    Op* nten = new Op(-10);
    Op* two = new Op(2);
    Div* div = new Div(nten, two);
    EXPECT_EQ(div->evaluate(), -5);
}

TEST(DivTest, DivEvaluatFraction) {
    Op* one = new Op(1);
    Op* two = new Op(2);
    Div* div = new Div(one, two);
    EXPECT_EQ(div->evaluate(), 0.5);
}

#endif //__ADD_TEST_HPP__

