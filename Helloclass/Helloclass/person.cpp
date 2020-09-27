#include "pch.h"
#include"person age.h"
#include<string>
#include <iostream>

using namespace std;

 Person::Person()
{
	age = 0;
	name = "";
}

 Person::Person(int age, string name)
{
	this->age = age;
	this->name = name;
	cout << "person is constructed" << endl;
}

 Person::~Person()
{
	//cout << "Person is distroyed" << endl;
}

int Person::get_age()const
{
	return age;
}

void Person::set_age(int age)
{
	if (age < 0)
	{
		cout << "ÄêÁäÎÞÐ§" << endl;
		return;
	}
	this->age++;
	this->age = age;
}

string Person::get_name()const
{

	return "mr." + name;
}

void Person::set_name(string name)
{
	this->name = name;
}

void Person::talk()
{
	cout << age << " " << name << " is talking" << endl;
}


////////////////////////////////////////////





/////////////////////////////////////////////////////


void person_talk(Person* p)
{
	p->talk();
}

void person_talk(Person& p)
{
	p.talk();
}
