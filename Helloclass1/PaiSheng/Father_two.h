#pragma once
#include<iostream>
#include<string>
#include "Grandpa.h"
using namespace std;

class Father_two :public Grandpa
{
private:
	string sex;
	int height;
public:
	Father_two(string name, string sex, string habit,int height);
	Father_two();
	virtual ~Father_two();
	void setSex(string sex);
	string getSex() const;
	void setHeight(int height);
	int getHeight() const;
public:
	virtual void like();
};