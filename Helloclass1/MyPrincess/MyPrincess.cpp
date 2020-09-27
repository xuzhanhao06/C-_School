/*
*《小公主养成记》
*
*
*/
#include "pch.h"
#include <iostream>
#include <string>
#include <iomanip>//geshi
#include <cstdlib>
#include <ctime>
#include <vector>
#include <array>
using namespace std;

int main()
{
	//1.为父女取名字
	/*父亲名字*/
	string value_father_name;
	//女儿名字
	string value_daughter_name;
	//女儿生日日期
	int value_brith_mouth;
	int value_brith_date;
	//女儿星座
	string value_daughter_constell;

	/*女儿的五项基本信息：体力，智力，魅力，道德，气质*/
	//vector<int> value_vec_baseinfo;//动态分配内存的数组
	array<int, 5> value_array_baseinfo;
	/*五项基本属性值*/
	array<string, 5>value_array_baseinfo_name = {"体力","智力","魅力","道德","气质"};
	int value_daughter_gold = 500;
	//int value[5] 和 array<int,5>  一样，分配固定5个数组
	//星座二维数组
	string constell_names[12][2] = {
					{"白羊","水瓶"},//1
					{"水瓶","双鱼"},//2	
					{"双鱼","白羊"},//3
					{"白羊","金牛"},//4
					{"金牛","双子"},//5
					{"双子","巨蟹"},//6
					{"巨蟹","狮子"},//7
					{"狮子","处女"},//8
					{"处女","平秤"},//9
					{"平秤","天蝎"},//10
					{"天蝎","射手"},//11
					{"射手","白羊"}//12
	};
	int choise, temp1, temp2, temp3;

	cout << "父亲的姓名：";
	cin >> value_father_name;
	cout << "女儿的姓名:";
	cin >> value_daughter_name;
	cout << "女儿的生日:";
	cin >> value_brith_mouth >> value_brith_date;

	//各个月份的跨星座日期
	int constell_dates[]{20,19,21,20,21,22,23,23,23,24,23,22};
	value_daughter_constell = constell_names[value_brith_mouth - 1][value_brith_date / constell_dates[value_brith_mouth - 1]];
	cout << "女儿信息：" << endl;
	cout << "女儿姓名：" << value_daughter_name<< endl;
	cout << "生日：1659-" << value_brith_mouth << "-" << value_brith_date  << endl;
	cout << "女儿星座是：" << value_daughter_constell << endl;

	if (value_daughter_constell == "白羊")
	{
	/*	value_vec_baseinfo.push_back(80);
		value_vec_baseinfo.push_back(15);
		value_vec_baseinfo.push_back(15);
		value_vec_baseinfo.push_back(11);
		value_vec_baseinfo.push_back(21);*/
		value_array_baseinfo[0] = 80;
		value_array_baseinfo[1] = 15;
		value_array_baseinfo[2] = 15;
		value_array_baseinfo[3] = 11;
		value_array_baseinfo[4] = 21;
	}
	else if (value_daughter_constell == "水瓶")
	{
		value_array_baseinfo[0] = 15;
		value_array_baseinfo[1] = 80;
		value_array_baseinfo[2] = 15;
		value_array_baseinfo[3] = 11;
		value_array_baseinfo[4] = 21;
	}

	//2.为女儿录入初始信息 生日 ，星座
	//根据女儿星座，设置游戏的基本参数（体力，智力，魅力，道德，气质）
/*	int randNum;
	srand(time(NULL));
	randNum = rand();*/
	//3.开始游戏大循环
	//游戏从1659年6月开始


	//4.根据各项参数，判定游戏结果
	for (int year = 1659; year <= 1659 + 7; year++)
	{
		for (int month = (year == 1659) ? 6: 1; month <= 12; month++)
		{
			if (month == value_brith_mouth)
			{
				cout << "本月是" << value_daughter_name << "生日,要不要送礼物？" << endl;
				//根据用户输入判断
			}
			cout << "\n1.查看状态 \n2.安排行程 \n3.亲子谈话 \n4.存档 \n5.读档 " << endl;
			cin >> choise;
			switch (choise)
			{
			case 1://查看状态
				cout << "女儿信息：" << endl;
				cout << "女儿姓名：" << value_daughter_name << endl;
				cout << "生日：1659-" << value_brith_mouth << "-" << value_brith_date << endl;
				cout << "女儿星座是：" << value_daughter_constell << endl;
				cout << "金币:" << value_daughter_gold << endl;
			//打印核心属性
				cout << left;//所有左对齐
				for (int i = 0; i < 5; i++)
				{
					cout << value_array_baseinfo_name[i] <<":"<<setw(2)<< value_array_baseinfo[i] << endl;//setw(2)输出之间有2个空格
					//计算实心方框的数量
					int solidCount = value_array_baseinfo[i] / 10;
					for (int j = 0; j < 10; j++)
					{
						if (j < solidCount)
						{
							cout << "■";
						}
						else
							cout << "□";
					}
					cout << endl;

				}
				break;
			case 2://安排行程，一月最多3个行程
			{
				string month_parts[] = {"上旬","中旬","下旬"};
				for (int i = 0; i < 3; i++)
				{
					cout << month << "月 --" << month_parts[i] << endl;
					cout << "1.学习武艺 \n2.上私塾 \n3.学习礼法\n4.出城修行 \n5.打工赚钱";
					cout << "请选择：";
					cin >> choise;
					//判断没钱情况 ：强制打工
					srand(time(NULL));
					if (choise=1)
					{
						value_array_baseinfo[0] += temp1 = rand() % 11;//rand()范围 0-32367
						value_array_baseinfo[2] += temp2 = rand() % 11;
						value_daughter_gold -= temp3 = rand() % 51;//0-50
						cout << "体力+" << temp1 << ",魅力+" << temp2 << ",金钱-" << temp3<<endl;
					}
					else if (choise = 5)
					{
						value_daughter_gold += temp3 = rand() % 101;
						cout << "通过努力打工，赚到了" << temp3 << "个金币！" << endl;
					}
				}
			}
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			default:
				break;
			}

		}
	}



}


