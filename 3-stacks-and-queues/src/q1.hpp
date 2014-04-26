#include <boost/optional/optional.hpp>
#include <iostream>
#include <vector>

namespace chap3 
{
	template<typename T>
	class multi_stack
	{
		public:
			multi_stack(int count);
			bool push(int i, const T& x);
			boost::optional<T> pop(int i);
			std::vector<T> getContents();
		
		private:
			void resize();

			std::vector<T> contents;
			std::vector<int> tops; 
			int largestTop;
			int count;
	};
	
	template<typename T>
	multi_stack<T>::multi_stack(int count)
	 : count(count), tops(count) {}

	template<typename T>
	bool multi_stack<T>::push(int i, const T& x)
	{
		if (i >= count)
		{
			return false;
		}
		else
		{
			resize();	

			int top = tops.at(i);
			contents.at(count*top+i) = x;

			tops.at(i)++;

			return true;
		}
	}

	template<typename T>
	std::vector<T> multi_stack<T>::getContents()
	{
		return contents;
	}

	template<typename T>
	boost::optional<T> multi_stack<T>::pop(int i)
	{
		if (i >= count || tops.at(i) == 0)
		{
			return boost::optional<T>();
		}
		else
		{
			resize();
			
			int top = tops.at(i);
			auto result = contents.at((count*(top - 1)) + i);
			
			tops.at(i)--;

			return boost::optional<T>(result);
		}
	}

	template<typename T>
	void multi_stack<T>::resize()
	{
		largestTop = *std::max_element(tops.begin(), tops.end());
		contents.resize(count * (largestTop + 1));
	}		
}
