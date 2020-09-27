#pragma once
#include"nature.h"
#include<string>
#include <iostream>
using namespace std;
class plant :public nature
{

private:
	string rank;

public:
	plant();
	plant(int age, string name, string rank);
	~plant();
	void set_rank(string rank);
	string get_rank()const;
//	virtual void talk();
	void research();
	void research(string title);
	void research(string title, int type);
	void research(int type, string title);
};

/*
class tree
{
private:
	int age;
	string name;

public:
	tree();
	tree(int age, string name);
	virtual ~tree();

public:
	int get_age()const;
	void set_age(int age);
	string get_name()const;
	void set_name(string name);

public:
	virtual void talk();
};


class grass
{
private:
	int age;
	string name;

public:
	grass();
	grass(int age, string name);
	virtual ~grass();

public:
	int get_age()const;
	void set_age(int age);
	string get_name()const;
	void set_name(string name);

public:
	virtual void talk();
};
*/