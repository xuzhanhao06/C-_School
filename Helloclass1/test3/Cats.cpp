#include "pch.h"
#include"Animal.h"
#include"Cats.h"
#include<iostream>
using namespace std;

Cats::Cats(string name, string sex) :Animal(name)
{

	this->sex = sex;

}
Cats::Cats()
{

}

Cats::~Cats()
{
	cout << "Cats的析构函数" << endl;
}

void Cats::setSex(string sex)
{
	this->sex = sex;
}
string Cats::getSex() const
{
	return " 性别：" + sex;
}

void Cats::talk()
{
	cout << getName() << " is shouting,i have two children" << endl;
}