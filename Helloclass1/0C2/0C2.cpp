
#include "pch.h"
#include <iostream>
#include<string>
using namespace std;
int main()
{
	//
	double price_kouis = 35000.0;
	double price_hemes = 11044.5;
	double price_chanel = 1535.0;
	double total = 0;//总价
	double  zhekou = 0;//折扣
	//如果总价大于5W就7折 ，否者9折
	//ruguo
	total = price_chanel + price_hemes + price_kouis;
	if (total > 50000)
	{
	//	total *= 0.7;
		zhekou = 0.7;
	}
	else
	{
	//	total *= 0.9;
		zhekou = 0.9;
	}
	total *= zhekou;
	cout << "最终付款："<< total << endl;
	/*
//使用程序判断用户输出的字符是否是合法的盘符
	char pan = '\0';//默认设置为空字符
	cin >> pan;
	//A~Z之间
//if(pan>=65&&pan<=65+25)
	if (pan >= 'A'&&pan <= 'Z')
	{
		cout << "合法" << endl;
	}
	else
	{
		cout << "NO legitimate" << endl;
	}
*/


	//cout << (4 & 5) << endl;//100 &101 =100 =(4)10
	//cout << (~2) << endl;//	按位非~
	//cout << (2 << 3) << endl;
/*
	cout << (~2) << endl;//	按位非~
	1.二进制取反  
	00000010	正数
反：11111101	负数
补：10000011	-3

	^异或  相同为假，不同为真
*/

/*
*	2<<3 
*	2左移三位 01   10000->2的四次方=16
*/

/*
*  sizeof(char)  //获取数据类型char占用空间大小 1 字节
*	sizeof("中文/0")字符串默认都会加个/0 ， 5个字节
*/

/*
	//bool
	cout << boolalpha;//将真假输出的0/1 变成flase/ture
	cout << "15>88嘛？" << (15 > 88) << endl;//	0
	cout << "15<99嘛？" << (15 < 99) << endl;//	1
*/

	////&&与 ； ||或  ；  ！非

/*
	int num = 1024;
	//符合运算 
	num += 90;  //等于num=num+90
	cout << num << endl;
*/
}


