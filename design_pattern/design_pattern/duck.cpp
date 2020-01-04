#include "duck.h"
#include <iostream>

void QuackBehavior::quack() {
	std::cout << "QuackBehavior quack" << std::endl;
}

void Quack::quack() {
	std::cout << "Quack quack" << std::endl;
}

void Squack::quack() {
	std::cout << "Squack quack" << std::endl;
}

void MuteQuack::quack() {
	std::cout << "MuteQuack quack" << std::endl;
}

void FlyBehavior::fly() {
	std::cout << "FlyBehavior fly" << std::endl;
}

void FlyWithWings::fly() {
	std::cout << "FlyWithWings fly" << std::endl;
}

void FlyNoWay::fly() {
	std::cout << "FlyNoWay fly" << std::endl;
}

void DUCK::display() {
	std::cout << "DUCK display" << std::endl;
}

void DUCK::performQuack() {
	quackBehavior.quack();	// 鸭子对象不亲自处理呱呱叫，委托quackBehavior处理
}

void DUCK::performFly() {
	flyBehavior->fly();
}


MallardDuck::MallardDuck() {
	flyBehavior = new FlyWithWings();
	flyBehavior->fly();
}

void MallardDuck::display() {
	std::cout << "MallardDuck display" << std::endl;
}

void RedHeadDuck::display() {
	std::cout << "DUCK display" << std::endl;
}