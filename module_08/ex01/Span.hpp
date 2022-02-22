#pragma once

#include <iostream>
#include <map>

class Span
{
private:
	size_t				_size;
	size_t				_capacity;
	size_t				_shortest_span;
	size_t				_longest_span;
	std::map<int, int>	_values;

	Span();
	void _update();

public:
	Span(unsigned int n);
	Span(const Span& copy);
	~Span();

	Span& operator=(const Span& copy);

	void addNumber(int n);
	int shortestSpan() const; 	
	int longestSpan() const;
};
