#pragma once

#include <iostream>
#include <iterator>
#include <stdint.h>
#include <cmath>
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
	void _update(std::map<int, int>::iterator iter_curr);

public:
	Span(unsigned int n);
	Span(const Span& copy);
	~Span();

	Span& operator=(const Span& copy);

	template <typename U>
	void addNumber(U iter_begin, U iter_end);
	void addNumber(int n);
	int shortestSpan() const; 	
	int longestSpan() const;
};

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

template <typename U>
void Span::addNumber(U iter_begin, U iter_end)
{
	while (iter_begin != iter_end)
	{
		this->addNumber(*iter_begin);
		iter_begin++;
	}
}

void Span::addNumber(int n)
{
	if (this->_size == this->_capacity)
		throw std::length_error("span is full");
	this->_size++;
	this->_values[n] += 1;
	this->_update(this->_values.find(n));
}

int Span::shortestSpan() const
{
	if (this->_size == 0)
		throw std::length_error("span is empty");
	return this->_shortest_span;
}

int Span::longestSpan() const
{
	if (this->_size == 0)
		throw std::length_error("span is empty");
	return this->_longest_span;
}

void Span::_update(std::map<int, int>::iterator iter_curr)
{
	if (this->_values.size() < 2)
		return ;

	std::map<int, int>::iterator	iter_prev = std::prev(iter_curr);
	std::map<int, int>::iterator	iter_next = std::next(iter_curr);
	std::map<int, int>::iterator	iter_min;
	std::map<int, int>::iterator	iter_max;
	size_t							temp = this->_shortest_span;

	iter_min = this->_values.begin();
	iter_max = std::prev(this->_values.end());
	if (iter_curr != this->_values.begin())
	{
		temp = std::min(temp,
				static_cast<size_t>(iter_curr->first - iter_prev->first));
	}
	if (iter_next != this->_values.end())
	{
		temp = std::min(temp,
				static_cast<size_t>(iter_next->first - iter_curr->first));
	}
	this->_longest_span = iter_max->first - iter_min->first;
	this->_shortest_span = temp;
}
