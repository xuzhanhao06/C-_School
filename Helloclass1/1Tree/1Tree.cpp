#include "pch.h"
#include <iostream>

int main()
{
	BinTree T;
	T.Order(); //不需要cout原因是遍历在中间了

	cout << "节点个数"<<T.Count() << endl;
	cout <<"深度："<< T.Dep() << endl;

}
BinTree::BinTree()
{
	root = NULL;
	root = new Node;	root->data = 'a'; 
	Node *p1 = new Node; p1->data = 'b';
	Node *p2 = new Node; p2->data = 'c';
	root->lchild = p1; root->rchild = p2;
	p1->lchild = NULL; p1->rchild = NULL;
	p2->lchild = NULL; p2->rchild = NULL;
}
BinTree::~BinTree()
{

}
void BinTree::Order()
{
	Order(root);
	cout << endl;
}
void BinTree::Order(Node *p)
{
	if (p == NULL) return;//
	Order(p->lchild);  ////一一直到空值， 触发return 才会执行下个语句！
	cout << p->data << " ";
	Order(p->rchild);
 }
int BinTree::Count()
{
	return Count(root);
}

int  BinTree::Dep()//调用输出的函数体
{
	return Depth(root);
}
int BinTree::Depth(Node*p) //最大深度 
{
	if (p == NULL) return 0;
	int left = Depth(p->lchild);
	int right = Depth(p->rchild);
	if (left > right)
		return left + 1;
	else
		return right + 1;
	
}

int BinTree::Count(Node *p)//结点个数
{
	if (p == NULL) return 0;
	int left = Count(p->lchild);
	int right = Count(p->rchild);
	return left + 1 + right;

}