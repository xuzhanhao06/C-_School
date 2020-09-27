#pragma once
#include"nature.h"
#include<string>
#include <iostream>
using namespace std;
class nature
{
private:
	int age;
	string name;

public:
	nature();
	nature(int age, string name);
	virtual ~nature();

public:
	int get_age()const;
	void set_age(int age);
	string get_name()const;
	void set_name(string name);

public:
	virtual void talk();
};
