#pragma once
#include<string>
#include"Animal.h"
#include"Cats.h"
using namespace std;

class Tiger :public Cats
{
private:
	string home;
public:
	Tiger(string name, string sex);
	Tiger();
	virtual ~Tiger();
public:
	virtual void talk();

};