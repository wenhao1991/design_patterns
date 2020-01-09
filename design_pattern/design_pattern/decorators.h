#ifndef _DECORATORS_H_
#define _DECORATORS_H_
#include <string>
#include <iostream>

class Beverage
{
public:
	Beverage();
	std::string description;
	virtual std::string getDescription();
	virtual float cost();
private:
	float base_cost;
};

Beverage::Beverage() {
	this->description = "Beverage desccription";
	this->base_cost = 1.0f;
}

std::string Beverage::getDescription() {
	//std::cout << this->description << std::endl;
	return this->description;
}

float Beverage::cost() {
	return 0;
}

class DarkRoast:public Beverage
{
public:
	DarkRoast();
	virtual float cost();

private:

};

DarkRoast::DarkRoast()
{
	this->description = "DarkRoast";
}

float DarkRoast::cost()
{
	return 0.50f;
}

class CondimentDeorator : public Beverage
{
public:
	CondimentDeorator();
};

CondimentDeorator::CondimentDeorator() {
	this->description = "CondimentDerator";
}

class Milk : public CondimentDeorator
{
public:
	Beverage *beverage;
	Milk(Beverage *beverage);
	virtual std::string getDescription();
	virtual float cost();

};

Milk::Milk(Beverage* beverage) {
	this->beverage = beverage;
}

std::string Milk::getDescription() {
	return beverage->getDescription() + ",Milk";
}

float Milk::cost() {
	return beverage->cost() + 0.10f;
}

class Mocha : public CondimentDeorator
{
public:
	Beverage* beverage;
	Mocha(Beverage* beverage);
	virtual std::string getDescription();
	virtual float cost();

};

Mocha::Mocha(Beverage* beverage) {
	this->beverage = beverage;
}

std::string Mocha::getDescription() {
	return beverage->getDescription() + ",Mocha";
}

float Mocha::cost() {
	return beverage->cost() + 0.22f;
}

#endif // !_DECORATORS_H_

