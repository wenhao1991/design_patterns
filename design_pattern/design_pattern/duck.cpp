#include "duck.h"
#include <iostream>

void DUCK::display() {
	std::cout << "DUCK display" << std::endl;
}

void DUCK::performQuack() {
	quackBehavior.quack();	// 鸭子对象不亲自处理呱呱叫，委托quackBehavior处理
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