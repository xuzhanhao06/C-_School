#include "pch.h"
#include<string.h>
#include <iostream>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

//数组栈的使用  2019 05 23 日
stack<int > is;
queue<int> qu;
vector<int>ve;
void Sta(int *nums);//栈
void Que(int* nums);//队列
void Vec(int* nums);

int main()
{
	int nums[] = { 9,5,2,3,6,8 };
	Sta( nums );//栈
	Que(nums);//队列
	Vec(nums);//容器
}
/************************************************************************************/
void Vec(int* nums)
{
	cout << "vector:" << endl;
	for (int i = 0; i < 6; i++)
	{
		ve.push_back(nums[i]);
	}

/*	for (int n : ve)//遍历容器
	{
		cout << n << " ";
	}*/
	cout << "正序" ;
	for(int i=0;i<6;i++)
	{
		cout << *(ve.data()+i) << " "; //ve.data()指向第一个元素	
	}
	cout << endl;
	cout << "逆序";
	while (!ve.empty())
	{
		cout << ve.back() << " "; //访问最后一个元素
		ve.pop_back();//移除末元素
	}
	cout << endl;
}
/************************************************************************************/
void Que(int* nums)//队列
{
	cout << "队:";
	for (int i = 0; i < 6; i++)
	{
		qu.push(nums[i]);
	}
	while (!qu.empty())
	{
		cout << qu.front()<<" " ;
		qu.pop();
	}
	cout << endl;
}
/************************************************************************************/
void Sta(int* nums )//栈
{
	cout << "栈:";
	for (int i = 0; i < 6; i++)
	{
		is.push(nums[i]);
	}

	while (!is.empty())
	{
		cout << is.top() << " ";
		is.pop();
	}
	cout << endl;
}
