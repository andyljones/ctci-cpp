#include <cmath>
#include "q4.hpp"

namespace chap_9 
{
	std::vector<int> generate_subset(unsigned int i)
	{
		std::vector<int> result;	
		for (int j = 0; j < sizeof(i); j++)
		{
			if ((i >> j) & 1) 
			{
				result.push_back(j);
			}
		}

		return result;
	}

	std::unique_ptr<std::vector<std::vector<int>>> all_subsets(int n) 
	{
		auto result(std::make_unique<std::vector<std::vector<int>>>());	
		result->reserve(pow(2,n));
		for(unsigned int i = 0; i < pow(2, n); i++)
		{
			result->push_back(generate_subset(i));
		}
	
		return result;
	}


}
