#include "duck.h"

void testDuck() {
	MallardDuck m = MallardDuck();
	m.display();
	m.performFly();
	m.performQuack();
	QuackBehavior* qb = new Squack();
	m.setQuackBehavior(qb);
	m.performQuack();
}

int main() {
	testDuck();
}