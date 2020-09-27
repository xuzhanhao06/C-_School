
#include "pch.h"
#include <iostream>
using namespace std;
CharWeight cws[N] = { {'a',0.95},
				   {'b',0.03},
				   {'c',0.01},
				   {'d',0.01}
};
int main()
{

	Huffman Tree(cws);
	Tree.GetCode();   // 填写所有叶子结点的编码
	Tree.OutputCode('a'); // 查询输出
	Tree.OutputCode('b'); // 查询输出
	Tree.OutputCode('c'); // 查询输出
	Tree.OutputCode('d'); // 查询输出
	return 0;
}
Huffman::Huffman(CharWeight cws[])
{
	int i;
	for ( i = 0; i < N; i++)
	{
		Tree[i].c = cws[i].c;  Tree[i].weight = cws[i].weight;
		Tree[i].lch = Tree[i].rch = Tree[i].parent = -1;
	}
	// N-1次选择 与 合并
	for (; i < 2 * N - 1; i++)
	{
		int imin1 = FindiMin(i); Tree[imin1].parent = i; // 认爹
		int imin2 = FindiMin(i); Tree[imin2].parent = i; // 认爹
		Tree[i].weight = Tree[imin1].weight + Tree[imin2].weight; // 合并权重
		Tree[i].lch = imin1;		Tree[i].rch = imin2; // 认孩子
		Tree[i].parent = -1;
	}
}
//在Tree[0]..Tree[n-1]中找weight最小值的根结点的下标imin
int Huffman::FindiMin(int n)
{
	int imin = 0;
	while (Tree[imin].parent != -1)
		imin++;
	for (int i = imin + 1; i < n; i++)
		// Tree[i]必须是根结点
		if (Tree[i].parent == -1 && Tree[i].weight < Tree[imin].weight)
			imin = i;
	return imin;
}


Huffman::~Huffman()
{

}

/*
HC[0].c='a'; HC[0].start=2;	HC[0].code[N-2]=1;
HC[1].c='b'; HC[1].start=1;	HC[1].code[N-2]=1; HC[1].code[N-3]=0;
HC[2].c='c'; HC[2].start=0;	HC[2].code[N-2]=0; HC[2].code[N-3]=0; HC[2].code[N-4]=0;
HC[3].c='d'; HC[3].start=0;	HC[3].code[N-2]=1; HC[3].code[N-3]=0; HC[3].code[N-4]=0;
*/
void Huffman::GetCode()
{
	int i,j;
	for ( i = 0; i < N; i++)
	{
		HC[i].c = Tree[i].c;
		int p = i, parent = Tree[p].parent;
		for ( j= N - 2; parent != -1; j--)
		{
			if (Tree[parent].lch == p)
				HC[i].code[j] = 0;
			else
				HC[i].code[j] = 1;
			p = parent, parent = Tree[p].parent;
		}
		HC[i].start = j + 1;
	}
}

void Huffman::OutputCode(char c)
{
	int i;
	for ( i = 0; i < N; i++)
		if (HC[i].c == c)
			break;
	// 输出HC[i].code[start]...HC[i].code[N-1]
	cout << HC[i].c << ": ";
	for (int j = HC[i].start; j < N - 1; j++)
		cout << HC[i].code[j] << " ";
	cout << endl;
}
