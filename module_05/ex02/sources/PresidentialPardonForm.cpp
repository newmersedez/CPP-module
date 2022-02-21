#include "../headers/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
	: Form("", 25, 5), target("")
{
	// std::cout << "PresidentialPardonForm constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string name)
	: Form(name, 25, 5), target(name)
{
	// std::cout << "PresidentialPardonForm constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy)
	: Form(copy), target(copy.target)
{
	// std::cout << "PresidentialPardonForm copy constructor called." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	// std::cout << "PresidentialPardonForm destructor called." << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& copy)
{
	if (this == &copy)
		return *this;
	this->target = copy.target;
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getIsSigned() == false)
		throw Form::UnsignedException();
	else if (executor.getGrade() > this->getGradeToExecute())
		throw Form::GradeTooLowException();

	std::ofstream stream((this->target + "_srubber").c_str());
    
	stream << 	"	       * 				\n"
			<< 	"          /|\\      	    \n"       
			<< 	"         /*|O\\			\n"
			<< 	"        /*/|\\*\\			\n"
			<< 	"       /X/O|*\\X\\			\n"
			<< 	"      /*/X/|\\X\\*\\		\n"
			<< 	"     /O/*/X|*\\O\\X\\		\n"
			<< 	"    /*/O/X/|\\X\\O\\*\\	\n"
			<< 	"   /X/O/*/X|O\\X\\*\\O\\	\n"
			<< 	"  /O/X/*/O/|\\X\\*\\O\\X\\	\n"
			<< 	"          |X|				\n"
			<< 	"          |X|				\n"    
			<< std::endl;
	stream.close();
}
