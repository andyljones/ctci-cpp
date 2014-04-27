#ifndef CHAP_4_GRAPH_NODE_HPP
#define CHAP_4_GRAPH_NODE_HPP

#include <memory>
#include <vector>

namespace chap_4 
{
	template<typename T>
	struct graph_node 
	{
		T value;

		using neighbour_vec = 
			std::vector<std::shared_ptr<graph_node<T>>>;
		neighbour_vec neighbours;
	};
}

#endif
