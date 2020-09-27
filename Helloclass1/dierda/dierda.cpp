#include "pch.h"
#include <iostream>
using namespace std;

class SeqList
{
public:
	SeqList();
	~SeqList();
	void FindiSecondMax(int arr[], int x);
};

void SeqList::FindiSecondMax(int arr[], int x)
{
	int max = arr[0]; //arr的第0个数赋值给max
	int index = 0;
	int sec = 0;
	int c = 0;
	for (int i = 0; i < x; i++)
	{
		if (arr[i] > 0)
			if (arr[i] >= max)
			{
				max = arr[i];
				sec = index;
				index = i;
				if (arr[sec] == max)
					sec = index;
			}
	}
	cout << sec <<" ";
}



SeqList::SeqList()
{

}

SeqList::~SeqList()
{
}


int main()
{
	int a[100];
	int b[100];
	int n1, n2;
	int number;
	cin >> n1 >> n2;
	for (int i = 0; i < n1; i++)
	{
		cin >> number; //输入到给number	
		a[i] = number; //number 赋值给a的第i个数
	}
	for (int i = 0; i < n2; i++)
	{
		cin >> number;
		b[i] = number;
	}

	SeqList s;
	s.FindiSecondMax(a, n1);
	s.FindiSecondMax(b, n2);
}
