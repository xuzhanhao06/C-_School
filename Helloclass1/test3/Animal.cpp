#include "pch.h"
#include"Animal.h"
#include<iostream>
using namespace std;

Animal::Animal(string name)
{
	this->name = name;
}

Animal::Animal()
{
	name ="ANIMAL";
}

Animal::~Animal()
{
	cout << "Animal����������" << endl;
}


void Animal::setName(string name)
{
	this->name = name;
}
string Animal::getName() const
{
	return "������" + name;
}

void Animal::talk()
{
	cout << getName() << " is shouting,i have two children,four grandchildern" << endl;
}