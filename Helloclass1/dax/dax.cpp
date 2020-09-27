
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int a, b, c, v;
	cin >> a >> b >> c;
	if (a > b)
	{
		v = a;
		a = b;
		b = v;
	}
	if (b > c)
	{
		v = b;
		b = c;
		c = v;
	}
	if (a > b)
	{
		v = a;
		a = b;
		b = v;
	}
	cout << a << " " << b << " " << c << endl;

}

