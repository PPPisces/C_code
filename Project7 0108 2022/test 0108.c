#define _CRT_SECURE_NO_WARNINGS//vs路径 x86 vc文件 vcprojectitems newsc++文件 放进去后保存
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
	//存储数据 - 二维数组
	char board[ROW][COL];
	//初始化棋盘 - 初始化空格
	InitBoard(board, ROW, COL);

	//打印一下棋盘 - 本质是打印数组的内容
	DisplayBoard(board, ROW, COL);
	//下棋
	while (1)
	{
		//玩家下棋
		Playermove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家是否赢
		ret = IsWin(board, ROW, COL);

		if (ret != 'C')
		{
			break;

		}
		//电脑下棋
		Computermove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board,ROW,COL);
		
		if (ret != 'C')
		{
			break;

		}
		//判断电脑是否赢
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}
void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		
		menu();
		printf("请选择：");
		
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default :
			printf("选择错误，请重新选择\n");
			break;

		}
	} while (input);
}
int main()
{
	test();
	return 0;
}
//测试三子棋
//void game()//游戏的实现
//{
//	//数组存放棋盘信息
//	char board[ROW][COL];
//	//棋盘初始化
//	InitBoard(board, ROW, COL);
//	//打印棋盘
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
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("三子棋\n");
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default :
//			printf("选择错误，请重新选择\n");
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