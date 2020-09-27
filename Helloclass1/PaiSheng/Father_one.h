#pragma once
#include<iostream>
#include<string>
#include "Grandpa.h"
using namespace std;

class Father_one:public Grandpa
{
private :
	string sex;
public:
	Father_one(string name,string sex,string habit);
	Father_one();
	virtual ~Father_one();
	void setSex(string sex);
	string getSex() const;
public:
	virtual void like();
};