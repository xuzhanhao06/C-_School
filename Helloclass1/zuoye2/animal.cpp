#include "pch.h"
#include"nature.h"
#include"animal.h"
#include<string>
#include <iostream>
/*
animal::animal() :nature()
{
	number = 0;
}

animal::animal(int age, string name, int number) : nature(age, name)
{
	//this->number = number;
	cout << "animal is constructed" << endl;
}

animal::~animal()  //xi gou han shu 
{
	cout <<  " is distroyed" << endl;
}

void animal::set_number(int number)
{
//	this->number = number;
}

int animal::get_number()const
{
	return number;
}

void animal::talk()
{
	cout << " "  << " is listening" << endl;
}
*/


//////////////////////////////////////////
animal::animal()
{
	//	age = 0;
	name = "animal";
}
animal::animal(int age, string name)
{
	//this->age = age;
	//this->name = name;
	cout << "nature is constructed" << endl;
}

animal::~animal()
{
	cout << "nature is distroyed" << endl;
}

void animal::talk()
{
	cout << " " << " is listening" << endl;
}