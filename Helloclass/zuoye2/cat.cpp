#include "pch.h"
#include"nature.h"
#include"animal.h"
#include"cat.h"
#include<string>
#include <iostream>


cat::cat() :animal()
{
	number = 0;
}

cat::cat(int age, string name, int number) : animal(age, name)
{
//	this->number = number;
	cout << "cat is constructed" << endl;
}
cat::~cat()  //xi gou han shu 
{
	cout <<  " is distroyed" << endl;
}
void animal::talk()
{
	cout << " " << " is listening animal" << endl;
}