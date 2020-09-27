#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
/*
//实现数组元素的删除和插入
	double power[99];//数组的大小一旦确定 就不能修改了
	int powerCount = 0;
	double insertPower;
	int insertIndex=0;//默认第一个

	power[powerCount++] = 45771;
	power[powerCount++] = 42322;
	power[powerCount++] = 40907;
	power[powerCount++] = 40706;
	double temp;
	for (int i = 0; i < powerCount; i++)
	{
		for (int j = 0; j < powerCount - i - 1; j++)
		{
			if (power[j] < power[i])
			{
				temp = power[j];
				power[j] = power[i];
				power[i] = temp;
			}
		}
	}
	cout << "排序后：" << endl;
	for (int i = 0; i < powerCount ;i++)
	{
		cout << power[i] << '\t';
	}
	cout << endl;
	//插入
	cout << "Insert：" << endl;
	cin >> insertPower;
	insertIndex = powerCount;
	for (int i = 0; i < powerCount; i++)
	{
		if (insertPower > power[i])
		{
			insertIndex = i;
			break;
		}
	}
	//从最后一个元素开始，将数字复制到后面的元素中
	for (int i = powerCount - 1; i >= insertIndex; i--)
	{
		power[i + 1] = power[i];
	}
	//3.将数字插入给下标为insertIndex的元素
	power[insertIndex] = insertPower;
	//将数组空间+1
	powerCount++;
	cout << "Insert order：" << endl;
	for (int i = 0; i < powerCount; i++)
	{
		cout << power[i] << endl;
	}

//删除
	double deletePower;
	int deleteIndex=-1;

	cout << "delete:" << endl;
	cin >> deletePower;
	for (int i = 0; i < powerCount; i++)
	{
		if (power[i] == deletePower)
		{
			deleteIndex = i;
		}
	}
	if (deleteIndex == -1)
	{
		cout << "error:" << endl;
	}
	else
	{
		for (int i = deleteIndex; i <  powerCount-1; i++)
			{
				power[i] = power[i+1];
			}
			powerCount--;
			cout << "now delete:" << endl;
			for (int i = 0; i < powerCount; i++)
			{
				cout << power[i] << "\t";
			}
	
	}
	*/


 //选择排序
	int nums[]{ 8,4,2,1,23,23,344,12 };
	int numslen = sizeof(nums) / sizeof(int);
	int min = nums[0];//假设最小值是数组第一个元素	
	int minIndex = 0;
	int temp;
	for (int i = 0; i < numslen - 1; i++)
	{
		min = nums[i];
		minIndex = i;
		for (int j = i + 1; j < numslen; j++)
		{
			if (nums[j] < min)
			{
				min = nums[j];
				minIndex=j;
			}
		}
		if (minIndex > i)
		{
			temp = nums[minIndex];
			nums[minIndex] = nums[i];
			nums[i] = temp;
		}
	}
	for (int i = 0; i < numslen; i++)
	{
		cout << nums[i] << endl;
	}



/*
//冒泡排序
	int temp;
	int nums[]{ 9,16,25,90,23 };
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4 - i; j++)
		{
			if (nums[j] > nums[j + 1])
			{
				temp = nums[j + 1];
				nums[j + 1] = nums[j];
				nums[j] = temp;
			}
		}
	}
		for (int n = 0; n < 5; n++)
		{
			cout << nums[n] << endl;
		}
*/
}


