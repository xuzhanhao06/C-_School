#pragma once
#include<string>
using namespace std;
class Animal {
private:
	string name;
public:
	Animal(string name);
	Animal();
	virtual ~Animal();

public:
	void setName(string name);
	string getName() const;

public:
	virtual void talk();

};