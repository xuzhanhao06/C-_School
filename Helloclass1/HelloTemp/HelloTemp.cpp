#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

template <typename T1, typename T2, typename T3 >
T1 sum(T1 t1, T2 t2, T2 t3) 
{
	return t1 + t2 +t3;
}

int main()
{
	cout<<sum<int,int, int>(1, 2, 3) <<endl;
	cout << sum<double,double, double> (1.1, 2.2, 3.3) << endl;
	cout << sum <string, string,string> ("hello", "c++", "!") << endl;
	cout << sum<double,int,string>(100, 3.14f, 50.123) << endl;

	 string sum;
}

