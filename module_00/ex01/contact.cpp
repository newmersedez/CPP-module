#include "contact.hpp"

Contact::Contact()
{}

Contact::~Contact()
{}

void	Contact::setFirstName(std::string first_name)
{
	this->_first_name = first_name;
}

void	Contact::setLastName(std::string last_name)
{
	this->_last_name = last_name;
}

void	Contact::setNickname(std::string nickname)
{
	this->_nickname = nickname;
}

void	Contact::setPhoneNumber(std::string phone_number)
{
	this->_phone_number = phone_number;
}

void	Contact::setDarkestSecret(std::string darkest_secret)
{
	this->_darkest_secret = darkest_secret;
}

const std::string&	Contact::getFirstName() const
{
	return this->_first_name;
}

const std::string&	Contact::getLastName() const
{
	return this->_last_name;
}

const std::string&	Contact::getNickname() const
{
	return this->_nickname;
}

const std::string&	Contact::getPhoneNumber() const
{
	return this->_phone_number;
}

const std::string&	Contact::getDarkestSecret() const
{
	return this->_darkest_secret;
}

std::istream&	operator>>(std::istream &fin, Contact &contact)
{
	std::string input;

	std::cout << "\nEnter first name: ";
	fin >> input;
	contact.setFirstName(input);

	std::cout << "Enter last name: ";
	fin >> input;
	contact.setLastName(input);

	std::cout << "Enter nickname: ";
	fin >> input;
	contact.setNickname(input);

	std::cout << "Enter phone number: ";
	fin >> input;
	contact.setPhoneNumber(input);

	std::cout << "Enter darkest secret: ";
	fin >> input;
	contact.setDarkestSecret(input);

	return fin;
}

std::ostream&	operator<<(std::ostream &fout, const Contact &contact)
{
	fout << contact.getFirstName() << "\n";
	fout <<  contact.getLastName() << "\n";
	fout << contact.getNickname() << "\n";
	fout << contact.getPhoneNumber() << "\n";
	fout << contact.getDarkestSecret() << std::endl;
	return fout;
}
