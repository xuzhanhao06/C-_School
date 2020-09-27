
#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int nums[]{8,4,2,1,23,344,12};
	int numslen = sizeof(nums) / sizeof(int);//数组长度
	int sum = 0;



	//查找输入数字在数组中的下标
/*	int searchNum;
	int searchIndex = -1;
	cout <<  "输入查找的数字：" << endl;
	cin >> searchNum;
	for (int i = 0; i < numslen; i++)
	{
		if (searchNum == nums[i])
		{
			searchIndex = i;
		}
	}
	cout << "下标："<<searchIndex << endl;
*/


/*
//求奇数  偶数 个数
	int jCount = 0, oCount = 0;
	
	for (int i = 0; i < numslen ; i++)
	{
		if (nums[i] % 2 == 0)
			oCount++;
		else
		{
			jCount++;
		}
		
	}
	cout << "even:" << oCount <<"   "<< "odd:" << jCount << endl;
*/


/*	for (int i = 0; i < numslen; i++)
	{
		sum += nums[i];
		cout << nums[i] <<"   "<<sum << "   ";
		cout << endl;
	}
	//求数组最大值最小值--
	//
	int max = nums[0];
	int maxIndex = -1;//最大值下标
	for (int i = 0; i < numslen; i++)
	{
		if (nums[i] > max)
		{
			max = nums[i];
			maxIndex = i;
		}

	}
	cout << max <<"      " << nums[maxIndex]<< endl;
	cout << maxIndex << endl;
*/	


	
	/*
	const int N = 5;
	int nums[N] = {};

	for (int i = 0; i < sizeof(nums) / sizeof(int); i++)//sizeof(nums) / sizeof(int)
	{												//数组总大小/数组类型 20 / 4 = 5(个数) ;
		cout << "输入第" << (i + 1) << "个组元素" << endl;
		cin >> nums[i];
	}

	for (int i = 0; i < N; i++)
	{
		cout << nums[i] << endl;
	}
*/
}
