#include "gtest/gtest.h"
#include "q2.hpp"
#include "graph.hpp"

TEST(C2Q2, TrueOnConnectedVertices)
{
	chap_4::graph<int> sut;
	sut.add_node(0, {});
	sut.add_node(1, {0});
	sut.add_node(2, {});
	sut.add_node(3, {1, 2});

	bool actualResult = chap_4::are_connected(sut, 3, 0);
	bool expectedResult = true;

	EXPECT_EQ(expectedResult, actualResult);
}

TEST(C2Q2, FalseOnDisconnectedVertices)
{
	chap_4::graph<int> sut;
	sut.add_node(0, {});
	sut.add_node(1, {});
	sut.add_node(2, {});
	sut.add_node(3, {1, 2});

	bool actualResult = chap_4::are_connected(sut, 3, 0);
	bool expectedResult = false;

	EXPECT_EQ(expectedResult, actualResult);
}

