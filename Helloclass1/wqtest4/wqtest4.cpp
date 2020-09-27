

#include "pch.h"
#include <iostream>

using namespace std;

void Search()
{
	int x, n, y;
	
	int q = -1;
     cin >> n;
	int*a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		a[i] = x;
	}
	cin >> y;
	
	for (int i = 0; i < n; i++)
	{
		if (a[i] == y)
		{
			q = i;
			cout << q << endl;
			return;
		}
	}	
	if (q == -1)
			cout << q << endl;
		delete[]a;
}




int main()
{
	Search();
}

