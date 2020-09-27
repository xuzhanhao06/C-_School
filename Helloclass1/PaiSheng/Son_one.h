#pragma once
#include<iostream>
#include<string>
#include "Father_one.h"
using namespace std;

class Son_one :public Father_one
{
private:
	int age;
public:
	Son_one( string name,int age,string sex,string habit);
	Son_one();
	virtual ~Son_one();
public:
	void setAge(int age);
	int getAge() const;
public:
	virtual void like();
};