#include "pch.h"
#include"nature.h"
#include<string>
#include <iostream>

using namespace std;

nature::nature()
{
//	age = 0;
//	name = "";
}

nature::nature(string age, string name)
{
	this->age = age;
	this->name = name;
	
/	cout << "������" << endl;
}

nature::~nature()
{
//	cout << "nature����������" << endl;
}
///////////////////////////////////////////////////
string nature::get_age()const
{
	return "���䣺"+age;
}

void nature::set_age(string age)
{
	this->age = age;
}
//////////////////////////////////////////////////
string nature::get_name()const
{
	return "  ������" + name;
}

void nature::set_name(string name)
{
	this->name = name;
}
/////////////////////////////////////////////////
void nature::talk()
{
	//cout << get_name()  << endl;
}
////////////////////////////////
void nature_talk(nature* p)
{
	p->talk();
}

void nature_talk(nature& p)
{
	p.talk();
}
