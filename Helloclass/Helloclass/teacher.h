#pragma once
#include<string>
#include <iostream>
#include"student.h"
class Teacher :public Person
{

private:
	string rank;

public:
	Student student;
	Teacher* mate;

public:
	Teacher();
	Teacher(int age, string name, string rank);
	~Teacher();
	void set_rank(string rank);
	string get_rank()const;
	virtual void talk();
	void research();
	void research(string title);
	void research(string title, int type);
	void research(int type, string title);
};