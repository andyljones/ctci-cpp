#include <boost/optional/optional.hpp>
#include "chap2_q2.hpp"
#include "gtest/gtest.h"

TEST(C2Q2Test, CaseOfKIsLessThanLength)
{
	const chap2::List<int> sut({1, 2, 3});
	
	auto actualResult = chap2::get_kth_from_last(sut, 2);

	const int expectedResult = 2;
	EXPECT_EQ(expectedResult, *actualResult);	
}

TEST(C2Q2Test, CaseOfKIsGreaterThanLength)
{
	const chap2::List<int> sut({1, 2, 3});
	
	auto output = chap2::get_kth_from_last(sut, 4);
	auto actualResult = static_cast<bool>(output);

	const bool expectedResult = false;
	EXPECT_EQ(expectedResult, actualResult);	
}
	
