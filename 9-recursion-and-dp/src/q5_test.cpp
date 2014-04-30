#include <string>
#include <algorithm>
#include "gtest/gtest.h"
#include "q5.hpp"

TEST(C9Q5, GeneratesCorrectNumberOfPermutations)
{
	const std::string input = "abc";
	
	auto result = chap_9::permutations(input);

	const int expected = 6;
	int actual = result.size();

	EXPECT_EQ(expected, actual);
}

TEST(C9Q5, GeneratesAllUniquePermutations)
{
	const std::string input = "abc";
	
	auto result = chap_9::permutations(input);

	auto expected = result.end();
	auto actual = std::unique(result.begin(), result.end());

	EXPECT_EQ(expected, actual);
}
