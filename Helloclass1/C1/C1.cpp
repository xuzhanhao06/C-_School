#include "pch.h"
static char unit[10][50] = { {"零"},{"壹"}, {"贰"},{"叁"},{"肆"},{"伍"},{"陆"},{"柒"},{"捌"},{"玖"} };
static char limit[5][3] = { {"万"}, {"仟"},{"佰"},{"十"},{"元"} };//中文2个字符+ \0 就是三个字符空间
static int moneys[6];//支持6位数字
int main()
{
	int money, temp, count = 0,i=0;
	printf("请输入6位以下数字:");
	scanf_s("%d", &money);
	while (money != 0)
	{	moneys[i] = money % 10;
		money /= 10;
		i++;
		count++;
	}
	printf("numbers:%d  \n", count);
	printf("content: \n");
	Exchange(count);
	choise(count);
}


void Exchange(int count){
int temp1;
for (int i = 0; i < count; i++)
{
	if (count - i - 1 > i)
	{
		temp1 = *(moneys + count - i - 1);
		*(moneys + count - i - 1) = *(moneys + i);
		*(moneys + i) = temp1;
	}
}
}


void choise(int count)
{	/*
	for (i = 0; i < count; i++)
	{
		printf("%d -%s\n", moneys[i], unit[moneys[i]]);
	}
*/

/*if (count == 3)
{
	for (int i = 0; i<count; i++)
	{
	//	printf("%d -%s -%s\n", moneys[i], unit[moneys[i]], limit[i+2]);
		printf("%s %s ",  unit[moneys[i]], limit[i +2]);
	}
}*/
	switch (count)
	{
	case 1: {
		for (int i = 0; i < count; i++)
		{
			//	printf("%d -%s -%s\n", moneys[i], unit[moneys[i]], limit[i+2]);
			printf("%s %s ", unit[moneys[i]], limit[i + 4]);
		}
		break;
	}
	case 2: {
		for (int i = 0; i < count; i++)
		{
			//	printf("%d -%s -%s\n", moneys[i], unit[moneys[i]], limit[i+2]);
			printf("%s %s ", unit[moneys[i]], limit[i + 3]);
		}
		break;
	}
	case 3: {
		for (int i = 0; i < count; i++)
		{
			//	printf("%d -%s -%s\n", moneys[i], unit[moneys[i]], limit[i+2]);
			printf("%s %s ", unit[moneys[i]], limit[i + 2]);
		}
		break;
	}
	case 4: {
		for (int i = 0; i < count; i++)
		{
			//	printf("%d -%s -%s\n", moneys[i], unit[moneys[i]], limit[i+2]);
			printf("%s %s ", unit[moneys[i]], limit[i + 1]);
		}
		break;
	}
	case 5: {
		for (int i = 0; i < count; i++)
		{
			//	printf("%d -%s -%s\n", moneys[i], unit[moneys[i]], limit[i+2]);
			printf("%s %s ", unit[moneys[i]], limit[i]);
		}
		break;
	}
	case 6:
	{
		for (int i = 0; i < count; i++)
		{
			//	printf("%d -%s -%s\n", moneys[i], unit[moneys[i]], limit[i+2]);
			if (i == 0)
			{
				printf("%s 拾 ", unit[moneys[i]]);
				continue;
			}
			printf("%s %s ", unit[moneys[i]], limit[i - 1]);
		}
		break;
	}
	default:
		break;
	}
}
