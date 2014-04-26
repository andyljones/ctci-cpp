#include <string>
#include <sstream>
#include "list.hpp"
#include "chap2_q1.hpp"
#include "gtest/gtest.h"

TEST(C2Q1Test, RemovesDuplicate)
{
	chap2::List<int> sut({1, 2, 2}); 
	
	chap2::deduplicate(sut);
	
	std::stringstream output;
	output << sut;
	std::string actualResult = output.str();

	const std::string expectedResult = "1 2 ";
	EXPECT_EQ(expectedResult, actualResult);
}
	
TEST(C2Q1Test, HandlesEmptyList)
{
	chap2::List<int> sut({}); 
	
	chap2::deduplicate(sut);
	
	std::stringstream output;
	output << sut;
	std::string actualResult = output.str();

	const std::string expectedResult = "";
	EXPECT_EQ(expectedResult, actualResult);
}
