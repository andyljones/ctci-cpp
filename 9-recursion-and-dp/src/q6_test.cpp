#include <set>
#include <algorithm>
#include "gtest/gtest.h"
#include "q6.hpp"

TEST(C9Q6, GeneratesCorrectNumberOfNestings)
{
	const int input = 4;
	
	auto result = chap_9::nestings(input);

	const int expected = 14;
	int actual = result.size();

	EXPECT_EQ(expected, actual);
}

TEST(C9Q6, GeneratesAllUniqueNestings)
{
	const int input = 4;
	
	auto result = chap_9::nestings(input);

	auto expected = result.size();
	auto actual = std::set<std::string>(result.begin(), result.end()).size();

	EXPECT_EQ(expected, actual);
}
