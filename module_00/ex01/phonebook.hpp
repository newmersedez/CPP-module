#pragma once

#include "contact.hpp"

class PhoneBook
{
private:
	Contact	_people[8];

public:
	PhoneBook();
	~PhoneBook();

	void	add(const Contact& contact);
	void	search(const Contact& contact);
	void	displayAllContacts();
};
