#include "pch.h"
#include"nature.h"
#include"tree.h"
#include"plant.h"
#include<string>
#include <iostream>

tree::tree() :nature()
{
	rank = "";
}

tree::tree(int age, string name, string rank) : nature(age, name)
{
	//this->rank = rank;
	cout << "tree is constructed" << endl;
}

tree::~tree()
{
	cout <<  " is distroyed" << endl;
}

/*void tree::set_rank(string rank)
{
//	this->rank = rank;
}
*/
string tree::get_rank()const
{
	return rank;
}
