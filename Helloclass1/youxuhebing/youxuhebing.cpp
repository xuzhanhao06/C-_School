// A10-1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

struct MyStruct
{
	int data;
	MyStruct *next;
};

class OneClass
{
	MyStruct *head;
public:
	OneClass();
	~OneClass();
	void Merge(int a[], int ax, int b[], int bx);
private:
};

void  OneClass::Merge(int a[], int ax, int b[], int bx)
{
	int u = ax - 1, p = bx - 1;
	int index = ax + bx - 1, c[1000];
	int count = 0;
	while (index >= 0)
	{
		if (u < 0)
		{
			c[index--] = b[p--];//第一个数组已经遍历完毕
			count++;
		}
		else if (p < 0)
		{
			c[index--] = a[u--];//第二个数组已经遍历完毕
			count++;
		}
		else if (a[u] > b[p] && u >= 0)
		{
			c[index--] = a[u--];//比较两个数组元素
			count++;
		}
		else if (a[u] <= b[p] && p >= 0)
		{
			c[index--] = b[p--];
			count++;
		}
	}

	for (int p = 0; p < count; p++)
	{
		cout << c[p] << " ";
	}
	cout << endl;
}

OneClass::OneClass()
{
	head = NULL;
}

OneClass::~OneClass()
{
}

int main()
{

	int a1[1000], a2[1000], a3[1000];
	int n1, n2, n3, n;
	cin >> n1 >> n2 >> n3;


	for (int i = 0; i < n1; i++)
	{
		cin >> n;
		a1[i] = n;

	}
	for (int i = 0; i < n2; i++)
	{
		cin >> n;
		a2[i] = n;

	}
	for (int i = 0; i < n3; i++)
	{
		cin >> n;
		a3[i] = n;
	}

	OneClass m;
	m.Merge(a1, n1, a2, n2);
	m.Merge(a1, n1, a3, n3);

}
