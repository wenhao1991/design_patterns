#include "duck.h"
#include "weather_data.h"
#include "decorators.h"

void testDuck() {
	MallardDuck m = MallardDuck();
	m.display();
	m.performFly();
	m.performQuack();
	QuackBehavior* qb = new Squack();
	m.setQuackBehavior(qb);
	m.performQuack();
}

void testWeatherData() {
	Subject* w_obj = new WeatherData();
	Observer* o = new CurrentConditionsDisplay();
	w_obj->registerObserver(o);
	w_obj->setMeasurements(1, 2, 3);
	w_obj->setMeasurements(8, 8, 8);

}

void testDecorators() {
	Beverage* d = new DarkRoast();
	Beverage* milk = new Milk(d);
	Beverage* mocha = new Mocha(d);
	std::cout << milk->getDescription() << ',' << milk->cost() << std::endl;
	std::cout << mocha->getDescription() << ',' << mocha->cost() << std::endl;
	mocha = new Mocha(milk);
	std::cout << mocha->getDescription() << ',' << mocha->cost() << std::endl;
}

int main() {
	//testDuck();
	//testWeatherData();
	testDecorators();
}