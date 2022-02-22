#pragma once

#include <iostream>

template <typename T>
void iter(T* array, size_t length, void (*f)(T&))
{
	if (!array)
		throw std::invalid_argument("null pointer array");
	for (size_t i = 0; i < length; i++)
	{
		f(array[i]);
	}
}
