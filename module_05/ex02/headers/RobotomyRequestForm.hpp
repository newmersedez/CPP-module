#pragma once

#include <string>
#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	std::string	target;

	RobotomyRequestForm();
	RobotomyRequestForm& operator=(const RobotomyRequestForm& copy);

public:
	RobotomyRequestForm(std::string name);
	RobotomyRequestForm(const RobotomyRequestForm& copy);
	~RobotomyRequestForm();

	void execute(Bureaucrat const & executor) const;
};
