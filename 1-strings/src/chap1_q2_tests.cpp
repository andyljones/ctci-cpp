#include <cstring>
#include "gtest/gtest.h"
#include "chap1_q2.hpp"

TEST(C1Q2Test, ReversesOddLengthString)
{
	char data[3+1] = "abc";
	
	chap1_q2::reverse(data);

	const char expectedResult[3+1]  = "cba";
	ASSERT_EQ(0, strcmp(data, expectedResult));
}

TEST(C1Q2Test, ReversesEvenLengthString)
{
	char data[2+1] = "ab";
	
	chap1_q2::reverse(data);

	const char expectedResult[2+1]  = "ba";
	ASSERT_EQ(0, strcmp(data, expectedResult));
}

TEST(C1Q2Test, HandlesEmptyString)
{
	char data[0+1] = "";
	
	chap1_q2::reverse(data);

	const char expectedResult[0+1]  = "";
	ASSERT_EQ(0, strcmp(data, expectedResult));
}
