#include "pch.h"
#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;
void Recur(int sum, int Rand);
int Random();//随机数
void Search(int sc, int Max, int Min);
int main()
{
//	int sc = Random();
	Search(51,10000,0);
}
int temp = 0;
void Search(int sc,int Max,int Min)
{
	temp = (Max + Min)/2;
	if (sc == temp) return;
	cout << "sc:" <<sc ;
	cout << "\tMax:"<<Max ;
	cout << "\tMin:" << Min << endl;
//	Max /= 2;
	if (sc < temp)
	{
		Max = temp-1;
		Search(sc, Max,Min);
	}
	if (sc > temp)
	{
		Min = temp+1;
		Search(sc, Max, Min);
	}
	
}
/*

int main()
{	
	 Recur(Random(), Random());
}

void Recur(int sum,int Rand)
{	
	cout << sum << endl;
	if (sum > (Rand%50)*50) return;
	Recur(sum += Rand % 50,Rand);
}*/
/*
int Random()
{
	int Rand = rand();
	srand(time(NULL));	
	 return Rand%50;
}*/