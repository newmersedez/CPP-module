#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main()
{
	std::vector<int> vec(10);

	for (int i = 0; i < 10; i++)
		vec[i] = i;
	for (int i = 0; i < 10; i++)
		std::cout << vec[i] << " ";
	std::cout << std::endl;

	int n = easyfind(vec, 7);
	std::cout << n << std::endl;
	return 0;
};
