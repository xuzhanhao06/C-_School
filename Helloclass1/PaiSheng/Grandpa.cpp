#include "pch.h"
#include <string>
#include "Grandpa.h"
using namespace std;

Grandpa::Grandpa(string name, string habit)
{
	this->name = name;
	this->habit = habit;
}

Grandpa::Grandpa()
{
	name = "name_chushihua";
	habit = "habit_chushihua";
}

Grandpa::~Grandpa()
{
	cout << "Grandpa����������" << endl;
}

void Grandpa::setName(string name)
{
	this->name = name;
}
string Grandpa::getName() const
{
	return "������"+name;
}

void Grandpa::setHabit(string habit)
{
	this->habit = habit;
}
string Grandpa::getHabit() const
{
	return "��Ȥ��" + habit;
}

void Grandpa::like()
{
	cout << getName() << " ϲ���Ķ����� " << getHabit() << endl;
}