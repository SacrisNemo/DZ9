#include <iostream>
#include "Inheritance.h"
int main()
{
	int length;
	std::cin >> length;
	prop** arr = new prop*[length];
	apartment* flat1 = new apartment(1000000);
	apartment* flat2 = new apartment(2000000);
	apartment* flat3 = new apartment(3000000);
	arr[0] = flat1;
	arr[1] = flat2;
	arr[2] = flat3;
	car* car1 = new car(100000);
	car* car2 = new car(200000);
	arr[3] = car1;
	arr[4] = car2;
	countyhouse* dacha1 = new countyhouse(1500000);
	countyhouse* dacha2 = new countyhouse(2500000);
	arr[5] = dacha1;
	arr[6] = dacha2;
	for (int i = 0; i < length; i++)
	{
		arr[i]->taxes();
		std::cout << arr[i]->get_tax() << std::endl;
	}
}