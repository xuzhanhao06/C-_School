#include "pch.h"
#include"nature.h"
#include"grass.h"
#include"plant.h"
#include<string>
#include <iostream>

grass::grass() :plant()
{
	rank = "";
}

grass::grass(int age, string name, string rank) : plant()
{
	//this->rank = rank;
	cout << "grass is constructed" << endl;
}

grass::~grass()
{
	cout <<  " is distroyed" << endl;
}

void grass::set_rank(string rank)
{
	this->rank = rank;
}

string grass::get_rank()const
{
	return rank;
}
