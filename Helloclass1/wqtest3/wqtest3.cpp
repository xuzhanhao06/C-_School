
#include "pch.h"
#include <iostream>

using namespace std;
void FindiMax()
{
	int n, x, max,q;
	cin >> n;
	int*a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		a[i] = x;
	}
	max = a[0];
	q = a[0];
	for (int i = 0; i < n; i++)
	{
		if (max < a[i])
		{
			max = a[i];
			q = i;
		}
	}
	cout << q << endl;
	delete[]a;

}





int main()
{
	FindiMax();
}

