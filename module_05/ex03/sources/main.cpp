#include "../headers/ShrubberyCreationForm.hpp"
#include "../headers/RobotomyRequestForm.hpp"
#include "../headers/PresidentialPardonForm.hpp"
#include "../headers/Bureaucrat.hpp"
#include "../headers/Intern.hpp"

int main()
{
	try
	{
		Intern	intern;
		Form*	form1 = intern.makeForm("robotomy", "robot");
		Form*	form2 = intern.makeForm("shrubbery", "tree");
		Form*	form3 = intern.makeForm("presidential", "target");

		Bureaucrat				man1(4, "JOHN");
		
		form1->beSigned(man1);
		form1->execute(man1);

		form2->beSigned(man1);
		form2->execute(man1);

		form3->beSigned(man1);
		form3->execute(man1);

		Form*	form4 = intern.makeForm("hmm", "aaaaaa");
		(void)form4;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}