#include "Span.hpp"
#include <stdint.h>
#include <cmath>

Span::Span()
	: _size(0), _capacity(0), _shortest_span(SIZE_MAX), _longest_span(0)
{}

Span::Span(unsigned int n)
	: _size(0), _capacity(n), _shortest_span(SIZE_MAX), _longest_span(0)
{}

Span::Span(const Span& copy)
{
	this->_size = copy._size;
	this->_capacity = copy._capacity;
	this->_shortest_span = copy._shortest_span;
	this->_longest_span = copy._longest_span;
	this->_values = copy._values;
}

Span::~Span()
{}

Span& Span::operator=(const Span& copy)
{
	if (this == &copy)
		return *this;
	this->_size = copy._size;
	this->_capacity = copy._capacity;
	this->_shortest_span = copy._shortest_span;
	this->_longest_span = copy._longest_span;
	this->_values = copy._values;
	return *this;
}

void Span::addNumber(int n)
{
	if (this->_size == this->_capacity)
		throw std::exception();
	this->_size++;
	this->_values[n] += 1;
	this->_update();
}

int Span::shortestSpan() const
{
	if (this->_size == 0)
		throw std::exception();
	return this->_shortest_span;
}

int Span::longestSpan() const
{
	if (this->_size == 0)
		throw std::exception();
	return this->_longest_span;
}

void Span::_update()
{
	if (this->_size < 2)
		return ;

	std::map<int, int>::iterator	iter1 = this->_values.begin();
	std::map<int, int>::iterator	iter2 = ++this->_values.begin();
	size_t							temp;

	while (iter1 != this->_values.end())
	{
		temp = abs((*iter2).first - (*iter1).first);
		if (temp < this->_shortest_span)
			this->_shortest_span = temp;
		if (temp > this->_longest_span)
			this->_longest_span = temp;

		iter1 = iter2;
		iter2++;
	}
	std::cout << std::endl;
}
