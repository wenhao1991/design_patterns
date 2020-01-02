#ifndef _DUCK_H_
#define _DUCK_H_

class DUCK
{
public:
	FlyBehavior flyBehavior;
	QuackBehavior quackBehavior;

	void performQuack();
	int swim();
	void display();
	void performFly();
};

class MallardDuck :public DUCK
{
public:
	MallardDuck();
	void display(); // 外观是绿头
};

class  RedHeadDuck
{
public:
	void display(); // 外观是红头

};

class FlyBehavior
{
public:
	void fly();
};

class FlyWithWings :public FlyBehavior
{
public:
	void fly();	// 实现鸭子飞行
};

class FlyNoWay :public FlyBehavior
{
public:
	void fly();	// 实现了不会飞的鸭子动作
};

class QuackBehavior
{
public:
	void quack();
};

class Quack :public QuackBehavior
{
public:
	void quack(); // 实现鸭子呱呱叫
};

class Squack :public QuackBehavior
{
public:
	void quack(); // 实现橡皮鸭子吱吱叫
};

class MuteQuack :public QuackBehavior
{
public:
	void quack(); // 不会叫
};
#endif // !_DUCK_H_

