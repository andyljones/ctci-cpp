#ifndef NODE_HPP
#define NODE_HPP

#include <iostream>
#include <memory>

namespace chap2
{
	template<typename T>
	struct Node 
	{
		T data;
		std::shared_ptr<Node<T>> next;
		
		Node(const T &x);
	};

	template<typename T>
	Node<T>::Node(const T &x)
	{
		data = x;
	}
	
	template<typename T>
	std::ostream& operator<<(std::ostream& stream, const Node<T>& node)
	{
		stream << node.data;
		return stream;
	}
}

#endif
