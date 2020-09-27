
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{

//二维数组
	/*int nums[3][5]{
			11,51,23,54,21,
			58,65,54,20,62,
			65,22,85,86,84,
	};*/
	int nums[3][5]{};
	for (int i = 0; i < 3; i++)
	{		
		for (int j = 0; j < 5; j++)
		{
			
			cin >> nums[i][j] ;
		}
		cout << endl;
	}


	for (int i = 0; i < 3; i++)
	{
		cout << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << nums[i][j]<<"\t";
		}	
	}

}