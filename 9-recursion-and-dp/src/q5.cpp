#include <iostream>
#include "q5.hpp"

namespace chap_9
{

std::vector<std::string> 
permutations(std::string front, std::string back)
{
	if (back.size() == 0)
	{
		return std::vector<std::string>({front});
	}
	else
	{
		std::vector<std::string> result;
		for (int i = 0; i < back.size(); i++)
		{
			std::string new_back(back);
			new_back.erase(i, 1);

			std::string new_front(front);
			new_front.push_back(back.at(i));
			
			auto new_result = permutations(new_front, new_back);

			result.insert(result.end(), new_result.begin(), new_result.end());
		}
		
		return result;
	}
}

std::vector<std::string>
permutations(std::string input)
{
	return permutations("", input);
}


}
