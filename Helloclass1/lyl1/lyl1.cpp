#include "pch.h"
#include<iostream>
using namespace std;

int main(int argc, char* argv[])
{

	
	int nums[8];
	int n[] = { 22,33,55,44,66,99,1 };
	for (int i = 0; i <7; i++)
	{
		nums[i] = n[i];
	}

	//int numslen = sizeof(nums) / sizeof(int);
	int numslen = 7;
	int temp;

	int numsindex = -1;
	int min = nums[0];  //初始最小值为nums[0]

	int insert;
	int insertindex = numslen;//若是没找到第一个比插入数小的  就放 第一位


//选择排序

	for (int i = 0; i < numslen ; i++)
	{
		numsindex = i;
		min = nums[i];

		for (int j = i + 1; j < numslen; j++)
		{
			if (nums[j] < min)
			{
				numsindex = j;
				min = nums[j];

			}
		}


//		if (numsindex > i)
//		{
			temp = nums[numsindex];
			nums[numsindex] = nums[i];
			nums[i] = temp;
//		}
	}

	for (int p = 0; p < numslen; p++)
	{
		cout << nums[p] << endl;

	}
	cout << endl;
	cout << endl;
	//------------------------------------------------------------------------------------------------
	//插入insert	

	numslen++;
	cin >> insert;
	for (int t = 0; t < numslen ; t++)
	{
		if (insert <= nums[t])
		{
			insertindex = t;
			break;
		}
	}


	for (int t = numslen - 1; t >= insertindex; t--)
	{
		nums[t + 1] = nums[t];
	}



	nums[insertindex] = insert;


	for (int h = 0; h < numslen; h++)
	{
		cout << nums[h] << endl;

	}


//----------------------------------------------------------------------------------------------------
//删除
	cout << endl;
	cout << endl;

	int  Delete = -1;
	cin >> Delete;
	int Deleteindex=-1;

	for (int i = 0; i < numslen ; i++)
	{
		if (Delete == nums[i])
		{
			Deleteindex = i;
			break;
		}
	}

	/*if (Deleteindex = -1)
		{
			cout << "No SEEK YOUR number!" << endl;
		}
	else 
		{*/

		for (int i = Deleteindex; i < numslen; i++)
			{
			nums[i ] = nums[i+1];
			}
		for (int i = 0; i < numslen-1; i++)
			{
			cout << nums[i] << endl;
			}
		
	//	}


	/*  冒泡排序
		for(int i=0;i<numslen-1;i++)
		{
			for(int j=0;j<numslen-i;j++)
			{
				if(nums[j] > nums[j+1])
				{
					temp=nums[j+1];
					nums[j+1]=nums[j];
					nums[j]=temp;
				}
			}
		}

		for(int t=0;t<numslen-1;t++)
		{
			cout<<nums[t]<<endl;
		}
	*/


}

