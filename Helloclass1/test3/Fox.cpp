#include "pch.h"
#include"Animal.h"
#include"Dogs.h"
#include"Fox.h"
#include<iostream>
using namespace std;

Fox::Fox(string name, int age, string sex) :Dogs(name,sex), Dog("1",0,0)
{
	this->age = age;

}

Fox::Fox() :Dogs()
{
	age = 0;
}

Fox::~Fox()
{
	cout << "FoxµÄÎö¹¹º¯Êý" << endl;
}

void Fox::setAge(int age)
{
	this->age = age;
}
int Fox::getAge() const
{
	return age;
}

void Fox::talk()
{
	cout << "DOGS_one " << getName() << getSex() << " age£º" << getAge() << endl;
}