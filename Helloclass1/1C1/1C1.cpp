
#include "pch.h"
#include <iostream>
using namespace std;
//指针实战
int main()
{
/*----------------------------------------------------------------*/
//小结：
	int num = 4;
	int* p = &num;
	*p = 112;
	cout << num << endl;  //num值为112；

	const int& num = 89;
//int& num不能直接赋值给常量，需要const
/*----------------------------------------------------------------*/
/*
	//一维  int* p=new int[10];
	//使用指针创建二维数组
	int (*p2)[3] = new int[5][3];
	//		将二维数组看成5个一维数组
	//		两个[3]	要匹配，，，
	//(*p2) 二维数组的一维 降维操作

	p2[3][2] = 998;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
		{
		//	cout << p2[i][j] <<" "<< endl;
			cout << *(*(p2 + i) + (j) ) << endl;
		}
		cout <<  endl;
	}
*/
/*----------------------------------------------------------------*/
/* 数组内 数字对调~
	int arrays[]{ 15,23,30,40,50,60 };
	int* ptr_start = arrays;
	int* ptr_end = arrays + 5;
	int temp;
	while (ptr_start <ptr_end)
	{
		temp = *ptr_start;
		*ptr_start = *ptr_end;
		*ptr_end = temp;
		ptr_start++;
		ptr_end--;
	}
	for (int i = 0; i < 6; i++)
	{
		cout << arrays[i] << endl;
	}
*/

/* //指针输出数组注意问题
	int arrays[]{ 15,23,30,40,50 };
	int* p_arrays = arrays;
	for (int i = 0; i < 5; i++)
	{
		cout << (*p_arrays+i) << endl;
		//指针不要贸然移动，若是移动了要进行初始化
		//*p_arrays++ 移动了指针
	}
*/

}

