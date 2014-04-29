#include <vector>
#include "q1.hpp"

namespace chap_9 
{
	int no_of_ways(int n)
	{
		std::vector<int> results({1, 1, 2});

		results.resize(n+1);
		for (int i = 2; i < n+1; i++)
		{
			results[i] = results[i-1]+results[i-2]+results[i-3];
		}

		return results.at(n);
	}
}
