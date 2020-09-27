#pragma once
#include<string>
#include <iostream>
using namespace std;
class nature
{
private:
	string age;
	string name;

public:
	nature();
	nature(string age, string name);
	virtual ~nature();

public:
	string get_age()const;
	void set_age(string age);
	string get_name()const;
	void set_name(string name);

public:
	virtual void talk();
};
