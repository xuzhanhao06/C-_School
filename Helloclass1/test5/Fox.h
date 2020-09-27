#pragma once
#include<string>
#include"Animal.h"
#include"Dogs.h"
using namespace std;

class Fox :public Dogs
{

public:
	string name;

	virtual void talk();
};