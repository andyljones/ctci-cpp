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
