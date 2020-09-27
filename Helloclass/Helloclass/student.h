#pragma once
#include<string>
#include <iostream>
class Student :public Person
{

private:
	int number;

public:
	Student();
	Student(int age, string name, int number);
	~Student();
	void set_number(int number);
	int get_number()const;

	virtual void talk();
};