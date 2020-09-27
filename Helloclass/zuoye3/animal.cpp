#include "pch.h"
#include"nature.h"
#include"animal.h"
#include<string>
#include <iostream>

animal::animal() :nature()
{
//	number = 0;
}

animal::animal(string age, string name, string number) : nature( age, name)
{
	this->number=number;
//	cout << "animal is constructed" << endl;
}

animal::~animal()  //xi gou han shu 
{
//	cout <<  " xi gou han shu " << endl;
}

void animal::set_number(string number)
{
	this->number= number ;
}

string animal::get_number()const
{
	return  "  ĞËÈ¤£º"+number;
}

void animal::talk()
{
	cout <<"¸¸Ç×Àà1£º"+get_age() << get_name()<<get_number() << endl;
}