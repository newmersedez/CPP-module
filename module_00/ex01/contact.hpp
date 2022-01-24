#pragma once

#include <string>

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

	void	setFirstName(const std::string& first_name);
	void	setLastName(const std::string& last_name);
	void	setNickname(const std::string& nickname);
	void	setPhoneNumber(const std::string& phone_number);
	void	setDarkestSecret(const std::string& darkest_secret);

	const std::string&	getFirstName() const;
	const std::string&	getLastName() const;
	const std::string&	getNickname() const;
	const std::string&	getPhoneNumber() const;
	const std::string&	getDarkestSecret() const;
	
};
