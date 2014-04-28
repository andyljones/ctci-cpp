#include <unordered_set>
#include <stack>
#include "graph.hpp"

namespace chap_4 
{
	template<typename T>
	bool are_connected(graph<T>& g, const T& x, const T& y)
	{
		std::unordered_set<graph_node<T>*> visited;
		std::stack<graph_node<T>*> unprocessed;
		unprocessed.push(g.get_node(x));

		while(!unprocessed.empty())
		{
			auto node = unprocessed.top();
			unprocessed.pop();

			for(auto neighbour : node->neighbours)
			{
				if (visited.count(neighbour) == 0)
				{
					unprocessed.push(neighbour);
				}
			}
			
			visited.insert(node);	
		}
		
		return visited.count(g.get_node(y)) > 0;
	}

	

}
