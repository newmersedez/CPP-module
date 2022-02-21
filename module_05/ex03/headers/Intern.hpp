#pragma once

#include <string>
#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
public:
	class FormCreateException : public std::exception
	{
		virtual const char* what() const throw();
	};
	
	Intern();
	Intern(const Intern& copy);
	~Intern();

	Intern& operator=(const Intern& copy);

	Form *makeForm(const std::string& name, const std::string target);
};
