#pragma once
//#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include "MyStack.h"
using namespace std;

template <typename T>
class MyStack
{
private:
	vector<T> es;

public:
		T pop();
		void push(T e);
		bool is_empty() const;
		auto size() const;
		const T& top() const;
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
