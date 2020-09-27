#pragma once
#include<string>
#include"Animal.h"
using namespace std;

class Cats :public Animal
{
private:
	string sex;
public:
	Cats(string name, string sex);
	Cats();
	virtual ~Cats();
	void setSex(string sex);
	string getSex() const;
public:
	virtual void talk();
};