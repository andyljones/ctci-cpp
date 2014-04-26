#include <memory>
#include "tree.hpp"
#include "q1.hpp"
#include "gtest/gtest.h"

TEST(Q1Test, HeightOfOneNodeTree)
{
	using tree = chap_4::tree<int>;
	using ptr = chap_4::tree<int>::u_ptr;	

	ptr root(new tree({0}));
	
	int actual = chap_4::calc_balance(root).height;

	int expected = 1;
	EXPECT_EQ(expected, actual);
}

TEST(Q1Test, HeightOfComplexTree)
{
	using tree = chap_4::tree<int>;
	using ptr = chap_4::tree<int>::u_ptr;	

	ptr root(new tree
	({
		0,
		ptr(new tree
		({
			1,
			ptr(new tree({2}))
		})),
		ptr(new tree({3}))
	}));
	
	int actual = chap_4::calc_balance(root).height;

	int expected = 3;
	EXPECT_EQ(expected, actual);
	
} 

TEST(Q1Test, ReportsUnbalancedTreeAsUnbalanced)
{
	using tree = chap_4::tree<int>;
	using ptr = chap_4::tree<int>::u_ptr;	

	ptr root(new tree
	({
		0,
		ptr(new tree
		({
			1,
			ptr(new tree({2}))
		}))
	}));
	
	auto actual = chap_4::calc_balance(root).isBalanced;

	auto expected = false;
	EXPECT_EQ(expected, actual);
	
}
