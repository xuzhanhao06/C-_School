#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

struct  Dog
{
	int age;
	string name;
};

bool operator > (const  Dog &d1,const Dog &d2)
{
	return d1.name > d2.name;
}
 ostream & operator  << ( ostream& os,const Dog d)
{
	return 	os << d.age << d.name;
}

istream & operator  >> (istream& is, Dog d)
{
	return 	is >> d.age >> d.name;
}

template <typename T >
const T my_max(const T t1, const T t2,const T t3)
{
	if (t1 > t2 &&t1 > t3)
	{
		return t1;
	}
	else if (t2 > t1&&t2 > t3)
	{
		return t2;
	}
	else
	{
		return t3;
	}
}


int main()
{
/*	
	cout << my_max<int>(1, 2, 3) << endl;
	cout << my_max<double>(1.1, 2.2, 3.3) << endl;
	cout << my_max <string>("hello", "c++", "!") << endl;
	cout << my_max<float>(100, 3.14, 150.123) << endl;
	string my_max;
*/

	Dog d1, d2, d3;
//	cin >> d1 >> d2 >> d3 ;

	cin >> d1.age;
	cin >> d1.name;
	cin >> d2.age;
	cin >> d2.name;
	cin >> d3.age;
	cin >> d3.name;
	cout << my_max(d1, d2, d3);

	//cout << my_max(d1, d2, d3)<< my_max(d2, d1, d3)<<endl;





/*	d1.age = 8;
	d1.name = "abc";
	d2.age = 5;
	d2.name = "df";
	d3.age = 3;
	d3.name = "dwg";*/
//    my_max(d1, d2, d3) ;


}

