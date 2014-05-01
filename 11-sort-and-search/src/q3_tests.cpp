#include "gtest/gtest.h"
#include "q3.hpp"

TEST(C11Q3, CyclicOrderReturnsTrueOnCyclicallyOrderedElements)
{
	const int inputA{2};
	const int inputB{3};
	const int inputC{1};
	
	const bool expected{true};

	bool actual{chap_11::cyclic_order(inputA, inputB, inputC)};
	
	EXPECT_EQ(expected, actual);
}

TEST(C11Q3, CyclicOrderReturnsFalseOnCyclicallyOutOfOrderElements)
{
	const int inputA{1};
	const int inputB{3};
	const int inputC{2};
	
	const bool expected{false};

	bool actual{chap_11::cyclic_order(inputA, inputB, inputC)};
	
	EXPECT_EQ(expected, actual);
}

TEST(C11Q3, CyclicSearchReturnsTrueIfArrayContainsElement)
{
	const int inputSize{5};
	const int inputArray[inputSize]{3, 4, 0, 1, 2};
	const int input{1};
	
	const bool expected{true};

	bool actual{chap_11::cyclic_search(inputArray, inputSize, input)};

	EXPECT_EQ(expected, actual);
}

TEST(C11Q3, CyclicSearchReturnsFalseIfArrayContainsElement)
{
	const int inputSize{5};
	const int inputArray[inputSize]{3, 4, 0, 2, 2};
	const int input{1};
	
	const bool expected{false};

	bool actual{chap_11::cyclic_search(inputArray, inputSize, input)};

	EXPECT_EQ(expected, actual);
}

TEST(C11Q3, CyclicSearchWorksOnHomogeneousArray)
{
	const int inputSize{5};
	const int inputArray[inputSize]{0, 0, 0, 1, 0};
	const int input{1};
	
	const bool expected{true};

	bool actual{chap_11::cyclic_search(inputArray, inputSize, input)};

	EXPECT_EQ(expected, actual);
}
