#pragma once
#include"nature.h"
#include"plant.h"
#include<string>
#include <iostream>
using namespace std;
class grass :public plant
{

private:
	string rank;

public:
	grass();
	grass(int age, string name, string rank);
	~grass();
	void set_rank(string rank);
	string get_rank()const;
	//virtual void talk();
	void research();
	void research(string title);
	void research(string title, int type);
	void research(int type, string title);
};