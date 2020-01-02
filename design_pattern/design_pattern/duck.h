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
	void display(); // �������ͷ
};

class  RedHeadDuck
{
public:
	void display(); // ����Ǻ�ͷ

};

class FlyBehavior
{
public:
	void fly();
};

class FlyWithWings :public FlyBehavior
{
public:
	void fly();	// ʵ��Ѽ�ӷ���
};

class FlyNoWay :public FlyBehavior
{
public:
	void fly();	// ʵ���˲���ɵ�Ѽ�Ӷ���
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
#endif // !_DUCK_H_

