#define _CRT_SECURE_NO_WARNINGS 1



///////////////////////////////��������Ϸ///////////////////////////////
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
void game()
{
	int ret = 0;
	int guess = 0;
	ret = rand() % 100 + 1;

	while (1)
	{
		printf("������1-100֮��������:>");
		scanf("%d", &guess);
		if (guess>ret)
		{
			printf("�´���\n");

		}
		else if (guess<ret)
		{
			printf("��С��\n");

		}
		else
		{
			printf("��ϲ��¶���\n");
			break;
		}


	}



}

void menu()
{
	printf("############################################\n");
	printf("######1 ��    0  ����    ###################\n");
	printf("############################################\n");
}
int main()
{
	int input = 0;
	srand(time(NULL));
	do
	{

		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("���ѱ���̭\n");
			break;
		default:
			printf("����������\n");
			break;
		}

	} while (input);
	return 0;
}
