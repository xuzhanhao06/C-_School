

//#include "pch.h"
#include "stdafx.h"
#include "SeqList.h"


SeqList::SeqList()
{
	n = 0;
}

SeqList::~SeqList()
{
}

void SeqList::Append(int x)
{
	data[n] = x; n++;
}

void SeqList::Output()
{
	for (int i = 0; i < n; i++)
		cout << data[i] << " ";
	cout << endl;
}
