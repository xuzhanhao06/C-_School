#include "pch.h"
#include"student.h"
#include"Person.h"
#include<iostream>
using namespace std;
Student::Student() :Person()
{
	number = 0;
}

Student::Student(int age, string name, int number) : Person(age, name)
{
	this->number = number;
	cout << "student is constructed" << endl;
}

Student::~Student()
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