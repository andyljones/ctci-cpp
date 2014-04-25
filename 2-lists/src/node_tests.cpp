#include <string>
#include <iostream>
#include <sstream>

#include "gtest/gtest.h"
#include "node.hpp"

TEST(NodeTest, TestConstructor) 
{
	std::string data = "a";

	chap2::Node<std::string> head(data);

	EXPECT_EQ(data, head.data); 	
}

TEST(NodeTest, TestOStreamOperator)
{
	std::string data = "a";
	chap2::Node<std::string> head(data);
	
	std::stringstream result;
	result << head;

	EXPECT_EQ(data, result.str());
}
