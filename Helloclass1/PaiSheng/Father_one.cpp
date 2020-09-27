#include "pch.h"
#include<string>
#include "Father_one.h"
#include "Grandpa.h"
using namespace std;


Father_one::Father_one(string name,string sex,string habit):Grandpa(name,habit)
{
	
	this->sex = sex;
	
}
Father_one::Father_one()
{

}



Father_one::~Father_one()
{
	cout << "Father_one的析构函数" << endl;
}


void Father_one::setSex(string sex)
{
	this->sex = sex;
}
string Father_one::getSex() const
{
	return " 性别：" + sex;
}


void Father_one::like()
{
	cout << "Father_one "+getName() <<sex<<" 喜欢的东西是 " << getHabit() << endl;
}