
#include "pch.h"
#include <iostream>
#include <fstream>
#include <queue>
#include <stack>
#include <string.h>
using namespace std;
//字符串匹配
struct Node
{
	char data;
	Node *next;

};
class LinkString
{
	Node *head;
public:
	LinkString();
	LinkString(const char s[]);
	virtual ~LinkString();
	Node * Index(LinkString &t);
	Node * Index(Node *pstart, LinkString &t);

};

LinkString::LinkString()
{
	head = NULL;
}

LinkString::LinkString(const char s[])
{
	head = NULL;
	Node *tail = NULL;
	for (int i = 0; s[i] != 0; i++)
	{
		Node *newp = new Node; newp->data = s[i];
		if (head == NULL)
			head = newp;
		else
			tail->next = newp;
		tail = newp;
	}
	if (tail != NULL)
		tail->next = NULL;
}

LinkString::~LinkString()
{

}
// 当前对象里面是主串 // t对象里面是模式串
Node * LinkString::Index(LinkString &t)
{
	Node *pstart = head;
	Node *ps = pstart, *pt = t.head;
	while (ps != NULL && pt != NULL)
	{
		if (ps->data == pt->data)
			ps = ps->next, pt = pt->next;
		else
			pstart = pstart->next,
			ps = pstart, pt = t.head;
	}
	if (pt == NULL)
		return pstart;
	else
		return NULL;
}
Node * LinkString::Index(Node *pstart, LinkString &t)
{
	Node *ps = pstart, *pt = t.head;
	while (ps != NULL && pt != NULL)
	{
		if (ps->data == pt->data)
			ps = ps->next, pt = pt->next;
		else
			pstart = pstart->next,
			ps = pstart, pt = t.head;
	}
	if (pt == NULL)
		return pstart;
	else
		return NULL;
}


int main(int argc, const char* argv[])
{
	LinkString s("we study C,study java,study C++,study Data Structure!");
	LinkString t("study");
	Node *p;
	p = s.Index(t);
	while (p != NULL)
	{
		cout << p << ": " << p->data << endl;
		p = s.Index(p->next, t);
	}
	return 0;
}

