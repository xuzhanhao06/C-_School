#pragma once
#include<string>
#include"Animal.h"
#include"Cats.h"
using namespace std;

class Tiger :public Cats
{

public:
	string name;
public:
	virtual void talk();
};