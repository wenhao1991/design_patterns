#include "duck.h"
#include "weather_data.h"

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

int main() {
	//testDuck();

	testWeatherData();
}