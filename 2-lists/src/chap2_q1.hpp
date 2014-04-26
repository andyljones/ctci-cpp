#ifndef CHAP2_Q1_HPP
#define CHAP2_Q1_HPP

#include <unordered_set>

namespace chap2
{
	template<typename T>
	void deduplicate(List<T>& list)
	{
		if (!list.head)
		{
			return;
		}

		std::unordered_set<T> seen;
		
		auto previous = list.head;
		seen.insert(previous->data);
		
		auto current = previous->next;
		
		while(current) 
		{
			if (seen.count(current->data) != 0)
			{
				previous->next = current->next;
			}
			else
			{
				seen.insert(current->data);
			}

			previous = current;
			current = current->next;
		}
	}
}

#endif
