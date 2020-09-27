#include "pch.h"
#include"person age.h"
#include"student.h"
#include<string>
#include <iostream>

Student::Student() :Person()
{
	number = 0;
}

Student::Student(int age, string name, int number) : Person(age, name)
{
	this->number = number;
	cout << "student is constructed" << endl;
}

Student::~Student()  //xi gou han shu 
{
	cout << get_name() << " is distroyed" << endl;
}

void Student::set_number(int number)
{
	this->number = number;
}

int Student::get_number()const
{
	return number;
}

void Student::talk()
{
	cout << get_age() << " " << get_name() << " is listening" << endl;
}


//////////////////////////////////////////