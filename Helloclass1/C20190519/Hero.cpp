#include "pch.h"

Hero heros[5];
Job jobs[] = {
	{1,"��ʦ","biubiubiu"},
	{2,"��ʦ2","biubiubiu"},
	{3,"��ʦ3","biubiubiu"},
	{4,"��ʦ4","biubiubiu"},
	{5,"����ʦ","biubiubiu"},
};
void InputHero()
{
	int jobChoice;
	for (int i = 0; i < 1; i++)
	{
		
		printf("�������%dλӢ����Ϣ:\n", i + 1);
		heros[i].id = i + 1;
		printf("���ƣ�\n");
		heros[i].name = (char*)malloc(50);//50���ռ�
		scanf_s("%s",heros[i].name,10);
		printf("sex:\n");
		//heros[i].sex= _getch();

		scanf_s("%c", &heros[i].sex,10);
	//	fflush(stdin);//¼���ַ���ǵ���ջ����� gcc-
	//	int fflush(FILE *stream);
		/* ͨ�� while ѭ�����������е��������ݡ��ԡ��� */
		while ((heros[i].sex = getchar()) != '\n' && heros[i].sex != EOF);      
		 /* ʹ�� scanf("%*[^\n]"); Ҳ��������������� */
		for (int j = 0; j < 5; j++)
		{
			printf("%s \n",jobs[j].name);

		}
		printf("��ѡ��ְҵ����1-5��\n");
		scanf_s("%d", &jobChoice);
	
		heros[i].job = jobs[jobChoice -1];
		printf("%s \t��ǰְҵ����%s��\n", heros[i].name, heros[i].job.name);

	}
}

void ShowHero()
{


}