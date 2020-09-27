
#include "pch.h"
#include <iostream>

using namespace std;

double salary = 0;
double sumSalary = 0;
double avgSalary = 0;
const int YEAR = 6;
int main()
{
	for (int i = 0; i < YEAR; i++)
	{
		cin >> salary;
		sumSalary += salary;
		avgSalary = sumSalary / (i+1);
//		cout << "sum:" << sumSalary << endl;

		cout << "avg:" << avgSalary << endl;

	}

	cout << "" << sumSalary<<endl;
	cout << "avg:" << avgSalary << endl;
}


