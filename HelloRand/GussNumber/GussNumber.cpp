// GussNumber.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <algorithm>
#include <ctime>   //调用系统时间
#include <cstdlib> 
using namespace std;


int main()
{
	srand(time(0));
	int i = rand() % 101;
	int n;
	cout << "please Guss:" << endl;
	cin >> n;
	while (true)
	{

		if (i==n)
		{
			cout << "猜对了！YOU are GOOD"<< endl;
			return 0;
		}
		else if (n>i)
		{
			cout << "猜大了large:";
			cin >> n;
		}
		else
		{
			cout << "猜小了:";
			cin >> n;
		}
	}
}
