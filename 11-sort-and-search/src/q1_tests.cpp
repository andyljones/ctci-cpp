#include <iostream>
#include "gtest/gtest.h"
#include "q1.hpp"

TEST(C11Q1, MergesArrays)
{
	const int sizeA{3};
	const int sizeB{3};
	int inputA[sizeA + sizeB]{0, 2, 4};
	int inputB[sizeB]{1, 3, 5};
	
	chap_11::array_merge(inputA, sizeA, inputB, sizeB);

	const int expected[sizeA + sizeB]{0, 1, 2, 3, 4, 5};

	bool are_equal = true;
	for (int i = 0; i < sizeA + sizeB; i++)
	{
		if (expected[i] != inputA[i]) 
		{
			are_equal = false; 
		}
	}

	EXPECT_TRUE(are_equal);
}
