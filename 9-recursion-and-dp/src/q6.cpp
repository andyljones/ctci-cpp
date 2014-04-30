#include <iostream>
#include "q6.hpp"

namespace chap_9
{
	std::list<std::string>
	nestings(std::string front, int depth, int l_remaining)
	{
		std::list<std::string> results;
		if (depth > 0)
		{
			auto new_results =
				 nestings(front + ")", depth-1, l_remaining);
	
			results.splice(results.end(), new_results);	
		}
		
		if (l_remaining > 0)
		{
			auto new_results =
				 nestings(front + "(", depth+1, l_remaining-1);

			results.splice(results.end(), new_results);
		}

		if (depth == 0 && l_remaining == 0)
		{
			results.push_back(front);
		}

		return results;
	}

	std::list<std::string>
	nestings(int n)
	{
		return nestings("", 0, n);
	}
}
