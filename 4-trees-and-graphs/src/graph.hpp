#ifndef CHAP_4_GRAPH_HPP
#define CHAP_4_GRAPH_HPP

#include <iostream>
#include <vector>
#include <initializer_list>
#include <unordered_map>
#include <algorithm>
#include <utility>
#include "graph_node.hpp"

namespace chap_4
{
	template<typename T>
	class graph
	{
	public:
		void add_node(T value, std::initializer_list<T> neighbours);
		graph_node<T>* get_node(const T& value);
		std::vector<graph_node<T>*> get_nodes();	

	private:
		std::unordered_map<T, graph_node<T>> nodes;
	};

	template<typename T>
	void graph<T>::add_node(T value, std::initializer_list<T> neighbours)
	{
		std::vector<graph_node<T>*> neighbour_nodes;
		for(auto it = neighbours.begin(); it != neighbours.end(); it++)
		{
			neighbour_nodes.push_back(&nodes.at(*it));
		}
		
		graph_node<T> newNode({value, neighbour_nodes});
		nodes.emplace(value, newNode); 
	}

	template<typename T>
	std::vector<graph_node<T>*> graph<T>::get_nodes()
	{
		std::vector<graph_node<T>*> result;
		for (auto it = nodes.begin(); it != nodes.end(); it++)
		{
			result.push_back(&it->second);
		}

		return result;
	}

	template<typename T>
	graph_node<T>* graph<T>::get_node(const T& value)
	{
		return &nodes.at(value);
	}
}

#endif
