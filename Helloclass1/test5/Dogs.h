#pragma once
#include<string>
#include"Animal.h"
using namespace std;

class Dogs :public Animal
{

public:
	virtual void talk();
};