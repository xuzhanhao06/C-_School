#include "pch.h"
#include <iostream>
using namespace std;
//2018/12/24
template<int N>
struct Fib
{
	enum
	{
		Result = N*Fib<N - 1>::Result 
	};

};
//完全特例化
template<>
struct Fib<1>
{
	enum { Result = 1};
};

//示例
int main()
{
	
	int i = Fib<10>::Result;
	std::cout << i << std::endl;
}
