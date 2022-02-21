#include "Bureaucrat.hpp"

int main()
{
	try
	{
		std::cout << "Test1: ";
		Bureaucrat b1(666, "Lorphan");
		std::cout << b1 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		std::cout << "Test2: ";
		Bureaucrat b2(0, "Lorphan");
		std::cout << b2 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << "Test3: ";
		Bureaucrat b3(150, "Lorphan");
		b3.incrementGrade();
		std::cout << b3 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << "Test4: ";
		Bureaucrat b4(1, "Lorphan");
		b4.decrementGrade();
		std::cout << b4 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << "Test5: ";
		Bureaucrat b5(100, "Lorphan");
		b5.decrementGrade();
		b5.decrementGrade();
		b5.decrementGrade();
		std::cout << b5 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}