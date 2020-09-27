//2018/12/24- 9：39
#include "pch.h"
#include <iostream>
using namespace std;
//主模板
template<int DIM,typename T>
struct DotProduct
{
	static T Result(T*a, T*b)
	{
		return*a**b + DotProduct<DIM - 1, T>::Result(a + 1, b + 1);
	}
};
//局部特化
template<typename T>
struct DotProduct<1,T>
{
	static T Result(T*a, T*b)
	{
		return *a**b;
	}
};
//shi lie 
int main()
{
	int a[5] = { 1,2,3,4,5 };
	int b[5] = { 6,7,8,9,10 };

	cout << DotProduct<5, int>::Result(a, b) << endl;
}
//