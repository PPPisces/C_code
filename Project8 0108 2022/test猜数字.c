#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
void game()
{
	//1.生成随机数 
	int ret = 0;
	int guess = 0;
	ret = rand()%100+1;//生成随机数1-100
	//2.猜数字
	while (1)
	{
		printf("请猜数字：\n");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("大了\n");
		}
		else if (guess < ret)
		{
			printf("小了\n");
		}
		else
		{
			printf("猜中了\n");
			break;
		}
	}
}
void menu()
{
	printf("*********************\n");
	printf("****1.play 0.exit****\n");
	printf("*********************\n");
}
int main()

{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择：\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//猜数字游戏
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("请重新选择：\n");
			break;
		}


	} while (input);
	return 0;
}

//int main()
//{
//	//九九乘法表
//	int i = 0;
//	int j = 0;
//	//行
//	for (i = 1; i <= 9; i++)
//	{
//
//		for (j = 1; j <= i; j++)
//		{
		/*	printf("%d*%d=%-2d ", i, j,i*j);
		}
		printf("\n");
	}
	return 0;
}*/