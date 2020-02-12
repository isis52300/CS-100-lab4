#ifndef __RAND_TEST_HPP__
#define __RAND_TEST_HPP__

#include <stdlib.h>

#include "gtest/gtest.h"

#include "op.hpp"
#include "rand.hpp"

TEST(RandTest, RandEvaluate) {
	Rand* rand = new Rand(
	EXPECT_EQ(rand->evaluate(), 
}

TEST(RandTest, RandStringify) {
	
}

#endif //__RAND_TEST_HPP__
