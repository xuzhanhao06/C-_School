// zdc10000.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
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
	int i = rand() % 10001;
	int n=0,m=10000;
	int k;
//	cout << "please Guss:" << endl;
//	cin >> n;
//	n = 5000;
	
	part1:
	while (true)
	{

		if (i == (n+m)/2)
		{
			cout << "猜对了！YOU are GOOD" ;
			cout << i << endl;
			break;
		}
		else if (i<(m+n)/2)
		{
//			n = (10000 - i) / 2;
//			n = 10000-(n / 2);
//			cout << "猜大了large:\n";
//			cout << n << endl;
////			cout << "系统数字"<<i << endl;
	//		n = n / 2;
//			cin >> k;
			m = m + n / 2;
			cout << "当前位置"<<m<<endl;
			if(k=1)
			{
				cout << "1 or 0\n";
				goto part1;
			}
			else
			{
				break;
			}
//			cin >> n;
			
			return 0;
		}
		else if ( n < i )
		{
			n = (10000-n)/2+n;
	//		n = 10000 - (n / 2);
			cout << "猜小了:\n";
//			cin >> n;
			cout << n << endl;
			cout << i << endl;
			
		}
		cin >> k;
		if (k = 1)
		{
			cout << "1 or 0\n";
			goto part1;
		}
		else
		{
			break;
		}
		return 0;
	}
}
