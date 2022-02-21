#include "../headers/Intern.hpp"

Intern::Intern()
{}

Intern::Intern(const Intern& copy)
{
	(void)copy;
}

Intern::~Intern()
{}

const char* Intern::FormCreateException::what() const throw()
{
	return "Can`t create form.";
}

Intern& Intern::operator=(const Intern& copy)
{
	if (this == &copy)
		return *this;
	return *this;
}

Form *Intern::makeForm(const std::string& name, const std::string target)
{
	int	i = 0;
    std::string types[3] = { "robotomy", "shrubbery ", "presidential" };

    for (i = 0; i < 3; i++)
	{
        if (types[i].find(name) != std::string::npos)
			break;
	}
    switch (i)
    {
		case 0: 
			std::cout << "Intern creates " << name << std::endl;
			return (new RobotomyRequestForm(target));
		case 1: 
			std::cout << "Intern creates " << name << std::endl;
			return (new ShrubberyCreationForm(target));
		case 2:
			std::cout << "Intern creates " << name << std::endl;
			return (new PresidentialPardonForm(target));
		default:
			throw Intern::FormCreateException();
			return NULL;
	}
    return NULL;
}
