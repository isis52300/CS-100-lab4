#ifndef __RAND_TEST_HPP__
#define __RAND_TEST_HPP__

#include <stdlib.h>

#include "gtest/gtest.h"

#include "op.hpp"
#include "rand.hpp"

TEST(RandTest, RandEvaluate) {
    srand(523);
    Rand* rand = new Rand();
    EXPECT_EQ(rand->evaluate(), 5);
}

//TEST(RandTest, RandStringify) {
//
//}

#endif //__RAND_TEST_HPP__
