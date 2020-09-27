#include "stdafx.h"
#include "SeqList.h"

int main(int argc, char* argv[])
{
	SeqList L;
	ifstream  fin("L.txt");
	int n; fin >> n;
	for (int i = 0; i < n; i++)
	{
		int x; fin >> x;
		L.Append(x);
	}
	L.Output();
	cout << "Hello World!" << endl;
	return 0;
}




/*
class SeqList
{
	int a[10], n;
public:
	SeqList()
	{}
	~SeqList()
	{}
};
*/
