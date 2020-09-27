#include "pch.h"
#include <string>
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;
int main()
{
	int hp1 = 100;
	int hp2 = 100;

	int attack1 = 0;
	int attack2 = 0;
	int randNum;//用来存放玩家攻击先后的随机数变量

	//1.模拟玩家出招：可以采用随机数是奇数/偶数方式来决定谁先攻击
	srand(time(NULL));	//更新时间随机种子		//#include<cstdlib>
												//#include<ctime>
	//奇数-1号先 ，偶数 2号先
	while (hp1 > 0 && hp2 > 0)
	{
		randNum = rand();
		if (randNum % 2 == 1)//奇数
		{
			attack1 = (int)(5 + 10 * rand() / (RAND_MAX + 1.0));
			attack2 = (int)(5 + 10 * rand() / (RAND_MAX + 1.0));

			hp2 -= attack1;//diao xie
			hp1 -= attack2;
		}
		else //偶数
		{
			attack2 = (int)(5 + 10 * rand() / (RAND_MAX + 1.0));
			//	5-15	的伤害
			attack1 = (int)(5 + 10 * rand() / (RAND_MAX + 1.0));

			hp1 -= attack2;//diao xie
			hp2 -= attack1;
		}

	}
	//2.打印结果
	cout << "  NO.1:  " << hp1 << endl;
 	cout << "  NO.2:  " << hp2 << endl;
	


/*
	int n = 0;
	while (n++ <= 2)
	{
	};
	cout << n; n的次数是4；
*/

/*
	double money = 800.0;
	int year = 2015;
	while (money <= 2000)
	{
		money *= 1.25;
		year++;
		cout << year << "    "<<money<< endl;
	}
*/



/*
	string password;
	int i = 0;
	while (i < 3)
	{
		cin >> password;
		cout << "输入的密码："<<password << endl;
		i++;
		//判断输入是否正确
		if (password != "12345678")
		{
			if (i == 3)
			{
				cout << "密码错误 ，推出"<<endl;
				exit(0);
			}
		}
		else 
		{
			cout << "密码ture"  << endl;
		}
	}
*/	


/*
	int num = 1;
	int sum = 0;
	while (num <= 100)
	{
		sum += num;
		num++;
	}
	cout << sum << endl;
*/


/*
	int num = 5;
	cout << sizeof(num++) << endl;//4
	cout << num << endl;//5
*/


}


