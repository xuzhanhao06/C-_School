#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;

double square(double x)
{
	return x * x;
}

void print(double t)
{
	cout << square(t) << endl;
}

int main()
{
	typedef int qq;
	qq st = 123;
	const float million = 1000000;

//	cout << fixed;//下面的double变固定成浮点数输出，若是科学计数法会自动转成数字显示
//	cout<<setprecision(2);//控制输出 后面 2 位小数
	cout << fixed << setprecision(2);

	double doubleNUM = 100.0 / 3.0;
	cout <<"|"<<setw(8)<<3.14<<"|" << endl;//setw(8)将前面的设置为8歌宽度


	cout << doubleNUM  << endl;
	cout << doubleNUM *million<< endl;
	cout << endl;
	cout << endl;
	cout << st << endl;
	cout << INT_MAX << endl;
	cout << INT_MIN << endl;

	print(1.23);
	 
 	cin.get(); //会暂停 输入一个字符
	getchar();//得到用户输入单个字符
}
