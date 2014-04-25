#include <iostream>

#include "gtest/gtest.h"
#include "chap1_q1.h"

TEST(C1Q1Test, HandlesAllUniqueCharacters)
{
	const std::string data = "abc";
	
	using chap1_q1::charsAreUnique;
	bool actualResult = charsAreUnique(data);
	
	bool expectedResult = true;
	ASSERT_EQ(actualResult, expectedResult);
}

TEST(C1Q1Test, HandlesRepeatedCharacters)
{
	const std::string data = "aaa";
	
	using chap1_q1::charsAreUnique;
	bool actualResult = charsAreUnique(data);
	
	bool expectedResult = false;
	ASSERT_EQ(actualResult, expectedResult);
}

TEST(C1Q1Test, HandlesEmptyString)
{
	const std::string data = "";
	
	using chap1_q1::charsAreUnique;
	bool actualResult = charsAreUnique(data);
	
	bool expectedResult = true;
	ASSERT_EQ(actualResult, expectedResult);
}
