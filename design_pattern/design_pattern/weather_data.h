#ifndef _WEATHER_DATA_H_
#define _WEATHER_DATA_H_
#include <vector>
#include <list>
#include <iostream>

class Observer
{
public:
	virtual void update(float temp, float humidity, float pressure);
};

void Observer::update(float temp, float humidity, float pressure) {

}

class Subject
{
public:
	~Subject();
	std::list<Observer*> obs;
	void registerObserver(Observer *o);
	void removeObserver(Observer *o);
	virtual void notifyObservers();
	virtual void setMeasurements(float t, float h, float p);
	
};

Subject::~Subject() {
	for (Observer* itor : obs) {
		delete itor;
	}
}

void Subject::setMeasurements(float t, float h, float p) {
	std::cout << "Subject::setMeasurements" << std::endl;
}

void Subject::registerObserver(Observer* o) {
	obs.push_back(o);
}

void Subject::removeObserver(Observer* o) {
	obs.remove(o);
}

void Subject::notifyObservers() {
	std::cout << "Subject::notifyObservers" << std::endl;
}

class WeatherData:public Subject
{
public:
	virtual void notifyObservers();
	void measurementsChanged();
	virtual void setMeasurements(float t, float h, float p);
private:
	float temperature;
	float humidity;
	float pressure;

};

void WeatherData::notifyObservers (){
	std::cout << "WeatherData::notifyObservers" << std::endl;
	for (Observer* itor : obs) {
		itor->update(temperature, humidity, pressure);
	}
}

void WeatherData::measurementsChanged() {
	notifyObservers();
}

void WeatherData::setMeasurements(float t, float h, float p) {
	this->temperature = t;
	this->humidity = h;
	this->pressure = p;
	measurementsChanged();
}

class DisplayElements
{
public:
	virtual void display();

private:

};

void DisplayElements::display() {
	std::cout << "DisplayElements::display" << std::endl;
}

class CurrentConditionsDisplay : public Observer, public DisplayElements{
private:
	float temperature = 0;
	float humidity = 0;
	float pressure = 0;
public:
	virtual void update(float temp, float humidity, float pressure);
	void display();
};


void CurrentConditionsDisplay::update(float temp, float humidity, float pressure) {
	this->temperature = temp;
	this->humidity = humidity;
	this->pressure = pressure;
	display();
}

void CurrentConditionsDisplay::display() {
	std::cout << "==========CurrentConditionsDisplay::display==========" << std::endl;
	std::cout << "========== temperature:" << this->temperature << "==========" << std::endl;
	std::cout << "========== humidity:" << this->humidity << "==========" << std::endl;
	std::cout << "========== pressure:" << this->pressure << "==========" << std::endl;
	std::cout << "==========CurrentConditionsDisplay::display end======" << std::endl;

}


#endif // !_WEATHER_DATA_H_
