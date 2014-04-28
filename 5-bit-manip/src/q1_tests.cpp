#include "gtest/gtest.h"
#include "q1.hpp"

TEST(C5Q1, WorksOnNonEqualIAndJ)
{
	unsigned int n = 0b11111;
	unsigned int m = 0b100;
	unsigned int i = 1;
	unsigned int j = 3;

	unsigned int expectedResult = 0b10101;
	unsigned int actualResult = chap_5::meld(n, m, i, j);

	EXPECT_EQ(expectedResult, actualResult);
}	

