#include "pch.h"
#include"Animal.h"
#include"Dogs.h"
#include"Wolf.h"
#include<iostream>
using namespace std;

Wolf::Wolf(string name, int age, string sex) :Dogs(name, sex)
{
	this->age = age;

}

Wolf::Wolf() :Dogs()
{
	age = 0;
}

Wolf::~Wolf()
{
	cout << "FoxµÄÎö¹¹º¯Êý" << endl;
}

void Wolf::setAge(int age)
{
	this->age = age;
}
int Wolf::getAge() const
{
	return age;
}

void Wolf::talk()
{
	cout << "DOGS_two " << getName() << getSex() << " age£º" << getAge() << endl;
}