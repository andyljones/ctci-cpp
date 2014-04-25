#include <algorithm>
#include "chap1_q3.hpp"

namespace chap1_q3 
{
	using std::string;

	bool equalUnderPermutation(const string &a, const string &b)
	{
		string sortedA(a);
		std::sort(sortedA.begin(), sortedA.end());

		string sortedB(b);
		std::sort(sortedB.begin(), sortedB.end());

		return sortedA.compare(sortedB) == 0;
	}
}
