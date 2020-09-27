#pragma once
#include<string>
#include <iostream>
#include "plant.h"
class grass :public plant
{

private:
	string school;

public:
	grass();
	grass(string age, string name, string number, string school);
	~grass();
	void set_school(string school);
	string get_school()const;

	//	animal();
	//animal(string age, string name, string number);
	//~animal();
/*public:
	void set_number(string number);
	string get_number()const;*/
public:
	virtual void talk();
};
