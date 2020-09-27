#pragma once
#include<string>
#include"Animal.h"
#include"Dogs.h"
using namespace std;

class Fox :public Dogs
{
private:
	int age;
public:
	Dogs Dog;
	Fox*mate;
public:
	Fox(string name, int age, string sex);
	Fox();
	virtual ~Fox();
public:
	void setAge(int age);
	int getAge() const;
public:
	virtual void talk();

};