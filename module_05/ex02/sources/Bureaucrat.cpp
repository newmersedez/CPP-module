#include "../headers/Bureaucrat.hpp"
#include "../headers/Form.hpp"

Bureaucrat::Bureaucrat(std::string name)
	: name(name), grade(Bureaucrat::min_grade)
{}

Bureaucrat::Bureaucrat(unsigned int grade, std::string name)
	: name(name), grade(grade)
{
	if (grade < Bureaucrat::max_grade)
		throw Bureaucrat::GradeTooHighException();
	if (grade > Bureaucrat::min_grade)
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
	this->grade--;
	if (this->grade < Bureaucrat::max_grade)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade()
{
	this->grade++;
	if (this->grade > Bureaucrat::min_grade)
		throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::signForm(Form& form) const
{
	try
	{
		form.beSigned(*this);
		std::cerr << this->name << " signs " 
				<< form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->name << " cannot sign "
				<< form.getName() << " because " 
				<< e.what() << std::endl;
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high.";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low.";
}

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& bureaucrat)
{
	stream << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return stream;
}
