#include "pch.h"

Hero heros[5];
Job jobs[] = {
	{1,"法师","biubiubiu"},
	{2,"法师2","biubiubiu"},
	{3,"法师3","biubiubiu"},
	{4,"法师4","biubiubiu"},
	{5,"机甲师","biubiubiu"},
};
void InputHero()
{
	int jobChoice;
	for (int i = 0; i < 1; i++)
	{
		
		printf("请输入第%d位英雄信息:\n", i + 1);
		heros[i].id = i + 1;
		printf("名称：\n");
		heros[i].name = (char*)malloc(50);//50个空间
		scanf_s("%s",heros[i].name,10);
		printf("sex:\n");
		//heros[i].sex= _getch();

		scanf_s("%c", &heros[i].sex,10);
	//	fflush(stdin);//录入字符后记得清空缓冲区 gcc-
	//	int fflush(FILE *stream);
		/* 通过 while 循环把输入流中的余留数据“吃”掉 */
		while ((heros[i].sex = getchar()) != '\n' && heros[i].sex != EOF);      
		 /* 使用 scanf("%*[^\n]"); 也可以清空输入流， */
		for (int j = 0; j < 5; j++)
		{
			printf("%s \n",jobs[j].name);

		}
		printf("请选择职业：（1-5）\n");
		scanf_s("%d", &jobChoice);
	
		heros[i].job = jobs[jobChoice -1];
		printf("%s \t当前职业：《%s》\n", heros[i].name, heros[i].job.name);

	}
}

void ShowHero()
{


}