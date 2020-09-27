#include "pch.h"
#include <iostream>
#include <windows.h>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;


int main()
{		
	int num1 = -5, num2 = 2;
//	cout << num1 / num2 << endl;
//	cout << num1 % num2 << endl;//取模 符号匹配第一个操作数  a
	//取模的场景
	//1.取数字的个位  1234%10  =4
	//2.   45填是一个月零几天  45%30 

	num1 = (num2++) - (--num2);

/*	 (num2++)是3  但是运算时是2  ，
*	(--num2)=（--3）=2
*	所以 2-2=0
*num1 =0
*num2 =2
*
*/	
	cout << num1 <<"\t"<< num2 << endl;

/*	double num3 = (double) num1 / num2;//num1 , num2为整形
				//(double)强制转换
	cout << num3 << endl;
*/

//	//设置控制台标题
////	SetConsoleTitle("s");
///**伤害*/
//	double value_attack1 = 57.88;
//	double value_attack2 = 57.88;
//	double value_attack3 = 57.88;
//
//	cout << left;			//左对齐
//	cout << setfill('*');	//默认用*填充;
//	cout << setw(8) << value_attack1 <<
//			setw(8) << value_attack2 <<
//			setw(8) << value_attack3 << endl;
//
////	cout << '/a' << endl;  //蜂鸣
//
///*    sizeof 测量数据类型长度
//	cout << sizeof(double)<<endl;
//	cout << sizeof(long double) << endl;
//	cout << sizeof(3.14f) << endl;
//*/
//	//数据类型别名 typedef

}
