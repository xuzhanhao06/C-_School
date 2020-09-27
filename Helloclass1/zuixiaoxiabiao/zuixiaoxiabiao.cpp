#include "pch.h"
#include <iostream>
using namespace std;

class SeqList
{
public:
	SeqList();
	~SeqList();
	void FindiMinPos(int str[], int x);
};

void SeqList::FindiMinPos(int str[], int x)
{
	int min;
	int dex = 0;
	int q = 0;
	for (int i = 0; i < x; i++)
	{
		if (str[i] > 0)
		{
			if (q == 0)
			{
				min = str[i];
				q = 2;
				dex = i;
			}

			if (str[i] < min)
			{
				min = str[i];
				dex = i;
			}
		}
	}
	cout << dex << " ";
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
	s.FindiMinPos(a, n1);
	s.FindiMinPos(b, n2);
}
