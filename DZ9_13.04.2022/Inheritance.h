#ifndef INHERITANCE_H
#define INHERITANCE_H
#include <iostream>

class prop
{
	double worth;
	double tax;
public:
	prop();
	prop(double worth);
	double get_worth();
	void set_tax(double);
	double get_tax();
	virtual void taxes() = 0;
	virtual ~prop();
};

class apartment : public prop
{
public:
	apartment(double);
	void taxes() override;
	~apartment() override;
};

class car : public prop
{
public:
	car(double);
	void taxes() override;
	~car() override;
};

class countyhouse : public prop
{
public:
	countyhouse(double);
	void taxes() override;
	~countyhouse() override;
};

#endif //INHERITANCE_H