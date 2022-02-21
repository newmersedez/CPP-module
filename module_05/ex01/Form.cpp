#include "Form.hpp"

Form::Form()
	: name("None"), is_signed(false), grade_to_sign(1), grade_to_execute(1)
{}

Form::Form(std::string name, unsigned int gts, unsigned int gte)
	: name(name), is_signed(false), grade_to_sign(gts), grade_to_execute(gte)
{
	if (gts > Bureaucrat::min_grade || gts > Bureaucrat::min_grade)
	{
		throw Form::GradeTooLowException();
	}
	if (gts < Bureaucrat::max_grade || gts < Bureaucrat::max_grade)
	{
		throw Form::GradeTooHighException();
	}
}

Form::Form(const Form& copy)
	: name(copy.name), is_signed(copy.is_signed),
	grade_to_sign(copy.grade_to_sign), grade_to_execute(copy.grade_to_execute)
{}

Form::~Form()
{}

Form& Form::operator=(const Form& copy)
{
	if (this == &copy)
		return *this;
	this->is_signed = copy.is_signed;
	return *this;
}

const std::string& Form::getName() const
{
	return this->name;
}

bool Form::getIsSigned() const
{
	return this->is_signed;
}

unsigned int Form::getGradeToSign() const
{
	return this->grade_to_sign;
}

unsigned int Form::getGradeToExecute() const
{
	return this->grade_to_execute;
}

void Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > this->grade_to_sign)
	{
		throw Form::GradeTooLowException();
	}
	else
		this->is_signed = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Grade is too high.";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Grade is too low.";
}


std::ostream& operator<<(std::ostream& stream, const Form& form)
{
	stream << "{";
	stream << "\"Name\" : \"" << form.getName() << "\", ";
	stream << "\"Is Signed\" : \"" << (form.getIsSigned() ? "Yes" : "No") << "\", ";
	stream << "\"Grades to sign\" : \"" << form.getGradeToSign() << "\", ";
	stream << "\"Grades to execute\" : \"" << form.getGradeToExecute() << "\", ";
	stream << "}";
	return stream;
}
