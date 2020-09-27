#include"pch.h"
#include <iostream>
#include <fstream>
using namespace std;

struct OneNode
{
	float modu;  //系数
	int index;   //指数
	OneNode *next;

	OneNode()
	{
	}

	OneNode(float modu, int index)
	{
		this->modu = modu;
		this->index = index;
	}

	OneNode(OneNode &n)
	{
		this->modu = n.modu;
		this->index = n.index;
	}

	friend ostream &operator<<(ostream &o, OneNode &n)
	{
		return o << n.modu << " " << n.index << endl;
	}
};

class PolyList
{
	OneNode *head;
public:
	PolyList()
	{
		head = NULL;
	}

	~PolyList()
	{

	}

	PolyList(int m)
	{
		head = NULL;
		for (int i = 0; i < m; i++)
		{
			OneNode n;
			cin >> n.modu >> n.index;
			OneNode *newp = new OneNode(n);
			Insert(newp);
		}
	}

	// 有序（Index降序）插入
	void Insert(OneNode *newp)
	{
		OneNode *prev = NULL, *p = head;
		while (p != NULL && p->index > newp->index)
			prev = p, p = p->next;
		// 插入，合并删除
		if (p != NULL && p->index == newp->index)
		{
			// 合并
			p->modu += newp->modu;
			if (p->modu == 0)
			{
				// 删除*p  // 删除*prev的后继节点
				prev->next = p->next;
				delete p;
			}
		}
		else {
			// 将*newp插入*prev之后
			newp->next = p;
			if (prev == NULL)
				head = newp;
			else
				prev->next = newp;
		}
	}

	void Add(PolyList &L)
	{
		for (OneNode *p = L.head; p != NULL; p = p->next)
		{
			OneNode *newp = new OneNode(*p);
			Insert(newp);     //  *newp插入
		}
	}

	friend ostream &operator<<(ostream &o, PolyList &L)
	{
		for (OneNode *p = L.head; p != NULL; p = p->next)
			o << *p;
		return o << endl;
	}

};

int main(int argc, char *argv[])
{
	int m, n;
	cin >> m;
	PolyList polyList1(m);
	cin >> n;
	PolyList polyList2(n);
	polyList1.Add(polyList2);
	cout << polyList1;

}
