#include <iostream>
#include <stdint.h>

struct Data
{
	int a;

	Data(int n) : a(n)
	{}
};

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

int main()
{
	Data		*d = new Data(12);
	uintptr_t	serialized_d = serialize(d);
	Data		*d2 = deserialize(serialized_d);

	std::cout << "Original address = " << d << ", res = " << d->a << std::endl;
	std::cout << "Serialized address = " << serialized_d << std::endl;
	std::cout << "Deserialized address = " << d2 << ", res = " << d2->a << std::endl;
	delete d;
	return 0;
}