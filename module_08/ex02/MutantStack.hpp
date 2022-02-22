#pragma once

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	typedef typename std::stack<T>::container_type::iterator
		iterator;
	typedef typename std::stack<T>::container_type::const_iterator
		const_iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator
		reverse_iterator;
    typedef typename std::stack<T>::container_type::const_reverse_iterator
		const_reverse_iterator;

	MutantStack();
	MutantStack(const MutantStack& copy);
	MutantStack& operator=(const MutantStack& copy);
	~MutantStack();

	iterator begin();
	iterator end();

	const_iterator cbegin() const;
	const_iterator cend() const;

	reverse_iterator rbegin();
	reverse_iterator rend();

	const_reverse_iterator crbegin() const;
	const_reverse_iterator crend() const;
};

template <class T>
MutantStack<T>::MutantStack()
{}

template <class T>
MutantStack<T>::MutantStack(const MutantStack& copy)
{
	*this = copy;
}

template <class T>
MutantStack<T>::~MutantStack()
{}

template <class T>
MutantStack<T>&	MutantStack<T>::operator=(const MutantStack& copy)
{
	if (this == &copy)
		return *this;
	return *this;
}

template <class T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return this->c.begin();
}

template <class T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return this->c.end();
}

template <class T>
typename MutantStack<T>::const_iterator MutantStack<T>::cbegin() const
{
	return this->c.cbegin();
}

template <class T>
typename MutantStack<T>::const_iterator MutantStack<T>::cend() const
{
	return this->c.cend();
}

template <class T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin()
{
	return this->c.rbegin();
}

template <class T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend()
{
	return this->c.rend();
}

template <class T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crbegin() const
{
	return this->c.crbegin();
}

template <class T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crend() const
{
	return this->crend();
}
