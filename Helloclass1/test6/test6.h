#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;
template <typename T>
class  MyQueue
{
private:
	vector<T> es;
public:
	inline void enque(T e);
	inline T deque();
	inline bool is_empty()const;
	inline auto size()const;
};
template <typename T>
inline T MyQueue<T>::deque()//³öÕ»
{
	if (is_empty())
	{
		throw out_of_range("stack is empty");
	}
	T t = es[0];
	es.erase(es.begin());
	return t;
}

template <typename T>
inline void MyQueue<T>::enque(T e)//Ñ¹Õ»
{
	es.push_back(e);
}

template <typename T>
inline bool MyQueue<T>::is_empty()const
{
	return es.empty();
}
template <typename T>
inline auto  MyQueue<T>::size()const
{
	return es.size();//Õ»µÄ³ß´ç
}
