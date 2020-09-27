#include "pch.h"
#include <iostream>
#include <string>
#include<vector>
#include<algorithm>//算法
using namespace std;

int main()
{
	vector<double>vecDouble = { 98.5,67.9,43.6,32.9 };
	//向数组中插入数字
	vecDouble.push_back(100.8);//在数组尾部插入一个数字
	//遍历1
	for(int i = 0; i < vecDouble.size();i++ )//size 返回数组大小元素
	{
		cout << vecDouble[i] << endl;	
	}
	//集合的通用遍历方法：使用迭代器 (interator)
	vector<double>::iterator it;//得到迭代器对象- 实际上是一个指针对象
	//从第一个元素开始迭代
	for (it = vecDouble.begin(); it!= vecDouble.end(); ++it)
	{
		cout <<  *it << endl;
	}
	
	cout <<endl;
	sort(vecDouble.begin(), vecDouble.end());//排序

	reverse(vecDouble.begin(), vecDouble.end());//逆序
	for (it = vecDouble.begin(); it != vecDouble.end(); ++it)
	{
		cout << *it << endl;
	}



	/*
   //使用二维数组
	string stu_names[]{ "刘备","关羽","张飞" };
	string course_names[]{ "语文","数学","英语" };
	const int ROW = 3; //行
	const int COL = 3; //列
	double scores[ROW][COL];
	for (int i = 0; i < ROW; i++)//外层循环控制学生
	{
		for (int j = 0; j < COL; j++)//内层控制课程
		{
			cout << stu_names[i] << "的" << course_names[j] << "成绩：";
			cin >> scores[i][j];
		}
	}
	//打印结果
	
	cout << "\t" ;
	for (int i = 0; i < COL; i++)
	{
		cout << course_names[i] << "\t";
	}
	cout << endl;
	for (int i = 0; i < ROW; i++)
	{
		cout << stu_names[i] << "\t";
		for (int j = 0; j < COL; j++)
		{
			cout << scores[i][j] << "\t" ;
		}
		cout <<  endl;
	}
	*/
}

