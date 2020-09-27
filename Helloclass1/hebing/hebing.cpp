#include"pch.h"
#include <iostream>

using namespace std;

class Array
{
	int data[10000], n;
public:
	Array()
	{
		n = 0;
	}

	Array(int n)
	{
		cin >> n;
		this->n = n;
	}

	virtual ~Array()
	{
	}

	void Append(int x)
	{
		data[n] = x;
		n++;
	}

	void Output()
	{

		for (int i = 0; i < n; i++)
			
			cout << data[i] << " ";
	//	cout << endl;
	}

	int Search(int x)
	{
		for (int i = 0; i < n; i++)
			if (data[i] == x)
				return i;
		return -1;
	}

	void SetInter(Array &a)
	{
		Array b;
		for (int i = 0; i < n; i++)
			if (a.Search(data[i]) != -1)
				b.Append(data[i]);
		b.Output();
	}

};

int main() {
	Array a, b, c;
	int n1, n2, n3;
	cin >> n1 >> n2 >> n3;
	for (int i = 0; i < n1; i++)
	{
		int x; cin >> x;
		a.Append(x);
	}
	for (int i = 0; i < n2; i++)
	{
		int x; cin >> x;
		b.Append(x);
	}
	for (int i = 0; i < n3; i++)
	{
		int x; cin >> x;
		c.Append(x);
	}
	a.SetInter(b);
	a.SetInter(c);
}
