#define _CRT_SECURE_NO_WARNINGS 1



///////////////////////////////猜数字游戏///////////////////////////////
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
		printf("请输入1-100之间的随机数:>");
		scanf("%d", &guess);
		if (guess>ret)
		{
			printf("猜大了\n");

		}
		else if (guess<ret)
		{
			printf("猜小了\n");

		}
		else
		{
			printf("恭喜你猜对了\n");
			break;
		}


	}



}

void menu()
{
	printf("############################################\n");
	printf("######1 玩    0  不玩    ###################\n");
	printf("############################################\n");
}
int main()
{
	int input = 0;
	srand(time(NULL));
	do
	{

		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("你已被淘汰\n");
			break;
		default:
			printf("请重新输入\n");
			break;
		}

	} while (input);
	return 0;
}
