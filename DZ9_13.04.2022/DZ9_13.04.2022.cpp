#include <iostream>
#include "Inheritance.h"
int main()
{
	int length;
	std::cin >> length;
	auto flat1 = new apartment(1000000);
	auto flat2 = new apartment(2000000);
	auto flat3 = new apartment(3000000);
	auto car1 = new car(100000);
	auto car2 = new car(200000);
	auto dacha1 = new countyhouse(1500000);
	auto dacha2 = new countyhouse(2500000);

	auto arr = new prop * [length] { flat1, flat2, flat3, car1, car2, dacha1, dacha2 };
	for (int i = 0; i < length; i++)
	{
		arr[i]->taxes();
		std::cout << arr[i]->get_tax() << std::endl;
	}
	for (int i = 0; i < length; i++)
	{
		delete arr[i];
	}
	delete[] arr;
}