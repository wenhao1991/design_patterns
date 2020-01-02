#include "duck.h"
#include <iostream>

void DUCK::display() {
	std::cout << "DUCK display" << std::endl;
}

void DUCK::performQuack() {
	quackBehavior.quack();	// Ѽ�Ӷ������Դ������ɽУ�ί��quackBehavior����
}

void DUCK::performFly() {
	flyBehavior.fly();
}

MallardDuck::MallardDuck() {
	QuackBehavior quackBehavior = Quack();
	FlyBehavior flyBehavior = FlyWithWings();
}

void MallardDuck::display() {
	std::cout << "MallardDuck display" << std::endl;
}

void RedHeadDuck::display() {
	std::cout << "DUCK display" << std::endl;
}