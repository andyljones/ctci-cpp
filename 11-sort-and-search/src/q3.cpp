#include "q3.hpp"

namespace chap_11 
{
	bool cyclic_order(int l, int x, int u)
	{
		if (l == u)
		{
			return true;
		}
		else if (l < u && l <= x && x <= u)
		{
			return true;
		}
		else if (l > u && (l <= x || x <= u))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
	bool cyclic_search(const int* X, int l, int u, int x)
	{
		if (l == u)
		{
			return (X[l] == x);
		}
		
		int m = (l+u)/2;
		if (!cyclic_order(X[l], x, X[m]))
		{
			return cyclic_search(X, m+1, u, x);
		}
		if (!cyclic_order(X[m], x, X[u]))
		{
			return cyclic_search(X, l, m, x);
		}

		return cyclic_search(X, l, m, x) || cyclic_search(X, m+1, u, x);
	}

	bool cyclic_search(const int* X, int n, int x)
	{
		if (n == 1)
		{
			return false;
		}
		else
		{
			return cyclic_search(X, 0, n-1, x);
		}
	}
}
