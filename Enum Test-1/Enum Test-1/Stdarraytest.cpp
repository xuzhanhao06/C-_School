#include "pch.h"
#include<iostream>
#include<array>
using namespace std;

int main()
{
	array<int ,3> arr = { 10,20,30,40,50 };
	cout << "Array size=" << arr.size() << endl;
	for(int i=0; i<arr.size(); ++i)
	{
		cout << arr[i] << endl;
	
	}

	cout << "-----------------" << endl;
	for (int a : arr)
	{
		cout << a << endl;

	}



}