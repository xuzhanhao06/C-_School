// LLK.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <algorithm>
#include <ctime>   //调用系统时间
#include <cstdlib> 
using namespace std;

int main()
{
	int x, y;
	int e=0;
	srand(time(0));
	cout << "进入连连看游戏 \n";
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	while(true){
	
	for (int i = 0; i < 5; i++)


	{
		x = rand() % 5 + 1;
		y = rand() % 5 + 1;

		if (x == y)
		{
			e++;
		} 
		if (x == 1)
		{
			if (y == 1)
			{
				cout << "同apple，分数+1\n" << endl;   //1是apple
			}
			else if (y == 2)
			{
				cout << "apple ,pear ,分数+0\n" << endl; //2 pear
			}
			else if (y == 3)
			{
				cout << "apple ,Banana ,分数+0\n" << endl; //3 Banana
			}
			else if (y == 4)
			{
				cout << "apple ,tomato ,分数+0\n" << endl; //4 tomato
			}
			else if (y == 5)
			{
				cout << "apple ,blackberry ,分数+0\n" << endl; // 5 blackberry 
			}

		}
		else if (x == 2)
		{
			if (y == 1)
			{
				cout << "pear，apple分数+0\n" << endl;   //1是apple
			}
			else if (y == 2)
			{
				cout << "同pear ,分数+1\n" << endl; //2 pear
			}
			else if (y == 3)
			{
				cout << "pear ,Banana ,分数+0\n" << endl; //3 Banana
			}
			else if (y == 4)
			{
				cout << "pear ,tomato ,分数+0\n" << endl; //4 tomato
			}
			else if (y == 5)
			{
				cout << "pear ,blackberry ,分数+0\n" << endl; // 5 blackberry 
			}

		}

		else if (x == 3)
		{
			if (y == 1)
			{
				cout << "Banana，apple分数+0\n" << endl;   //1是apple
			}
			else if (y == 2)
			{
				cout << "Banana ,pear分数+0\n" << endl; //2 pear
			}
			else if (y == 3)
			{
				cout << "Banana ,Banana ,分数+1\n" << endl; //3 Banana
			}
			else if (y == 4)
			{
				cout << "Banana,tomato ,分数+0\n" << endl; //4 tomato
			}
			else if (y == 5)
			{
				cout << "Banana ,blackberry ,分数+0\n" << endl; // 5 blackberry 
			}

		}

		else if (x == 4)
		{
			if (y == 1)
			{
				cout << "tomato，apple分数+0\n" << endl;   //1是apple
			}
			else if (y == 2)
			{
				cout << "tomato ,pear分数+0\n" << endl; //2 pear
			}
			else if (y == 3)
			{
				cout << "tomato ,Banana ,分数+0\n" << endl; //3 Banana
			}
			else if (y == 4)
			{
				cout << "tomato,tomato ,分数+1\n" << endl; //4 tomato
			}
			else if (y == 5)
			{
				cout << "tomato ,blackberry ,分数+0\n" << endl; // 5 blackberry 
			}

		}

		else if (x == 5)
		{
			if (y == 1)
			{
				cout << "blackberry ，apple分数+0\n" << endl;   //1是apple
			}
			else if (y == 2)
			{
				cout << "blackberry  ,pear分数+0\n" << endl; //2 pear
			}
			else if (y == 3)
			{
				cout << "blackberry  ,Banana ,分数+0\n" << endl; //3 Banana
			}
			else if (y == 4)
			{
				cout << "blackberry ,tomato ,分数+0\n" << endl; //4 tomato
			}
			else if (y == 5)
			{
				cout << "blackberry  ,blackberry ,分数+1\n" << endl; // 5 blackberry 
			}

		}
	
	    
	}		
	
	        
			cout << "统计分数为：" << e << endl;
			cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
			cout << "是否继续1 or 0\n";
			int  t;
			cin >> t;
			if (t == 0)
				{
				cout << "结束游戏\n";
				break;
				}
			

		

	 }
  
			
}




