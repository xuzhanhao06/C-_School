#include "pch.h"
#include"Animal.h"
#include"Dogs.h"
#include<iostream>
using namespace std;

Dogs::Dogs(string name, string sex) :Animal(name)
{
	this->sex = sex;

}
Dogs::Dogs()
{

}

Dogs::~Dogs()
{
	cout << "Dogs����������" << endl;
}

void Dogs::setSex(string sex)
{
	this->sex = sex;
}
string Dogs::getSex() const
{
	return " �Ա�" + sex;
}

void Dogs::talk()
{
	cout << getName() << " is shouting,i have two children" << endl;
}