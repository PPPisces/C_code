#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
void game()
{
	//1.��������� 
	int ret = 0;
	int guess = 0;
	ret = rand()%100+1;//���������1-100
	//2.������
	while (1)
	{
		printf("������֣�\n");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("����\n");
		}
		else if (guess < ret)
		{
			printf("С��\n");
		}
		else
		{
			printf("������\n");
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
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//��������Ϸ
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("������ѡ��\n");
			break;
		}


	} while (input);
	return 0;
}

//int main()
//{
//	//�žų˷���
//	int i = 0;
//	int j = 0;
//	//��
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