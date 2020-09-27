#pragma once
#include<string>
#include <iostream>
#include "nature.h"
class animal :public nature
{

private:
	string number;
public:
	animal();
	animal(string age, string name, string number);
	~animal();
	void set_number(string number);
	string get_number()const;

	virtual void talk();
};
