#define _CRT_SECURE_NO_WARNINGS//vs·�� x86 vc�ļ� vcprojectitems newsc++�ļ� �Ž�ȥ�󱣴�
#include <stdio.h>
#include "game.h"
void menu()
{
	printf("******************************\n");
	printf("******    1. play        *****\n");
	printf("******    0. exit        *****\n");
	printf("******************************\n");
}

void game()
{
	char ret = 0;
	//�洢���� - ��ά����
	char board[ROW][COL];
	//��ʼ������ - ��ʼ���ո�
	InitBoard(board, ROW, COL);

	//��ӡһ������ - �����Ǵ�ӡ���������
	DisplayBoard(board, ROW, COL);
	//����
	while (1)
	{
		//�������
		Playermove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		ret = IsWin(board, ROW, COL);

		if (ret != 'C')
		{
			break;

		}
		//��������
		Computermove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board,ROW,COL);
		
		if (ret != 'C')
		{
			break;

		}
		//�жϵ����Ƿ�Ӯ
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}
void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		
		menu();
		printf("��ѡ��");
		
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default :
			printf("ѡ�����������ѡ��\n");
			break;

		}
	} while (input);
}
int main()
{
	test();
	return 0;
}
//����������
//void game()//��Ϸ��ʵ��
//{
//	//������������Ϣ
//	char board[ROW][COL];
//	//���̳�ʼ��
//	InitBoard(board, ROW, COL);
//	//��ӡ����
//	DisplayBoard(board,ROW,COL);
//}
//void menu()
//{
//	printf("*****************\n");
//	printf("**1.play 0.exit**\n");
//	printf("*****************\n");
//}
//void test()
//{
//	int input = 0;
//	do
//	{
//		
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("������\n");
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default :
//			printf("ѡ�����������ѡ��\n");
//			break;
//
//		}
//	} while (input);
//}
//int main()
//{
//	test();
//	return 0;
//}