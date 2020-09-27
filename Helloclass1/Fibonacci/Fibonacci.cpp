#include "pch.h"
#include <iostream>
//using namespace std;
//2018/12/24
//zhu
template<int N>
struct Fib
{
	enum 
	{
		Result= Fib<N-1>::Result +Fib <N-2>::Result
	};

};
//完全特例化
template<>
struct Fib<1>
{
	enum {Result =1};
};
//完全特例化
template<>
struct Fib<0>
{
	enum {Result =0};
};
//示例
int main()
{
		int i = Fib<10>::Result;
		std::cout << i << std::endl;
}
