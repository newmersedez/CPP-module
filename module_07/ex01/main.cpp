#include "iter.hpp"

void func(int& a)
{
	a *= a;
}

void func2(std::string& s)
{
	for (size_t i = 0; i < s.length(); i++)
	{
		if (isdigit(s[i]))
			s[i] = 'A';
	}
}

int main(void)
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 8, 9, 10};
	
	iter(arr, 10, func);
	for (int i = 0; i < 10; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;

	std::string arr2[] = {"1111", "ttetete", "rwrr4151"};
	
	iter(arr2, 3, func2);
	for (int i = 0; i < 3; i++)
		std::cout << arr2[i] << " ";
}