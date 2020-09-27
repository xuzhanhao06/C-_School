#pragma once
#include<string>
#include"Animal.h"
using namespace std;

class Dogs :public Animal
{
private:
	string sex;
	int height;
public:
	Dogs(string name, string sex);
	Dogs();
	virtual ~Dogs();
	void setSex(string sex);
	string getSex() const;
	
public:
	virtual void talk();
};