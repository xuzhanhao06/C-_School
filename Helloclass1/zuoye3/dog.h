#pragma once
#include<string>
#include <iostream>
#include "animal.h"
//#include "dog.h"
class dog :public animal
{

private:
	string school;

public:
	dog();
	dog(string age, string name, string number, string school);
	~dog();
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
