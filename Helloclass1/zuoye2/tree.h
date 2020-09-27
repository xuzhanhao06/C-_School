#pragma once
#include"nature.h"
#include<string>
#include <iostream>
using namespace std;
class tree :public nature
{

private:
	string rank;

public:
	tree();
	tree(int age, string name, string rank);
	~tree();
	void set_rank(string rank);
	string get_rank()const;
	//virtual void talk();
	void research();
	void research(string title);
	void research(string title, int type);
	void research(int type, string title);
};