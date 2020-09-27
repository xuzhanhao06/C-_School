#include "pch.h"
#include <iostream>
#include <istream>
#include <fstream>
#include <stack>
using namespace std;
struct Node
{
	int data;
	Node *next;
};
class LinkStack
{
	Node * top; // 栈顶指针
public:
	bool isEmpty();
	int pop();
	void push(int x);
	LinkStack();
	virtual ~LinkStack();

};


class SeqStack
{
	int data[10];
	int top;  // 栈顶下标(指针)
public:
	bool isEmpty();
	int pop();
	void push(int x);
	SeqStack();
	virtual ~SeqStack();

};



LinkStack::LinkStack()
{
	top = NULL;
}

LinkStack::~LinkStack()
{

}

void LinkStack::push(int x)
{
	Node *newp = new Node;	newp->data = x;
	newp->next = top;
	top = newp;
}

int LinkStack::pop()
{
	int x = top->data;
	Node *p = top;  // 记住头结点的地址
	top = top->next; // 跳过头结点
	delete p;     // 删除头结点
	return x;
}

bool LinkStack::isEmpty()
{
	return top == NULL;
}

SeqStack::SeqStack()
{
	top = 0;
}

SeqStack::~SeqStack()
{
}

void SeqStack::push(int x)
{
	data[top] = x;  top++;
}

int SeqStack::pop()
{
	top--;	return data[top];
}

bool SeqStack::isEmpty()
{
	return top == 0;
}


void Match(char s[])
{
	stack<int> S;
	for (int i = 0; s[i] != 0; i++)
	{
		if (s[i] == '(')
			S.push(i);
		if (s[i] == ')')
		{
			if (S.empty())
			{
				cout << "right " << i << endl;
				return;
			}
			S.pop();
		}
	}
	if (S.empty())
		cout << "ok" << endl;
	else
	{
		cout << "left ";
		while (!S.empty())
		{
			cout << S.top() << " "; S.pop();
		}
		cout << endl;
	}

}

int main(int argc,const char* argv[])
{
	char s;
	cin >> s; 
	char s2[] = {s}; 
	Match(s2);
	return 0;
}


