#include "pch.h"
#include <iostream>
#include<math.h>
#include<iostream>
using namespace std;

int Search();
static int SearchNum;

int main()
{
	scanf_s("%d", &SearchNum);
	int scr = Search();
	printf("%d", scr);
}

int Search()
{
	int nums[] = {65,34,23,43,12,4};
	int numslen = sizeof(nums) / sizeof(int);
	int SearchIndex = -1;

	for (int i = 0; i < numslen; i++)
	{
		if (SearchNum ==  *(nums + i) )
		{
			SearchIndex = i;
			break;
		}
	}
	return SearchIndex;
}
