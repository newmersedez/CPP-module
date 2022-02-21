#pragma once

#include <string>
#include <iostream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	std::string	target;

	ShrubberyCreationForm();
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& copy);

public:
	ShrubberyCreationForm(std::string name);
	ShrubberyCreationForm(const ShrubberyCreationForm& copy);
	~ShrubberyCreationForm();

	void execute(Bureaucrat const & executor) const;
};
