#include "pch.h"
#include <iostream>
using namespace std;
#include <string>

struct Dog {
	int age;
	string name;
};

bool operator > (const Dog &d1, const Dog &d2) {
	return d1.age > d2.age;
}

bool operator < (const Dog &d1, const Dog &d2) {
	return d1.age < d2.age;
}

bool operator == (const Dog &d1, const Dog &d2) {
	return d1.age == d2.age && d1.name == d2.name;
}

//+++
bool operator + (const Dog &d1, const Dog &d2) {
	return d1.age + d2.age ;
}

ostream& operator << (ostream& os, const Dog& d) {
	return os << d.age << d.name;
}

istream& operator >> (istream& is, Dog& d) {
	return is >> d.age >> d.name;
}

template <typename T> T my_max(const T t1, const T t2, const T t3) {
	if (t1 > t2&&t1 > t3) {
		return t1;
	}
	else if (t2 > t3&&t2 > t1)
	{
		return t2;
	}
	else if (t3 > t2&&t3 > t1) {
		return t3;
	}
	else if (t3 == t2 & t2 == t1) {
		return t3, t2, t1;
	}
}

template <typename T> T my_min(const T t1, const T t2, const T t3) {
	if (t1 < t2&&t1 < t3) {
		return t1;
	}
	else if (t2 < t3&&t2 < t1) {
		return t2;
	}
	else if (t3 < t2&&t3 < t1)
	{
		return t3;
	}
	else if (t3 == t2 & t2 == t1) {
		return t3, t2, t1;
	}
}
template <typename T> T my_j(const T t1, const T t2, const T t3)
{
	 t1 + t2;
	return t1 + t2;
}
/*
template <typename T1, typename T2, typename T3 >
T1 sum(T1 t1, T2 t2, T2 t3)
{
	return t1 + t2 + t3;
}
*/


int main()
{
	Dog d1, d2, d3;
	cout << "输入三组：" << endl;
	cin >> d1.age;
	cin >> d1.name;
	cin >> d2.age;
	cin >> d2.name;
	cin >> d3.age;
	cin >> d3.name;
	

	cout << "上面最大，下面最小，两个一样则相等" << endl;
	cout << my_max(d1, d2, d3) << endl;
	cout << my_min(d1, d2, d3) << endl;
//	cout << sum<float,float, float>(d1.age,d2.age,d3.age) << endl;
	cout << my_j(d1,d2,d3) << endl;

	/*cout << my_max<double>(1.2, 2.3, 3.4) << endl;
	cout << my_max<string>("hello", "c++", "!") << endl;
	cout << my_max<int>(10, 60, 55) << endl;
	cout << my_max<float>(10, 23, 55.5) << endl;*/

}

