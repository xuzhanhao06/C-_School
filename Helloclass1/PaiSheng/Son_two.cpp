#include "pch.h"
#include<string>
#include "Son_two.h"
using namespace std;


Son_two::Son_two(string name, string sex, string habit,string school) :Father_one(name, sex, habit)
{
	this->school = school;

}

Son_two::Son_two() :Father_one()
{
	
}

Son_two::~Son_two()
{
	cout << "Son_two的析构函数" << endl;
}

void Son_two::setSchool(string school)
{
	this->school = school;
}
string Son_two::getSchool() const
{
	return school;
}





void Son_two::like()
{
	cout << "Son_two " << getName() << getSex() << " 学校" << getSchool() << " 兴趣 " << getHabit() << endl;
}