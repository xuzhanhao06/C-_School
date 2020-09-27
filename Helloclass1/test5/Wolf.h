#pragma once
#include<string>
#include"Animal.h"
#include"Dogs.h"
using namespace std;

class Wolf :public Dogs
{

public:
	string name;
public:
	virtual void talk();
};