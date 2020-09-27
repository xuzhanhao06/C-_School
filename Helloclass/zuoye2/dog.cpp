#include "pch.h"
#include"nature.h"
#include"animal.h"
#include"dog.h"
#include<string>
#include <iostream>


dog::dog() :animal()
{
	number = 0;
}

dog::dog(int age, string name, int number) : animal(age, name)
{
	this->number = number;
	cout << "dog is constructed" << endl;
}dog::~dog()  //xi gou han shu 
{
	cout <<  " is distroyed dog" << endl;
}