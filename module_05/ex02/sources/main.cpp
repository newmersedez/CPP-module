#include "../headers/ShrubberyCreationForm.hpp"
#include "../headers/RobotomyRequestForm.hpp"
#include "../headers/PresidentialPardonForm.hpp"
#include "../headers/Bureaucrat.hpp"

int main()
{
	try
	{
		ShrubberyCreationForm	form1("Tree");
		RobotomyRequestForm		form2("Robot");
		PresidentialPardonForm	form3("President");

		Bureaucrat				man1(1, "John");
		
		form1.beSigned(man1);
		form1.execute(man1);

		form2.beSigned(man1);
		form2.execute(man1);

		form3.beSigned(man1);
		form3.execute(man1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}