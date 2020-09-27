#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	//打印7月份日历
	//1.定义变量
	int day = 31; //31天
	int dayofWeek = 2;
	cout << "周一\t周二\t周三\t周四\t周五\t周六\t周日\t" << endl;
	//打印\t  周几-1
	for (int i = 0; i < dayofWeek -1; i++)//\t  number
	{
		cout << "\t";
	}
	for (int i = 1; i < day; i++)
	{
		cout <<i ;
		if ((i + dayofWeek-1) % 7==0)
		{
			cout << "\n";
		}
		else
		{
			cout << "\t";

		}
	}


	//2.书写循环
	//3.填补循环条件

   
}


