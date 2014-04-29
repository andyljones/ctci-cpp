#include <algorithm>
#include <cmath>

#include "q4.hpp"
#include "gtest/gtest.h"

TEST(C9Q4, GeneratesRightNumberOfSubsets)
{
	int input = 4;

	int actual = chap_9::all_subsets(input)->size();

	int expected = pow(2, input);
	EXPECT_EQ(expected, actual);
}

TEST(C9Q4, AllSubsetsAreDistinct)
{
	int input = 4;

	auto result = chap_9::all_subsets(input);

	auto it_last_distinct = std::unique(result->begin(), result->end());
	auto allDistinct = it_last_distinct == result->end();

	EXPECT_TRUE(allDistinct);
}
