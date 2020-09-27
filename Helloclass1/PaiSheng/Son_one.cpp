#include "pch.h"
#include<string>
#include "Son_one.h"
using namespace std;


Son_one::Son_one(string name,int age,string sex,string habit) :Father_one(name, sex,habit)
{
	this->age = age;

}

Son_one::Son_one() :Father_one()
{
	age = 0;
}

Son_one::~Son_one()
{
	cout << "Son_one的析构函数" << endl;
}

void Son_one::setAge(int age)
{
	this->age = age;
}
int Son_one::getAge() const
{
	return age;
}





void Son_one::like()
{
	cout << "Son_one " << getName()<<getSex() << " 年龄："<<getAge()<< " 兴趣 "<<getHabit()<<   endl;
}