#pragma once

//ͷ�ļ��İ���
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//���ŵĶ���
#define ROW 3
#define COL 3

//����������

//��ʼ�����̵�
void InitBoard(char board[ROW][COL], int row, int col);

//��ӡ���̵ĺ���
void DisplayBoard(char board[ROW][COL], int row, int col);
void Playermove(char board[ROW][COL], int row,int col);
void Computermove(char board[ROW][COL], int row, int col);
//��������������Ϸ״̬
//���Ӯ ��*��
//����Ӯ ��#��
//ƽ��   ��Q��
//����   ��C��
char IsWin(char board[ROW][COL],int row, int col);

