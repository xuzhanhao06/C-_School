
#include "pch.h"
#include <iostream>
using namespace std;
int Fbi(int i);
int main()
{
	int i;
	for (int i = 0; i < 40; i++) 
	{
		cout << "i:" << i << endl;
		printf("%d \n",Fbi(i));
	}
 
}
int Fbi(int i)
{
//	cout << "i:"<<i << endl;
	if (i < 2)
		return i == 0 ? 0 : 1;
	return Fbi(i - 1) + Fbi(i - 2);

}