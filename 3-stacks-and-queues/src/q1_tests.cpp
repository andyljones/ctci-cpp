#include <vector>
#include <algorithm>
#include "q1.hpp"
#include "gtest/gtest.h"

TEST(Q1Tests, CanPushIntoAllStacks)
{
	chap3::multi_stack<int> sut(3);

	sut.push(0, 10);
	sut.push(1, 20);
	sut.push(2, 30);
	sut.push(0, 40);
	
	const std::vector<int> expectedResult({10, 20, 30, 40, 0, 0});
	auto actualResult = sut.getContents();
	
	EXPECT_EQ(expectedResult, actualResult);
}

TEST(Q1Tests, PushFailsSilentlyWhenIndexIsTooLarge)
{
	chap3::multi_stack<int> sut(3);
	
	auto expectedResult = false;
	auto actualResult = sut.push(3, 0);
	EXPECT_EQ(expectedResult, actualResult);
}

TEST(Q1Tests, CanPopFromAllStacks)
{
	chap3::multi_stack<int> sut(3);

	sut.push(0, 10);
	sut.push(1, 20);
	sut.push(2, 30);
	sut.push(0, 40);
	
	auto result0 = sut.pop(0);
	auto result1 = sut.pop(0);
	auto result2 = sut.pop(1);
	
	EXPECT_EQ(40, *result0);
	EXPECT_EQ(10, *result1);
	EXPECT_EQ(20, *result2);
}

TEST(Q1Tests, PoppingEmptyStackFails)
{
	chap3::multi_stack<int> sut(3);

	EXPECT_TRUE(false == sut.pop(0));
}
