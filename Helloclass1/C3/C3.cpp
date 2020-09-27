

#include "pch.h"
#include <iostream>
#define N 5
using namespace std;
void input(double[]);
void sort(double[]);
void show(double[]);
int find(double*, int );
int main()
{
	double findNum;
	double score[N];
	input(score); //数组作为函数实参时，只传递数组的地址，并不传整个数组的空间
	show( score);

	sort(score);
	show(score);
	scanf_s("%lf", &findNum);
	printf("找到的下标为：%d\n", find(score, findNum));

}
void input(double *score)//等于 void input(double score[])
{
	for (int i = 0; i < N; i++)
	{
		cout << "请输入第" << i + 1 << "门课" << endl;
		cin >> score[i];
	}
}
void show(double score[])
{
	cout << "语文\t数学\t英语\t物理\t化学\t"<< endl;
	for (int i = 0; i < N; i++)
	{
		cout << score[i] <<"\t";
	}
	printf("\n");

}
void sort(double score[])
{
	double temp;
	for (int i = 0; i < N-1; i++)
	{
		for (int j = 0; j < N - i-1; j++)
		{
			if (score[j] > score[j + 1])
			{
				temp = score[j];
				score[j] = score[j + 1];
				score[j + 1] = temp;
			}
		}
	}
}

int find(double*score, int findNum)
{
	int findIndex = -1;
	for (int i = 0; i < N; i++)
	{
		if (findNum == *(score + i))
		{
			findIndex = i;
			break;
		}
	}
	return findIndex;
}