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
	cout << "Father_one����������" << endl;
}


void Father_one::setSex(string sex)
{
	this->sex = sex;
}
string Father_one::getSex() const
{
	return " �Ա�" + sex;
}


void Father_one::like()
{
	cout << "Father_one "+getName() <<sex<<" ϲ���Ķ����� " << getHabit() << endl;
}