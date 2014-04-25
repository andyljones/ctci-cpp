#include <initializer_list>
#include <string>
#include <sstream>

#include "gtest/gtest.h"
#include "list.hpp"

TEST(ListTest, InitializerListConstructor)
{
	chap2::List<int> sut({1, 2, 3});

	int result1 = sut.head->data;
	int result2 = sut.head->next->data;
	int result3 = sut.head->next->next->data;

	EXPECT_EQ(1, result1);
	EXPECT_EQ(2, result2);
	EXPECT_EQ(3, result3);
}

TEST(ListTest, InitializerListConstructorHandlesEmptyArgList)
{
	chap2::List<int> sut({});
	
	EXPECT_FALSE(sut.head);
}

TEST(ListTest, OutputOperatorWorks)
{
	chap2::List<int> sut({1, 2, 3});

	const std::string expectedResult = "1 2 3 ";
	
	std::stringstream stream;
	stream << sut;
	std::string actualResult = stream.str();

	EXPECT_EQ(expectedResult, actualResult);
}
