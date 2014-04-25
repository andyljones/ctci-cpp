#include <initializer_list>

#include "gtest/gtest.h"
#include "list.hpp"

TEST(ListTest, InitializerListConstructor)
{
	chap2::List<int> sut{1, 2, 3};

	int result1 = sut.head->data;
	int result2 = sut.head->next->data;
	int result3 = sut.head->next->next->data;

	EXPECT_EQ(1, result1);
	EXPECT_EQ(2, result2);
	EXPECT_EQ(3, result3);
}
