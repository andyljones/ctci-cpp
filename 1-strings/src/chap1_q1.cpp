#include <algorithm>
#include <climits>
#include <bitset>
#include "chap1_q1.h"

namespace chap1_q1
{
	using std::string;

	bool charsAreUnique(const string &str) 
	{
		std::bitset<CHAR_MAX+1> charsEncountered;
		
		string::const_iterator it;
		for (it = str.begin(); it < str.end(); it++) 
		{
			const char current = *it;
			if (charsEncountered.test(current) == true)
			{
				return false;
			}
			
			charsEncountered.set(current);
		}
			
		return true;
	}
}
