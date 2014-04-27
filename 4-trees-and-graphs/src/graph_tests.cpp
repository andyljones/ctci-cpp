#include "gtest/gtest.h"
#include "graph.hpp"

TEST(C4Q2, CanAddNodeToGraph)
{
	chap_4::graph<int> g;
	
	g.add_node(0, {});

	auto result = *g.get_nodes().cbegin();
	
	EXPECT_EQ(0, result->value);
}	
