

#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{

//	外层循环控制行  
//	内层循环控制列






	for (int i = 0; i <5; i++)
	{
		for (int j = 0; j <= 3 - i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j <= 2*i;j++)
		{
			cout << (char)('A' + i);
		}
		cout <<endl;
	}
	
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j <= (4-2*i); j++)
		{//在J极值
			if (j == 0 || j == 4 - 2 * i)
			{
				cout << "*";
			}
			else 
				cout << " ";
		}
		cout << endl;
	}


	/*
	*	i		j
	*	1		0
	*	2		3
	*	3		2
	*	4		1
	*	5		0
	*/



/*
	int number=0;
	for (int i = 1; i <= 100; i++)
	{
		if (i % 2 == 1)		
			continue;					
		number += i;
	}
	cout << number << endl;
*/

/*
	srand(time(NULL));
	const double PRICE = rand();
	double guessPrice;
	int guessCount=0;
	while (true)
	{
		guessCount++;
		cin >> guessPrice;
		if (guessPrice > PRICE)
		{
			cout << "big：" << endl;
		}
		else if(guessPrice < PRICE)
		{
			cout << "small：" << endl;
		}
		else
		{
			cout << "ture：" << endl;
			break;
		}		
	}

		if (guessCount == 1)
		{
			cout << "1" << endl;
		}
		else if (2 <= guessCount && guessCount <=3 )
		{
			cout << "2-3" << endl;
		}
		else if(4 <= guessCount && guessCount <= 5)
		{
			cout << "4-5" << endl;
		}
		else
		{
			cout << "ruo" << endl;
		}

*/

/*
	int age;
	while (true)
	{
		cout << "输入年龄：" << endl;
		cin >> age;
		if (age < 0)
		{
			break;
		//	continue;
		}

	}
	cout << "EXIT" << endl;
	*/
}

