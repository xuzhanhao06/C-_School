#pragma once
#include<string>
#include <iostream>
#include "nature.h"
class plant :public nature
{

private:
	string number;

public:
	plant();
	plant(string age, string name, string number);
	~plant();
	void set_number(string number);
	string get_number()const;

	virtual void talk();
};
