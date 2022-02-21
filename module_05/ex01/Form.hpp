#pragma once

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
private:
	const std::string	name;
	bool				is_signed;
	const unsigned int	grade_to_sign;
	const unsigned int	grade_to_execute;

public:
	class GradeTooHighException
	{
		virtual const char* what() const throw();
	};
	
	class GradeTooLowException
	{
		virtual const char* what() const throw();
	};

	Form()

	const std::string& getName() const;
	bool getIsSigned() const;
	unsigned int getGradeToSign() const;
	unsigned int getGradeToExecute() const;
	void beSigned(const Bureaucrat& bureaucrat);
};

std::ostream& operator<<(std::ostream& stream, const Form& form);
