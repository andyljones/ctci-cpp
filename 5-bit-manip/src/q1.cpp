#include <iostream>
#include "q1.hpp"

namespace chap_5 
{
	unsigned int meld(unsigned int n, unsigned int m, int i, int j)
	{
		unsigned int rMask = (1 << i) - 1;
		unsigned int lMask = ~0 << (j+1);
		unsigned int mask = rMask | lMask;

		unsigned int maskedM = ~mask & m;
		unsigned int maskedN = mask & n;

		unsigned int result = maskedM | maskedN;
		return result;
	}
}
