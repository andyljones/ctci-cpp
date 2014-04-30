#include <iostream>
#include "q5.hpp"

namespace chap_9
{

std::list<std::string> 
permutations(std::string front, std::string back)
{
	if (back.size() == 0)
	{
		return std::list<std::string>({front});
	}
	else
	{
		std::list<std::string> result;
		for (int i = 0; i < back.size(); i++)
		{
			std::string new_back(back);
			std::string new_front(front);

			new_back.erase(i, 1);
			new_front.push_back(back.at(i));
			
			auto new_result = permutations(new_front, new_back);

			result.splice(result.end(), new_result);
		}
		
		return result;
	}
}

std::list<std::string>
permutations(std::string input)
{
	return permutations("", input);
}


}
