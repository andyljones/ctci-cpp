#include <iostream>
#include "gtest/gtest.h"
#include "graph.hpp"

TEST(C4Q2, CanAddNodeToGraph)
{
	chap_4::graph<int> sut;
	
	sut.add_node(0, {});

	auto result = *sut.get_nodes().cbegin();
	
	EXPECT_EQ(0, result->value);
}	

TEST(C4Q2, CanConnectNodes)
{
	chap_4::graph<int> sut;

	sut.add_node(0, {});
	sut.add_node(1, {0});

	auto nodeA = *sut.get_nodes().cbegin();

	EXPECT_EQ(1, nodeA->value);
	EXPECT_EQ(0, nodeA->neighbours[0]->value);
}
	
