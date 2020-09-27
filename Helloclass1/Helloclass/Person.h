#pragma once
#include<string>
using namespace std;
class Person
{
private:
	int age;
	string name;

public:
	 Person();
	 Person(int age, string name);
	 virtual ~Person();

public:
	 int get_age()const;
	 void set_age(int age);
	 string get_name()const;
	 void set_name(string name);

public:
	virtual void talk();
};


