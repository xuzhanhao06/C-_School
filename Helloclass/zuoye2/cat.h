#pragma once
#include"nature.h"
#include"animal.h"
#include<string>
#include <iostream>
class cat :public animal
{

private:
	int number;

public:
	cat();
	cat(int age, string name, int number);
	~cat();
	void set_number(int number);
	int get_number()const;

//	virtual void talk();
};
