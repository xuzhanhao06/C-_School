#pragma once
#include<iostream>
#include<string>
using namespace std;

class Grandpa
{
private :
	string name;
	string habit;
public:
	Grandpa(string name, string habit);
	Grandpa();
	virtual ~Grandpa();
public :
	void setName(string name);
	string getName() const;
	void setHabit(string habit);
	string getHabit() const;
public:
	virtual void like();

};