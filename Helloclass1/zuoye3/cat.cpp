#include "pch.h"
//#include"animal.h"
#include"cat.h"
//#include"nature.h"
#include<string>
#include <iostream>
using namespace std;
cat::cat() :animal()
{
	//	school = "0";
}

cat::cat(string age, string name, string number, string school) : animal(age, name, number)
{
	this->school = school;
	//	cout << "cat is constructed" << endl;
}

cat::~cat()  //xi gou han shu 
{
	//	cout <<  "cat xi gou han shu " << endl;
}

void cat::set_school(string school)
{
	this->school = school;
}

string cat::get_school()const
{
	return   "  学校："+school;
}

void cat::talk()
{
	cout << "儿子类1：" << get_age() << get_name() << get_number() <<get_school()<< endl;
}