#ifndef CHAP_4_TREE_HPP
#define CHAP_4_TREE_HPP

#include <memory>

namespace chap_4 
{
	template<typename T>
	struct tree
	{
		using u_ptr = std::unique_ptr<tree<T>>;

		T value;
		u_ptr left;
		u_ptr right;
	};
}

#endif
