#pragma once

//头文件的包含
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//符号的定义
#define ROW 3
#define COL 3

//函数的声明

//初始化棋盘的
void InitBoard(char board[ROW][COL], int row, int col);

//打印棋盘的函数
void DisplayBoard(char board[ROW][COL], int row, int col);
void Playermove(char board[ROW][COL], int row,int col);
void Computermove(char board[ROW][COL], int row, int col);
//告诉我们四种游戏状态
//玩家赢 ‘*’
//电脑赢 ‘#’
//平局   ‘Q’
//继续   ‘C’
char IsWin(char board[ROW][COL],int row, int col);

