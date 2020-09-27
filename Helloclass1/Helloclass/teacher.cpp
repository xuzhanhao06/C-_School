#include "pch.h"
#include"teacher.h"
#include<iostream>
#include"Person.h"
using namespace std;
Teacher::Teacher() :Person(), student(8, "abc ", 4)
{
	rank = "";
	//	this->student.set_age(0);
	//	this->student.set_name("");
	//	this->student.set_number(0);
}

Teacher::Teacher(int age, string name, string rank) : Person(age, name), student(0, " ", 0)
{
	this->rank = rank;
	mate = new Teacher();
	cout << "teacher is constructed" << endl;
	delete mate;


}
Teacher::~Teacher()
{
	cout << get_name() << " is distroyed" << endl;
}

void Teacher::set_rank(string rank)
{
	this->rank = rank;
}

string Teacher::get_rank()const
{
	return rank;
}

void Teacher::talk()
{
	cout << get_age() << " " << get_name() << " is teaching" << endl;
}

void Teacher::research()
{
	cout << get_name() << " is researching" << endl;
}

void Teacher::research(string title)
{
	cout << get_name() << " is researching " << title << endl;
}

void Teacher::research(string title, int type)
{
	cout << get_name() << " is researching " << title << " " << type << endl;
}

void Teacher::research(int type, string title)
{
	cout << get_name() << " is researching " << type << " " << title << endl;
}