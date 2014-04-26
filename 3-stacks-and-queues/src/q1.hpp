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
			std::vector<T> getContents();
		
		private:
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
			int top = tops.at(i);
			largestTop = *std::max_element(tops.begin(), tops.end());
			contents.resize(count * (largestTop + 1));
			
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
}
