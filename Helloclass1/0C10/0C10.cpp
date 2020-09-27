#include "pch.h"
#include <iostream>
using namespace std;

int num111 = 0;//全局区
int main()
{
	

	int num = 90;//num 栈区
	double d_nums[6] = { 3,4,5,6, };//d_nums栈区

	double* darray = new double[10];
	//左边是栈区  右边是堆区80个字节空间



	//int num[5];				//固定空间
	//int* nums = new int[5];	//运行时才分配空间
	//cout << sizeof(num)<<" "<<sizeof(nums) << endl;


	//double score[]{ 11,22,33,44,55 };
	//double* ptr_score = score;
	//cout << ptr_score[3] << endl;


	/*
//引用  ： 指向常量的引用是非法的
	const int& refValue2=100;//如果在编程中确实有某个值保持不变，就应该明确使用const

	int int_value = 1024;
	//reValue 指向int_value,是int_value的另一个名字
	int& refValue = int_value;
	//错误：引用必须被初始化 int& refValue2;
*/

/*	double num = 3.14;
	double* ptr_num1 = &num;
	void* ptr_num2 = &num;//void* 类型不固定 所以不能修改地址 ；一般用来和别的指针比较 函数输入输出~ 赋值给另一个void 指针
	cout << boolalpha;
	cout << (ptr_num1 == ptr_num2) << endl;
*/


//	int* ptr1;//没赋值，-称“野指针”
//	int* ptr1 = nullptr;//等价于int*ptr1=0;
//	int* ptr2 = 0;		//直接将ptr2初始化为字面常量0
	//int* ptr3 = NULL;//等价于int* ptr3=0;
	//cout << ptr3 << endl;


	//char ch = 'a';
	//char* ptr_ch = &ch;
	//cout << (void *)ptr_ch << "\t" << *ptr_ch << endl;//(void *)任意类型的指针
	//

	/*double num = 1024.5;
	double* ptr_num = &num;
	cout << ptr_num << endl;
	cout << *ptr_num << endl;
*/

}

