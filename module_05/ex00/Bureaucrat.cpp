#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name)
	: name(name), grade(Bureaucrat::min_grade)
{}

Bureaucrat::Bureaucrat(unsigned int grade, std::string name)
	: name(name), grade(grade)
{
	if (this->grade > Bureaucrat::max_grade)
		throw Bureaucrat::GradeTooHighException();
	if (this->grade < Bureaucrat::min_grade)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy)
	: name(copy.name), grade(copy.grade)
{}

Bureaucrat::~Bureaucrat()
{}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copy)
{
	if (this == &copy)
		return *this;
	this->grade = copy.grade;
	return *this;
}

const std::string& Bureaucrat::getName() const
{
	return this->name;
}

unsigned int Bureaucrat::getGrade() const
{
	return this->grade;
}

void Bureaucrat::incrementGrade()
{
	this->grade++;
	if (this->grade > Bureaucrat::max_grade)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade()
{
	this->grade--;
	if (this->grade < Bureaucrat::min_grade)
		throw Bureaucrat::GradeTooLowException();
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade value is out of range (grade > max value)";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade value is out of range (grade < min value)";
}

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& bureaucrat)
{
	stream << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return stream;
}
