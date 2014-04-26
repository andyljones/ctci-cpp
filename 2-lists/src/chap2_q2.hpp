#include <boost/optional/optional.hpp>
#include <utility>
#include "list.hpp"

namespace chap2 
{
	template<typename T>
	boost::optional<T> get_kth_from_last(const List<T>& list, int k)
	{
		auto leader = list.head;
		while (k > 1 && leader)
		{
			k--;
			leader = leader->next;
		}
		
		if (leader)
		{
			auto trailer = list.head;
			while (leader->next)
			{
				leader = leader->next;		
				trailer = trailer->next;
			}

			return boost::optional<T>(trailer->data); 
		}
		else
		{
			return boost::optional<T>(); 
		}
	}
}
