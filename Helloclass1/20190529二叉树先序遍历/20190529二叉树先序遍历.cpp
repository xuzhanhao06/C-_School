#include "pch.h"
#include<queue>
#include<iostream>
#include<cstdio>
#include<stack>
using namespace std;
typedef struct node
{
	struct node *lc;
	struct node *rc;
	char date;
}bintree, *tree;

stack<tree> s;//利用栈来构造树
void createtree(tree &T)
{
	char c;
	cin >> c;
	if (c == '0') { // #代表空节点
		T = NULL;
	}
	else {
		T = new bintree;
		T->date = c;
		createtree(T->lc);
		createtree(T->rc);
	}
}
void print(tree T) // 递归先序遍历
{
	if (T) {
		cout << T->date;
		print(T->lc);			
		print(T->rc);
	}
}
void print2(tree T) // 递归中序遍历?
{
	if (T) {
	//	if (T == NULL) return;
		print2(T->lc);
		cout << T->date;
		print2(T->rc);
	}
}
void print3(tree T) // 递归
{
	if (T == NULL) return;
	print3(T->lc);
	print3(T->rc);
	cout << T->date;

}
/*
void visitbintree(tree T)
{
	while (T) {
		cout << T->date;
		if (T != NULL)
			s.push(T->rc);
		T = T->lc;
	}
}
void preprint(tree T) // 迭代先序遍历
{
	while (true) {
		visitbintree(T);
		if (s.empty()) break;
		T = s.top();
		s.pop();
	}
}*/
int main()
{
	tree T;
	createtree(T);
	cout << "先序遍历" << endl;
	print(T);
	cout << endl;
	cout << "中序遍历"<<endl;
	print2(T); // 递归中序遍历
	cout << endl;
	cout << "后序遍历" << endl;
	print3(T); // 递归中序遍历



//	preprint(T);
}

