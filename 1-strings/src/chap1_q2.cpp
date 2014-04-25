#include <cstring>
#include <iostream>

namespace chap1_q2 
{
	void reverse(char *str)
	{
		int length = strlen(str);

		for (int i = 0; i < length/2; i++)
		{
			int lower = i;
			int upper = (length-1) - i;

			char temp = str[lower];
			str[lower] = str[upper];
			str[upper] = temp;
		}
	}
}
