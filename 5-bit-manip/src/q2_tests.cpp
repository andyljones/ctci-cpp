#include "gtest/gtest.h"

#include "q2.hpp"

TEST(C5Q2Test, PrintsBinaryRepOf0)
{
	double d = 0;
	
	std::string expected = "00000000000000000000000000000000";
	std::string actual = chap_5::binary_representation(d);

	EXPECT_EQ(expected, actual);
}

TEST(C5Q2Test, PrintsBinaryRepOf1)
{
	double d = 1;
	
	std::string expected = "11111111111111111111111111111111";
	std::string actual = chap_5::binary_representation(d);

	EXPECT_EQ(expected, actual);
}
	
TEST(C5Q2Test, PrintsBinaryRepOfOneHalf)
{
	double d = 0.5;
	
	std::string expected = "10000000000000000000000000000000";
	std::string actual = chap_5::binary_representation(d);

	EXPECT_EQ(expected, actual);
}
