// DuoTai.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;





class Shape
{
public:
	virtual void  xs()
	{
		cout << " 这是Shape" << endl;
	}

};

class Cncle : public Shape
{
public:
	Cncle()
	{

	}
	void virtual xs()
	{
		cout << " 这是Cncle" << endl;
	}
};

class Rectong : public Shape
{
public:
	Rectong()
	{

	}
	void virtual xs()
	{
		cout << " 这是Cncle" << endl;
	}
};

void Draw_Shape(Shape& shape)
{
	shape.xs();
}

int main()
{
	Cncle c;

	Rectong r;
	Draw_Shape(c);
	Draw_Shape(r);
}