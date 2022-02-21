#include "../headers/Bureaucrat.hpp"
#include "../headers/Form.hpp"

int main()
{
	try
	{
		Form	form1("rwq", 0, 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		Bureaucrat	b1(10, "lorphan");
		Bureaucrat	b2(140);
		Form		form1("form1", 10, 20);
		Form		form2("form2", 140, 20);

		std::cout << form2 << std::endl;
		b1.signForm(form2);
		b2.signForm(form1);
		b1.signForm(form1);
		std::cout << form1 << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat	b3(1);
		Form		form2("form3", 0, 20);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}