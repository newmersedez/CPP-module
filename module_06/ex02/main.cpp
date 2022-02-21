#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <unistd.h>

int main()
{
	Base *p1 = generate();
	Base &p2 = *p1;

	identify(p1);
	identify(p2);

	delete p1;
	return 0;
}
