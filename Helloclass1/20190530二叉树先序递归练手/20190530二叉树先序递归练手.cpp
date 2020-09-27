#include "pch.h"
#include<iostream>
using namespace std;

typedef struct node {
	struct node*lc;
	struct node*rc;
	char data;
}*tree,bintree;
void creatree(tree &T);
void print(tree T);
void creatree(tree &T)
{
	char c;
	cin >> c;
	if (c == '0')
		T = NULL;
	else
	{
		T = new bintree;
		T->data = c;
		creatree(T->lc);
		creatree(T->rc);
	}
}
void print(tree T) 
{
	if (T)
	{
		cout << T->data << endl;
		print(T->lc);
		print(T->rc);
	}
}


int main() 
{
	tree T;
	creatree(T);
	print(T);

}