#include "pch.h"
#include"nature.h"
#include"plant.h"
#include<string>
#include <iostream>

plant::plant() :nature()
{
	//	number = 0;
}

plant::plant(string age, string name, string number) : nature(age, name)
{
	this->number = number;
	//	cout << "plant is constructed" << endl;
}

plant::~plant()  //xi gou han shu 
{
//	cout << " xi gou han shu " << endl;
}

void plant::set_number(string number)
{
	this->number = number;
}

string plant::get_number()const
{
	return  "  ��Ȥ��" + number;
}

void plant::talk()
{
	cout << "������2��" + get_age() << get_name() << get_number() << endl;
}