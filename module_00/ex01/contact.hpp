#pragma once

#include <string>
#include <iostream>

class Contact
{
private:
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_secret;

public:
	Contact();
	~Contact();

	void	setFirstName(std::string first_name);
	void	setLastName(std::string last_name);
	void	setNickname(std::string nickname);
	void	setPhoneNumber(std::string phone_number);
	void	setDarkestSecret(std::string darkest_secret);

	const std::string&	getFirstName() const;
	const std::string&	getLastName() const;
	const std::string&	getNickname() const;
	const std::string&	getPhoneNumber() const;
	const std::string&	getDarkestSecret() const;
	
};

std::istream&	operator>>(std::istream &fin, Contact &contact);
std::ostream&	operator<<(std::ostream &fout, const Contact &contact);
