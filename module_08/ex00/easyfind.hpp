#pragma once

#include <algorithm>

template <typename T>
int easyfind(T container, int n)
{
	typename T::iterator iter = std::find(container.begin(), container.end(), n);

	if (iter == container.end())
		throw std::exception();
	return *iter;
}