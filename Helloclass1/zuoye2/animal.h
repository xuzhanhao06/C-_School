#pragma once
#include"nature.h"
#include<string>
#include <iostream>
using namespace std;
class animal :public nature
{

private:
	int number;
	string name;//11
public:
	
	animal();
	animal(int age, string name, int number);
	~animal();
	void set_number(int number);
	int get_number()const;

	animal(int age, string name);

	virtual void talk();
public:

	//void set_name(string name);
};

/*
class cat
{
private:
	int age;
	string name;

public:
	cat();
	cat(int age, string name);
	virtual ~cat();

public:
	int get_age()const;
	void set_age(int age);
	string get_name()const;
	void set_name(string name);

public:
	virtual void talk();
};


class dog
{
private:
	int age;
	string name;

public:
	dog();
	dog(int age, string name);
	virtual ~dog();

public:
	int get_age()const;
	void set_age(int age);
	string get_name()const;
	void set_name(string name);

public:
	virtual void talk();
};*/