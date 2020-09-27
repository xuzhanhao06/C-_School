#pragma once
#include"nature.h"
#include<string>
#include <iostream>
using namespace std;
class dog :public animal
{

private:
	int number;

public:
	dog();
	dog(int age, string name, int number);
	~dog();
	void set_number(int number);
	int get_number()const;

//	virtual void talk();
};
