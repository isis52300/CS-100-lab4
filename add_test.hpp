#ifndef __ADD_TEST_HPP__
#define __ADD_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"
#include "add.hpp"

TEST(AddTest, AddEvaluateZeroPZero2Bases) {
    Op* zero = new Op(0);
    Add* add = new Add(zero, zero);
    EXPECT_EQ(add->evaluate(), 0);
}

TEST(AddTest, AddEvaluateZeroPZero2Integers) {
    Add* add = new Add(0, 0);
    EXPECT_EQ(add->evaluate(), 0);
}

TEST(AddTest, AddEvaluateZeroPZero1Integer1Base) {
    Op* zero = new Op(0);
    Add* add1 = new Add(0, zero);
    Add* add2 = new Add(zero, 0);
    EXPECT_EQ(add1->evaluate(), 0);
    EXPECT_EQ(add2->evaluate(), 0);
}

#endif //__ADD_TEST_HPP__

