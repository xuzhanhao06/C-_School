#include"pch.h"
#include <iostream>
using namespace std;

class SeqList
{
public:
	SeqList();
	~SeqList();
	void FindMinCount(int arr[], int x);

};

void SeqList::FindMinCount(int arr[], int x)
{
	int min = arr[0];
	int count1 = 1;


	for (int i = 1; i < x; i++)
	{
		if (arr[i] < min)
		{
			count1 = 1;
			min = arr[i];
		}
		if (arr[i] == min)
			count1++;

	}

	cout << count1 << endl;
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
		cin >> number;
		a[i] = number;
	}
	for (int i = 0; i < n2; i++)
	{
		cin >> number;
		b[i] = number;
	}


	SeqList s;
	s.FindMinCount(a, n1);
	s.FindMinCount(b, n2);
}
