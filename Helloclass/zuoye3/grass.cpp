#include "pch.h"
//#include"animal.h"
#include"grass.h"
//#include"nature.h"
#include<string>
#include <iostream>
using namespace std;
grass::grass() :plant()
{
	//	school = "0";
}

grass::grass(string age, string name, string number, string school):plant(age, name, number)
{
	this->school = school;
	//	cout << "grass is constructed" << endl;
}

grass::~grass()  //xi gou han shu 
{
	//	cout <<  "grass xi gou han shu " << endl;
}

void grass::set_school(string school)
{
	this->school = school;
}

string grass::get_school()const
{
	return   "  学校：" + school;
}

void grass::talk()
{
	cout << "儿子类2：" << get_age() << get_name() << get_number() << get_school() << endl;
}