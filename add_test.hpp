#ifndef __ADD_TEST_HPP__
#define __ADD_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"
#include "add.hpp"

TEST(AddTest, AddEvaluateZeroPZero) {
    Op* zero = new Op(0);
    Add* add = new Add(zero, zero);
    EXPECT_EQ(add->evaluate(), 0);
}

TEST(AddTest, AddEvaluatepPositivePPositive) {
    Op* five = new Op(5);
    Add* add = new Add(five, five);
    EXPECT_EQ(add->evaluate(), 10);
}

TEST(AddTest, AddEvaluatNegativePNegative) {
    Op* nfive = new Op(-5);
    Add* add = new Add(nfive, nfive);
    EXPECT_EQ(add->evaluate(), -10);
}

#endif //__ADD_TEST_HPP__

