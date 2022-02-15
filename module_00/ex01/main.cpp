#include <iostream>

#include "phonebook.hpp"
#include "contact.hpp"

static void	displayActions()
{
	std::cout << "\n1) ADD - add new contact" << std::endl;
	std::cout << "2) SEARCH - find contact" << std::endl;
	std::cout << "3) EXIT - finish program and exit" << std::endl;
	std::cout << "Enter action: ";
}

static void start()
{
	std::string	action;
	PhoneBook	phone_book;

	while (!std::cin.eof())
	{
		displayActions();
		std::cin >> action;
		if (action == "ADD")
			phone_book.add();
		else if (action == "SEARCH")
			phone_book.search();
		else if (action == "EXIT")
			break;
	}
}

int main()
{
	start();
	return 0;
}