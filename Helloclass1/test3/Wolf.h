#pragma once
#include<string>
#include"Animal.h"
#include"Dogs.h"
using namespace std;

class Wolf :public Dogs
{
private:
	int age;
public:
	Wolf(string name, int age, string sex);
	Wolf();
	virtual ~Wolf();
public:
	void setAge(int age);
	int getAge() const;
public:
	virtual void talk();

};