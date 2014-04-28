#include "q2.hpp"

namespace chap_5 
{
	std::string binary_representation(const double d)
	{
		const int length = 32;	
		
		double y = d;
		std::string output(length, '0');
		for (int i = 0; i < length; i++)
		{
			y = 2*y;
			
			if (y >= 1)
			{
				output[i] = '1';
				y = y - 1;
			}
		}

		return output;
	}
}
