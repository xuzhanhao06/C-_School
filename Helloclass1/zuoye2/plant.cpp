#include "pch.h"
#include"nature.h"
#include"plant.h"
#include<string>
#include <iostream>


plant::plant() :nature()
{
	rank = "";
}

plant::plant(int age, string name, string rank) : nature(age, name)
{
	//this->rank = rank;
	cout << "plant is constructed" << endl;
}

plant::~plant()
{
	cout << " is distroyed" << endl;
}
/*
void plant::set_rank(string rank)
{
	this->rank = rank;
}*/

string plant::get_rank()const
{
	return rank;
}
/*
void plant::talk()
{
	cout<< get_name() << " is teaching" << endl;
}

void plant::research()
{
	cout << get_name() << " is researching" << endl;
}

void plant::research(string title)
{
	cout << get_name() << " is researching " << title << endl;
}

void plant::research(string title, int type)
{
	cout << get_name() << " is researching " << title << " " << type << endl;
}

void plant::research(int type, string title)
{
	cout << get_name() << " is researching " << type << " " << title << endl;
}*/

/*
plant::plant(int age, string name, string rank) : nature(age, name)
{
	//this->rank = rank;
	cout << "plant is constructed" << endl;
}


plant::~plant()
{
	cout << "nature is distroyed" << endl;
}
*/