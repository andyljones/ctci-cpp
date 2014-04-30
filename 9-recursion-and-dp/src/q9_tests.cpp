#include <cmath>
#include <iostream>
#include <utility>
#include <vector>
#include <set>
#include <algorithm>

#include "q9.hpp"
#include "gtest/gtest.h"

TEST(C9Q9Test, AllInDifferentRows)
{
	const int input(4);

	auto result = chap_9::n_queens(input);

	std::vector<int> rows(result);

	auto expected = rows.size();
	auto actual = std::set<int>(rows.begin(), rows.end()).size();

	EXPECT_EQ(expected, actual);
}

TEST(C9Q9Test, HasCorrectNumberOfEntries)
{
	const int input(4);

	auto result = chap_9::n_queens(input);

	auto expected = input;
	auto actual = result.size();

	EXPECT_EQ(expected, actual);
}

TEST(C9Q9Test, AreAllInDifferentDiagonals)
{
	const int input(4);

	auto result = chap_9::n_queens(input);

	bool success = true;
	for (int i = 0; i < result.size(); i++)
	{
		for (int j = i+1; j < result.size(); j++)
		{
			int col_diff(result[j] - result[i]);
			int row_diff(j - i);
			if (std::abs(row_diff) == col_diff)
			{
				success = false;
			}
		}
	}
	
	EXPECT_TRUE(success);

}


