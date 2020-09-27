#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

template <typename T>
class MyStack
{
private:
	vector<T> es;

public:
	inline	T pop();
	inline	void push(T e);
	inline	bool is_empty() const;
	inline	auto size() const;
	inline	const T& top() const;
};

template <typename T>
T MyStack<T>::pop()
{
	if (is_empty())
	{
		throw out_of_range("stack is empty");
	}
	T t = es.back();
	es.pop_back();
	return t;
}

template <typename T>
void MyStack<T>::push(T e)
{
	es.push_back(e);
}

template <typename T>
bool MyStack<T>::is_empty() const
{
	return es.empty();
}

template <typename T>
auto MyStack<T>::size() const
{
	return es.size();
}

template <typename T>
const T& MyStack<T>::top() const
{
	if (is_empty())
	{
		throw out_of_range("stack is empty");
	}
	return es.back();
}


int main()
{
	MyStack < int >msi;
	cout << msi.size() << endl;//
	for (int i = 0; i < 1000000; i++)
	{
		msi.push(i);
	}

	msi.push(123);
	msi.push(456);
	msi.push(789);//
	cout << "栈顶" << msi.top() << endl;
	cout << msi.size() << endl;//
	try
	{
		cout << msi.pop() << endl;
		cout << msi.pop() << endl;
		cout << msi.pop() << endl;
		cout << msi.pop() << endl;
	}
	catch (out_of_range)
	{
		cout << "栈为空" << endl;
	}
}

