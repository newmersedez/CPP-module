#pragma once

#include "contact.hpp"
#include <iomanip>
#include <algorithm>

#define PHONEBOOK_SIZE 8

class PhoneBook
{
private:
	Contact	_phonebook[PHONEBOOK_SIZE];
	int	_size;

public:
	PhoneBook();
	~PhoneBook();

	void	add();
	void	search();
	void	displayContact(int id);
};
