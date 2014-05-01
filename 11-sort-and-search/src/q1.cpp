#include "q1.hpp"

namespace chap_11
{

void array_merge(int* A, int n_A, const int* B, int n_B)
{
	int a{n_A-1};
	int b{n_B-1};
	for (int i{n_A + n_B - 1}; i != 0; i--)
	{
		if (A[a] > B[b])
		{
			A[i] = A[a];
			a--;
		}
		else
		{
			A[i] = B[b];
			b--;
		}
	}
}

}

