#include "pch.h"
#include"Animal.h"
#include"Cats.h"
#include"Tiger.h"
#include<iostream>
using namespace std;

Tiger::Tiger(string name, string sex) :Cats(name, sex)
{
	this->home = home;

}

Tiger::Tiger() :Cats()
{

}

Tiger::~Tiger()
{
	cout << "TigerµÄÎö¹¹º¯Êý" << endl;
}


void Tiger::talk()
{
	cout << "Cats_two " << getName() << getSex() << endl;
}