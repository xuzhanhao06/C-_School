#include "pch.h"
#include <string.h>
#include <iostream>
using namespace  std;

struct Node
{
	char data;
	Node *lchild, *rchild;
};

class BinTree
{
private:
	Node *root;
public:
	BinTree(char pre[]);
	BinTree(char pre[], char mid[]);
	Node* CreatebyPre(char pre[], int &i);
	Node*CreatebyPreMid(char pre[], int ipre, char mid[], int imid, int len);
	void Order();
	void Order(Node *p);
};

BinTree::BinTree(char pre[])
{
	int i = 0;
	root = CreatebyPre(pre, i);
}
Node * BinTree::CreatebyPre(char pre[], int &i)
{
	int c = pre[i++];
	if (c == '*')  return NULL;
	Node *p = new Node; p->data = c;
	p->lchild = CreatebyPre(pre, i);
	p->rchild = CreatebyPre(pre, i);
	return p;
}

BinTree::BinTree(char pre[], char mid[])
{
	int ipre = 0, imid = 0, len = strlen(pre);
	root = CreatebyPreMid(pre, ipre, mid, imid, len);
}
Node * BinTree::CreatebyPreMid(char pre[], int ipre, char mid[], int imid, int len)
{
	if (len == 0)  return  NULL;
	Node * p = new Node; p->data = pre[ipre];
	int k;
	for (k = 0; k < len; k++)
		if (mid[imid + k] == pre[ipre])
			break;
	p->lchild = CreatebyPreMid(pre, ipre + 1, mid, imid, k);
	p->rchild = CreatebyPreMid(pre, ipre + k + 1, mid, imid + k + 1, len - k - 1);
	return p;
}

void BinTree::Order()
{
	Order(root);
}
void BinTree::Order(Node *p)
{
	if (p == NULL)  return;
	Order(p->lchild);

	Order(p->rchild);
	cout << p->data << "";

}

int main()
{
	char c[1000];
	char d[1000];
	cin.getline(c, 1000);
	cin.getline(d, 1000);
	BinTree T(c, d);
	T.Order();

};

