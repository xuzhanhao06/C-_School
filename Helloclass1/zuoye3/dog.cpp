#include "pch.h"
//#include"animal.h"
#include"dog.h"
//#include"nature.h"
#include<string>
#include <iostream>
using namespace std;
dog::dog() :animal()
{
	//	school = "0";
}

dog::dog(string age, string name, string number, string school) : animal(age, name, number)
{
	this->school = school;
	//	cout << "dog is constructed" << endl;
}

dog::~dog()  //xi gou han shu 
{
	//	cout <<  "dog xi gou han shu " << endl;
}

void dog::set_school(string school)
{
	this->school = school;
}

string dog::get_school()const
{
	return   "  学校：" + school;
}

void dog::talk()
{
	cout << "儿子类1：" << get_age() << get_name() << get_number() << get_school() << endl;
}