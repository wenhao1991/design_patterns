#ifndef _DUCK_H_
#define _DUCK_H_

class FlyBehavior
{
public:
	virtual void fly();
};

class FlyWithWings :public FlyBehavior
{
public:
	virtual void fly();	// ʵ��Ѽ�ӷ���
};

class FlyNoWay :public FlyBehavior
{
public:
	virtual void fly();	// ʵ���˲���ɵ�Ѽ�Ӷ���
};

class QuackBehavior
{
public:
	void quack();
};

class Quack :public QuackBehavior
{
public:
	void quack(); // ʵ��Ѽ�����ɽ�
};

class Squack :public QuackBehavior
{
public:
	void quack(); // ʵ����ƤѼ��֨֨��
};

class MuteQuack :public QuackBehavior
{
public:
	void quack(); // �����
};

class DUCK
{
public:
	FlyBehavior *flyBehavior;
	QuackBehavior quackBehavior;

	void performQuack();
	void swim();
	void display();
	void performFly();
};

class MallardDuck :public DUCK
{
public:
	MallardDuck();
	void display(); // �������ͷ
};

class  RedHeadDuck
{
public:
	void display(); // ����Ǻ�ͷ

};

#endif // !_DUCK_H_
