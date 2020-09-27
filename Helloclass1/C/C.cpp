#include "pch.h"
#include	<iostream>
#include	<time.h>
#include	<cstdlib>
#include <windows.h>
#include <mmsystem.h>
#define N 7
#pragma comment(lib,"Winmm.lib")
using namespace std;

  
int main()
{
	srand(time(NULL));
	int nums[N] = { };
	cout << "********************************************" << endl;
	for (int i = 0; i < N; i++)
	{
		nums[i] = rand()%101;
		cout <<"随机数:"<< i<<" \t" << nums[i] << endl;
	}
	cout << "********************************************" << endl;
	int* p = nums;
	int temp;
	int numslen = sizeof(nums) / sizeof(int);
	for (int i = 0; i < numslen; i++)
	{
		for (int j = 0; j < numslen - i; j++)
		{
			if (*(p+j+1) > *(p+j))
			{	
				temp = *(p + j);
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = temp;
			}
		/*	if(nums[j]<nums[j+1])
			{ 
			temp = nums[j];
			nums[j] = nums[j+1];
			nums[j+1] = temp;
			}*/
		}
	}
	for (int i = 0; i < numslen; i++)
	{
		cout << "排序后:" << i << " \t" << *(p + i) << endl;
	}

	for (int i = 0; i < numslen; i++)
	{
		if (*(p+i) < *(p+numslen - i - 1))
		{
			temp = *(p + numslen - i - 1);
			*(p + numslen - i - 1) = *(p + i);
			*(p + i) = temp;
		}
	}
	cout << "********************************************" << endl;
	for (int i = 0; i < numslen; i++)
	{
		cout << "排序后:" << i << " \t" << *(p + i) << endl;
	}
/*
	int nums[] = {98,45,60,15,80};
	int* ptr = &nums[0];

	for (int i = 0; i < 5; i++)
		cout << ptr[i] << endl;

	cout <<endl;
	for (int i = 0; i < 5; i++)
		cout << *(ptr+i) << endl;

	cout << endl;
	for (int i = 0; i < 5; i++)
		cout << *ptr++ << endl;
*/	

/******************************************************************
****指针
	int num1 = 1024;
	int num2 = 2048;
	int* ptr1=&num1;

	int* ptr2=&num2;
	printf("%d \t %d",*ptr2, num1);


	//ptr2 = ptr1;
	//printf("%p \t %d",ptr2,num1);

*/

/*
	//播放音乐

	PlaySound(TEXT("sounds\\Cwhat are words.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

	//逆序
	int temp;
	int nums[] = { 45,65,2,3,5 };
	for (int i = 0; i < 5; i++)
	{
	
		if (5 - i - 1 > i)
		{
			temp = nums[5 - i - 1];
			nums[5 - i - 1] = nums[i];
			nums[i] = temp;
		}
	
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d \t", nums[i]);
	}

*/
/*
	int i, j;
	for ( i = 0; i <4; i++)
	{
	
		for ( j = 0; j <= 2-i; j++)
		{
			printf(" ");
		}
		
		for ( j = 0; j <= 2* i; j++)
		{
			if (i == 0 || i == 3 || j == 0 || j == 2 * i)
				printf("*");
			else
				printf(" ");
		}	


		printf("\n");
	}

*/



	/*int num;
	scanf_s("%d", &num);
	for (int i = 0; i <num ; i++)
	{
		printf("%d +%d =%d ", i, num - i, num);
		if (i % 2 == 0)		
			printf("\t");	
		else
			printf("\n");
		
	}
	*/

/*
	int number = 1;
	int i;
	for ( i = 1; i  <= 9; i++)
	{
		number = (number + 1) * 2;
	}
	printf("%d", number);
*/



/*
	int temp;
	scanf_s("%d",&temp);
	switch (temp)
	{
	case 1: 
		printf("%d", 1);
		break;
	case 2:
		printf("%d", 2);
		break;
	case 3:
		printf("%d", 3);
		break;
	default:
		break;+
	}
*/
	
/*	
	printf("**%-8.2f**",8.5);
*/

/*
	char ch1, ch2;
	ch1 = getchar();
	

	//清空缓冲区
	//fflush(stdin);
//	ch2 = getchar();
	putchar(ch1);//读取一个字符
//	printf("%c,%c\n", ch1, ch2);

	return 0;
*/




	/*
		double num =(double)5/2;
		printf("%fl\n",num);
		return 0;

	*/
}

