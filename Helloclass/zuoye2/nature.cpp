#include "pch.h"
#include"nature.h"
#include"animal.h"
#include"plant.h"
#include"cat.h"
#include"dog.h"
#include"grass.h"
#include"tree.h"
#include<string>
#include <iostream>

using namespace std;

nature::nature()
{
	age = 0;
	name = "";
}

nature::nature( int age,string name)
{
	this->age = age;
	this->name = name;
	cout << "nature is constructed" << endl;
}

nature::~nature()
{
	cout << "nature is distroyed" << endl;
}

int nature::get_age()const
{
	return age;
}

void nature::set_age(int age)
{
	if (age < 0)
	{
		cout << "ÄêÁäÎÞÐ§" << endl;
		return;
	}
	this->age++;
	this->age = age;
}

string nature::get_name()const
{

	return "mr." + name;
}

void nature::set_name(string name)
{
	this->name = name;
}

void nature::talk()
{
	cout << age << " " << name << " is talking" << endl;
}


////////////////////////////////////////////





/////////////////////////////////////////////////////

/*
void nature_talk(nature* p)
{
	p->talk();
}

void nature_talk(nature& p)
{
	p.talk();
}
*/


/*
nature::nature()
{
//	age = 0;
	name = "";
}

nature::nature(int age, string name)
{
	//this->age = age;
	this->name = name;
	cout << "nature is constructed" << endl;
}

nature::~nature()
{
	cout << "nature is distroyed" << endl;
}
*/