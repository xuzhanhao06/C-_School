#include"pch.h"
#include<iostream>
using namespace std;

void Output()
{
	int n, s;
	cin >> n;
	int*a = new int[n];//开辟n个整形空间，并将整形a的指针指向n个空间的开始处
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		a[i] = s;//将s赋值给a的i个
	}
	for (int i = 0; i < n;i++)
	{
		cout << a[i] << " ";
	}
	delete[]a; //内存释放
}
int main()
{
	Output();
}