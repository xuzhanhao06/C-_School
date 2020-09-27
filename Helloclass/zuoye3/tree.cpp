#include "pch.h"
//#include"animal.h"
#include"tree.h"
//#include"nature.h"
#include<string>
#include <iostream>
using namespace std;
tree::tree() :plant()
{
	//	school = "0";
}

tree::tree(string age, string name, string number, string school) : plant(age, name, number)
{
	this->school = school;
	//	cout << "tree is constructed" << endl;
}

tree::~tree()  //xi gou han shu 
{
	//	cout <<  "tree xi gou han shu " << endl;
}

void tree::set_school(string school)
{
	this->school = school;
}

string tree::get_school()const
{
	return   "  学校：" + school;
}

void tree::talk()
{
	cout << "儿子类2：" << get_age() << get_name() << get_number() << get_school() << endl;
}