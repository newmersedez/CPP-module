#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <iostream>

Base *generate(void)
{
	Base *p;

	srand(time(NULL));
	switch(rand() % 3)
	{
		case 0: p = new A; break;
		case 1: p = new B; break;
		case 2: p = new C; break;
	}
	return p;
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A class object" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B class object" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C class object" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A class object" << std::endl;
	}
	catch(...){}

	try
	{
		B& b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B class object" << std::endl;
	}
	catch(...){}

	try
	{
		C& c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "C class object" << std::endl;
	}
	catch(...) {}	
}
