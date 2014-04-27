#ifndef CHAP_4_GRAPH_NODE_HPP
#define CHAP_4_GRAPH_NODE_HPP

#include <vector>

namespace chap_4 
{
	template<typename T>
	struct graph_node 
	{
		T value;
		std::vector<graph_node<T>*> neighbours;
	};
}

#endif
