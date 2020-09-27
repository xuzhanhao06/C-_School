#pragma once
#include<iostream>
#include<string>
#include "Father_one.h"
using namespace std;

class Son_two :public Father_one
{
private:
	string school;
public:
	Son_two(string name,string sex, string habit,string school);
	Son_two();
	virtual ~Son_two();
public:
	void setSchool(string school);
	string getSchool() const;
public:
	virtual void like();
};