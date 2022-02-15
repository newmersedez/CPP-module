#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
	this->_size = 0;
}

PhoneBook::~PhoneBook()
{}

void	PhoneBook::add()
{
	Contact contact;

	std::cin >> contact;
	_phonebook[_size % PHONEBOOK_SIZE] = contact;
	++_size;
}

static std::string	getPhonebookDataForOutput(std::string str)
{
	if (str.size() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

void	PhoneBook::displayContact(int id)
{
	if (id >= _size)
		std::cout << "ERROR" << std::endl;
	else
	{
		std::cout << std::setw(10) << id << "|";
		std::cout << std::setw(10) << getPhonebookDataForOutput(_phonebook[id].getFirstName()) << "|";
		std::cout << std::setw(10) << getPhonebookDataForOutput(_phonebook[id].getLastName()) << "|";
		std::cout << std::setw(10) << getPhonebookDataForOutput(_phonebook[id].getNickname()) << "|\n";
	}

}

void	PhoneBook::search()
{
	int	id;
	(void)id;

	
	for (int i = 0; i < std::min(PHONEBOOK_SIZE, _size); i++)
		displayContact(i);
	std::cout << "\nENTER ID: ";
	std::cin >> id;
	if (id >= _size || id >= PHONEBOOK_SIZE || id < 0)
	{
		std::cout << "ERROR" << std::endl;
		return ;
	}
	std::cout << _phonebook[id];
}
