#include "pch.h"
int main()
{
	int nums[8] = { 11,55,6,33,88,99,2 };
//	int len = sizeof(nums) / sizeof(int);//数组长度
	int len = 7;
	cout << "*********************************************************************************************************************" << endl;
	cout << "排序前数组：" << endl;
	Show(nums, len);
	cout << "*********************************************************************************************************************" << endl;
	cout << "排序后数组：" << endl;
	Sort(nums,len);//排序
//	choseSort(nums,len);//选择排序
	Show(nums, len);
	cout <<"*********************************************************************************************************************" << endl;
	Inset(nums, len);
	len++;
	Show(nums, len);
	DeleteNum(nums,len);
}

void choseSort(int nums[], int len)//选择排序
{
	int min, mindex, temp;
	for (int i = 0; i < len - 1; i++)
	{
		min = nums[i];
		mindex = i;
		for (int j = i + 1; j < len; j++)
		{
			if (min > nums[j])
			{
				min = nums[j];
				mindex = j;
			}
		}
		if (mindex > i)
		{
			temp = nums[mindex];
			nums[mindex] = nums[i];
			nums[i] = temp;
		}
	}
}

void Inset(int* nums, int len)//插入
{
	int inset, temp;
	cout << "输入添加的数字" << endl;
	cin >> inset;
	cout << "*********************************************************************************************************************" << endl;
	for (int i = 0; i < len - 1; i++)
	{
		if (nums[i] < inset)
		{
			temp = i;
			break;
		}
	}
	for (int i = len - 1; i >= temp; i--)
	{
		nums[i + 1] = nums[i];
	}
	nums[temp] = inset;	//
}

void DeleteNum(int* nums, int len)//删除
{
	cout << "*********************************************************************************************************************" << endl;
	int x;
	cout << "输入删除的数字" << endl;
	cin >> x;
	int de;
	for (int i = 0; i < len - 1; i++)
	{
		if (nums[i] == x)
		{
			de = i;
			break;
		}
	}
	for (int i = de; i < len; i++)
	{
		nums[i] = nums[i + 1];
	}
	len--;
	for (int i = 0; i < len; i++)
	{
		cout << nums[i] << endl;
	}
}

void Sort(int* nums, int len)//排序
{
	int temp;
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i; j++)
		{
			if (nums[j + 1] > nums[j])
			{
				temp = nums[j + 1];
				nums[j + 1] = nums[j];
				nums[j] = temp;
			}
		}
	}
}
void Show(int*nums, int len) //遍历
{
	for (int i = 0; i < len; i++)
	{
		cout << nums[i] << endl;
	}
}