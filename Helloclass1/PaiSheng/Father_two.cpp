#include "pch.h"
#include<string>
#include "Father_two.h"
#include "Grandpa.h"
using namespace std;


Father_two::Father_two(string name, string sex, string habit,int height) :Grandpa(name, habit)
{
	//cout << name << sex << habit << endl;
	this->sex = sex;
	this->height = height;

}
Father_two::Father_two()
{

}



Father_two::~Father_two()
{
	cout << "Father_two����������" << endl;
}


void Father_two::setSex(string sex)
{
	this->sex = sex;
}
string Father_two::getSex() const
{
	return " �Ա�" + sex;
}

void Father_two::setHeight(int height)
{
	this->sex = sex;
}
int Father_two::getHeight() const
{
	return height;
}



void Father_two::like()
{
	cout << "Father_two " + getName() << sex << " ϲ���Ķ����� " << getHabit() << endl;
}