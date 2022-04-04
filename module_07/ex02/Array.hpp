#pragma once

template <typename T>
class Array
{
private:
	T		*_array;
	size_t	_size;

public:
	Array();
	Array(unsigned int n);
	Array(const Array& copy);
	Array& operator=(const Array& copy);
	~Array();

	T& operator[](int index);
	size_t size() const;
};

template <typename T>
Array<T>::Array()
{
	this->_size = 0;
	this->_array = NULL;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	this->_size = n;
	this->_array = new T[this->_size];
}

template <typename T>
Array<T>::Array(const Array& copy)
{
	this->_size = copy._size;
	this->_array = new T[this->_size];
	
	for (size_t i = 0; i < this->_size; i++)
		this->_array[i] = copy._array[i];
}

template <typename T>
Array<T>::~Array()
{
	delete this->_array;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& copy)
{
	if (this == &copy)
		return *this;
	
	delete this->_array;
	this->_size = copy._size;
	this->_array = new T[this->_size];

	for (size_t i = 0; i < this->_size; i++)
		this->_array[i] = copy._array[i];
	return *this;
}

template <typename T>
T& Array<T>::operator[](int index)
{
	if (index < 0 || index >= (int)this->_size)
		throw std::out_of_range("index out of range");
	return this->_array[index];
}

template <typename T>
size_t Array<T>::size() const
{
	return this->_size;
}
