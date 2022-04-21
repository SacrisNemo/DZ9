#include "Inheritance.h"

prop::prop()
{
	worth = 0;
	tax = 0;
}

prop::prop(double worth)
{
	this->worth = worth;
	tax = 0;
}

double prop::get_worth()
{
	return worth;
}

void prop::set_tax(double tax)
{
	this->tax = tax;
}

double prop::get_tax()
{
	return tax;
}

prop::~prop()
{
}

apartment::apartment(double worth) : prop(worth)
{

}

void apartment::taxes()
{
	set_tax(get_worth() / 1000);
}

apartment::~apartment()
{
}


car::car(double worth) : prop(worth)
{

}

void car::taxes()
{
	set_tax(get_worth()/200);
}

car::~car()
{
}

countyhouse::countyhouse(double worth) : prop(worth)
{

}

void countyhouse::taxes()
{
	set_tax(get_worth() / 500);
}

countyhouse::~countyhouse()
{
}
