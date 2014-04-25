#include <string>
#include "gtest/gtest.h"
#include "chap1_q3.hpp"

TEST(Chap1Q3Tests, HandlesEqualStrings)
{
	const std::string dataA = "abc";
	const std::string dataB = "bca";

	bool result = chap1_q3::equalUnderPermutation(dataA, dataB);
	ASSERT_TRUE(result);
}

TEST(Chap1Q3Tests, HandlesUnequalStrings)
{
	const std::string dataA = "abc";
	const std::string dataB = "aaa";

	bool result = chap1_q3::equalUnderPermutation(dataA, dataB);
	ASSERT_FALSE(result);
}

TEST(Chap1Q3Tests, HandlesUnequalLengthStrings)
{
	const std::string dataA = "abc";
	const std::string dataB = "a";

	bool result = chap1_q3::equalUnderPermutation(dataA, dataB);
	ASSERT_FALSE(result);
}
