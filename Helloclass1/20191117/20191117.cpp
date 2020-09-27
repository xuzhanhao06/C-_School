
#include "pch.h"
#include <iostream>
using namespace std;
void Q(int A[], int low, int high);
void Q(int *a, int low, int high);
int main()
{
	int a[] = {5,6,1,7,3,2,4,8};
	 Q(a, 0, 7);
}
/*
void Q(int A[], int left, int right)
{
	int low = left, high = right;
	int pro = A[low];
		while (low < high&&A[high] >= pro)
			--high;
		A[low] = A[high];
		while (low < high&&A[low] <= pro)
			++low;
		A[high] = A[low];
	A[low] = pro;
	Q(A, left, low - 1);
	Q(A, high + 1, high);
	for (int i = 0; i < 7; i++)
	{
		cout << A[i] ;
	}	
}
*/
void Q(int *a, int low, int high)
{
	int medi = a[low];
	int i = low, j = high;
	if (low >= high)	return;
	while (i < j)
	{
		while (i < j&&a[j] >= medi) j--;
		a[i] = a[j];
		while (i < j&&a[i] <= medi) i++;
		a[j] = a[i];
	}
	a[i] = medi;
	Q(a, low, i - 1);
	Q(a, i + 1, high);
	for (int i = 0; i < 7; i++)
	{
		cout << a[i];
	}
	cout <<"  " << endl;
}