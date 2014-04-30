#include <cmath>
#include <set>
#include <numeric>
#include <algorithm>
#include <iostream>
#include "q9.hpp"

namespace chap_9
{
	bool contains(int x, std::vector<int> xs)
	{
		return std::count(xs.begin(), xs.end(), x) > 0;
	}

	bool off_diagonals(int x, std::vector<int> xs)
	{
		int x_col(xs.size());
		for (int i = 0; i < xs.size(); i++)
		{
			int col_diff = x_col - i;
			int row_diff = std::abs(x - xs.at(i));	
			
			if (col_diff == row_diff)
			{
				return false;
			}
		}
		
		return true;
	}
	
	std::vector<int> find_available(int n, std::vector<int> rows)
	{
		std::vector<int> results;
		for (int i = 0; i < n; i++)
		{
			bool off_row = !contains(i, rows);
			bool off_diag = off_diagonals(i, rows);
			if (off_row && off_diag)
			{
				results.push_back(i);	
			}
		}	

		return results;
	}

	std::vector<int> n_queens(int n, std::vector<int> rows)
	{
		if (rows.size() == n)
		{
			return rows;
		}

		auto available(find_available(n, rows));
		
		std::vector<int> result;
		for (int i : available)
		{
			std::vector<int> new_rows(rows);
			new_rows.push_back(i);
			
			if(!(result = n_queens(n, new_rows)).empty())
			{
				return result;
			}
		}

		return std::vector<int>();
	}

	std::vector<int> n_queens(int n)
	{
		return n_queens(n, std::vector<int>());
	}
}
