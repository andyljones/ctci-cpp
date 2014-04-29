#include "gtest/gtest.h"
#include "q1.hpp"

TEST(C9Q1Test, BaseCasesAreCorrect)
{
	int expected0 = 1;
	int expected1 = 1;
	int expected2 = 2;

	int actual0 = chap_9::no_of_ways(0);
	int actual1 = chap_9::no_of_ways(1);
	int actual2 = chap_9::no_of_ways(2);
	
	EXPECT_EQ(expected0, actual0);
	EXPECT_EQ(expected1, actual1);	
	EXPECT_EQ(expected2, actual2);	
}

TEST(C9Q1Test, InductionCaseIsCorrect)
{
	int expected = 13;

	int actual = chap_9::no_of_ways(5);

	EXPECT_EQ(expected, actual);
}
