// SSC.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <algorithm>
#include <ctime>   //调用系统时间
#include <cstdlib> 
using namespace std;


int main()
{
	int x, y;
	srand(time(0));
	cout << "进入猜拳游戏：1是石头 2剪刀 3布 \n";
	while (true)
	{
		x = rand() % 3 + 1;
		cout << "请出拳\n";
		cin >> y;
		if (x==1)
		{
			if (y==1)
			{
				cout << "石头 平局\n" << endl;   //1是石头
			}
			else if (y == 2)
			{
				cout << "你输了 ，对方石头 你剪刀\n" << endl; //2剪刀
			}
			else if (y == 3)
			{
				cout << "你赢了 ，对方石头 你布\n" << endl; //3布
			}
			else if(y==0)
			{
				cout << "结束游戏\n" << endl;
				break;
			}
			else
			{
				cout << "无效重出\n";
			}
		}
		else if (x == 2)
		{
			if (y == 1)
			{
				cout << "你赢了 ，对方剪刀 你石头\n" << endl;   //1是石头
			}
			else if (y == 2)
			{
				cout << "平局 都是剪刀\n" << endl; //2剪刀
			}
			else if (y == 3)
			{
				cout << "你输了 ，对方剪刀 你布\n" << endl; //3布
			}
			else if (y == 0)
			{
				cout << "结束游戏\n" << endl;
				break;
			}
			else
			{
				cout << "无效重出\n";
			}
		}
		else if (x == 3)
		{
			if (y == 1)
			{
				cout << "你输了 ，对方布 你石头\n" << endl;   //1是石头
			}
			else if (y == 2)
			{
				cout << "你赢了 ，对方布 你剪刀\n" << endl; //2剪刀
			}
			else if (y == 3)
			{
				cout << "平局 都是布\n" << endl; //3布
			}
			else if (y == 0)
			{
				cout << "结束游戏\n" << endl;
				break;
			}
			else
			{
				cout << "无效重出\n";
			}
		}
	}
   
}








