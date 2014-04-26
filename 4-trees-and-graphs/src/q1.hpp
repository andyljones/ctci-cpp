#ifndef CHAP_4_Q1_HPP
#define CHAP_4_Q1_HPP

#include <cstdlib>
#include <memory>
#include "tree.hpp"

namespace chap_4 
{
	struct balance_height
	{
		bool isBalanced;
		int height;
	};

	template<typename T>
	balance_height calc_balance(const std::unique_ptr<tree<T>>& t)
	{
		if (!t)
		{
			return balance_height({true, 0});
		}
		else
		{
			auto l = calc_balance(t->left);
			auto r = calc_balance(t->right);
			
			int height = std::max(l.height, r.height) + 1;
			auto balance = 
				l.isBalanced && r.isBalanced && 
				std::abs(l.height - r.height) <= 1;

			return balance_height({balance, height});
		}
	}
}
#endif
