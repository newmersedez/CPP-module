#pragma once

#include <string>
#include <iostream>

class Bureaucrat
{
private:
	const std::string	name;
	unsigned int		grade;

	static const unsigned int	max_grade = 1;
	static const unsigned int	min_grade = 150;

	Bureaucrat& operator=(const Bureaucrat& copy);

public:
	class GradeTooHighException : public std::exception
	{
		virtual const char* what() const throw();
	};
	
	class GradeTooLowException : public std::exception
	{
		virtual const char* what() const throw();
	};

	Bureaucrat(std::string name = "None");
	Bureaucrat(unsigned int grade, std::string name = "None");
	Bureaucrat(const Bureaucrat& copy);
	~Bureaucrat();
	
	const std::string& getName() const;
	unsigned int getGrade() const;
	void incrementGrade();
	void decrementGrade();
};

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& bureaucrat);
