#pragma once
#include<string>
#include"Animal.h"
#include"Cats.h"
using namespace std;

class Lion :public Cats
{
private:
	string home;
public:
	Lion(string name, string sex, string school);
	Lion();
	virtual ~Lion();
public:
	void sethome(string home);
	string gethome() const;
public:
	virtual void talk();

};