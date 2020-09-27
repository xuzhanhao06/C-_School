#include "pch.h"
#include"Animal.h"
#include"Cats.h"
#include"Lion.h"
#include<iostream>
using namespace std;

Lion::Lion(string name, string sex, string home) :Cats(name, sex)
{
	this->home = home;

}

Lion::Lion() :Cats()
{

}

Lion::~Lion()
{
	cout << "Lion的析构函数" << endl;
}

void Lion::sethome(string home)
{
	this->home = home;
}
string Lion::gethome() const
{
	return home;
}

void Lion::talk()
{
	cout << "Cats_one " << getName() << getSex() << " 家乡" << gethome() << endl;
}