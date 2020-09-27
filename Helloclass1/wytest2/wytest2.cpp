
#include "pch.h"
#include <iostream>
using namespace std;

void Output()
{
	int n, x, min;
	cin >> n;
	int*a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		a[i] = x;
	}
	min = a[0];
	for (int i = 0; i < n; i++)
	{
		if (min > a[i])
		
			min = a[i];

	}	
		cout << min <<endl;
		delete[]a;
	


}
int main()

{
	Output();


}


