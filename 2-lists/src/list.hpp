#include <sstream>
#include <string>
#include <initializer_list>
#include <memory>

#include "node.hpp"

namespace chap2
{
	template<typename T> 
	class List
	{
		public:
			std::shared_ptr<Node<T>> head;
			
			List(std::initializer_list<T> args);
	};
	
	template<typename T>
	List<T>::List(std::initializer_list<T> args)
	{
		if (args.size() > 0)
		{
			auto it = args.begin();
			head = std::make_shared<Node<T>>(*it++);
			
			auto previous = head;
			while (it < args.end())
			{
				previous->next = std::make_shared<Node<T>>(*it++);
				previous = previous->next;
			}
		}
	}
	
	template<typename T>
	std::ostream& operator<<(std::ostream& os, const List<T>& list)
	{
		auto current = list.head;
		while (current)
		{
			os << current->data << " ";
			current = current->next;
		}
		
		return os;
	}
}
