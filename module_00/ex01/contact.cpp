#include "contact.hpp"

Contact::Contact()
{}

Contact::~Contact()
{}

void	Contact::setFirstName(const std::string& first_name)
{
	this->_first_name = first_name;
}

void	Contact::setLastName(const std::string& last_name)
{
	this->_last_name = last_name;
}

void	Contact::setNickname(const std::string& nickname)
{
	this->_nickname = nickname;
}

void	Contact::setPhoneNumber(const std::string& phone_number)
{
	this->_phone_number = phone_number;
}

void	Contact::setDarkestSecret(const std::string& darkest_secret)
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
