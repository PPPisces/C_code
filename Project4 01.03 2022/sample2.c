#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	char input[20] = { 0 };
	//�ػ�shutdown -s -t 60
	//ȡ���ػ� shutdown -a
	//system()-ִ��ϵͳ����
	system("shutdown -s -t 60");

	while (1)
	{
		printf("���Խ���һ���Ӻ�ػ���������룺sb������ȡ���ػ�\n�����룺");
		scanf("%s", input);
		if (strcmp(input, "sb") == 0)//�Ƚ������ַ���
		{
			system("shutdown -a");
			break;

		}
	}
 
	return 0;
}

//goto ���Ĺػ�����
//int main()
//{
//	char input[20] = { 0 };
//	//�ػ�shutdown -s -t 60
//	//ȡ���ػ� shutdown -a
//	//system()-ִ��ϵͳ����
//	system("shutdown -s -t 60");
//again:
//	printf("���Խ���һ���Ӻ�ػ���������룺sb������ȡ���ػ�\n�����룺");
//	scanf("%s", input);
//	if (strcmp(input, "sb") == 0)//�Ƚ������ַ���
//	{
//		system("shutdown -a");
//
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}




//��������Ϸ��
////1.��������һ�������
////2.������
//void menu()
//{
//	printf("*******************************\n");
//	printf("**** 1. play   0. exit     ****\n");
//	printf("*******************************\n");
//}
// //RAND_MAX --32767
//void game()
//{
//		 
//		printf("������\n");
//		//����һ��1-100�����
//		//��ʱ��������������������� 
//		//time_t time(time_t*timer);
//		
//		int guess = 0;//���ܲµ�����
//		//ʱ���
//		int ret = rand()%100+1;
//		//printf("%d\n", ret);
//		//������
//		while (1)
//		{
//			int i = 0;
//			printf("�������\n");
//			scanf("%d", &guess);
//			if (guess > ret)
//			{
//				printf("�´���\n");
//
//			}
//			else if (guess < ret)
//			{
//				printf("��С��\n");
//			}
//			else
//			{
//				printf("�¶���\n");
//				break;
//			}
//		}
//
//
//
//
//	}

//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));	
//	do 
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//��Ϸ����
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");//
//			break;
//		default :
//			printf("ѡ�����\n"); 
//			break;
//
//
//		}
//
//	} while (input );
//	return 0;
//
//}
//int main()
//{
//	int arr1[10] = { 0 };
//	int i = 0;
//	for (i = 0; i <= 9; i++)
//	{
//		scanf("%d", &arr1[i]);
//
//	}
//	int low = 0;
//	int high = sizeof(arr1) / sizeof(arr1[0]);
//	int key = 7;
//	int mid = 0;
//	while (low<=high)
//	{
//		mid = (low + high) / 2;
//		if (arr1[mid] > key)
//		{
//			high = mid - 1;
//		}
//		else if (arr1[mid] < key)
//		{
//			low = mid + 1;
//
//		}
//		else
//			break;
//
//	}
//	if (low <= high)
//	{
//		printf("%d\n", arr1[mid]);
//	}
//	else
//		printf("�Ҳ���");
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	//ȷ����ӡ9��
//	for (i = 1; i <= 9; i++)
//	{
//		//ÿ�ν�����ӡһ��
//		
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//
//}




//int main()
//{
//
//	int arr1[10] = { 0 };
//	int i = 0;
//	int max = arr1[0];
//	for (i = 0; i <= 9; i++)
//	{
//		scanf("%d", &arr1[i]);
//		
//	}
//	for (i = 0; i <= 9; i++)
//	{
//		if (arr1[i] >max)
//		{
//			
//			max = arr1[i];
//
//		}
//	}
//
//	
//	printf("%d\n",max);
//	return 0;
//
//}
//int main()
//{
//	float i = 15.0;
//	double sum = 0.0;
//	int flag = 1;
//	
//	for (i = 1; i <= 100; i++)
//	{
//
//		sum += flag*(1 / i) ;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//
//	return 0;
//}
//int main()
//{
//
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9) 
//			count++;
//		if (i / 10 == 9)
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		//�Գ��� ������2��i-1    i=a*b,a �� b��������һ�����֣�=����i
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j >sqrt(i))
//		{
//			count++;
//			printf("%d\n", i);
//
//		}
//
//		
//	}
//	printf("%d\n", count);
//	return 0;
//}
//int main()
//{
//
//	int year=0;
//	int count = 0;
//	for (year = 1000; year < 2001; year++)
//	{
//		
//		if (year % 4 == 0&&year%100!=0 )
//		{
//			printf("%d\n", year);
//			count++;
//		}
//		else if(year%400==0)
//		{
//			printf("%d\n", year);
//			count++;
//		}
//
//
//	}
//	printf("%d\n", count);
//	return 0;
//}
//int main()
//{	//շת�����
//
//	int a = 24;
//	int b = 18;
//	int r = 0;
//	scanf("%d%d", &a, &b);
//	while (r=a % b)
//	{	
//		a = b;
//		b = r;
//
//	}
//	printf("%d\n", b);
//	return 0;
//
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 101; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d\n", i);
//		}
//		
//	}
//	return 0;
//
//}
//int main()
//{
//	int a = 0;
//	int	b = 0;
//	int c = 0;
//	printf("������������\n");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int temp = a;
//		a = b;
//		b = temp;
//
//	}
//	if (a < c)
//	{
//		int temp = a;
//		a = c;
//		c = temp;
//
//	}
//	if (b < c)
//	{
//		int temp = b;
//		b = c;
//		c = temp;
//
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//
//}
//int main()
//{	
//	int a, b, c = 0;
//	printf("������������\n");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a >= b)
//	{
//		if (a >= c&&b>=c)
//		{
//			printf("%d %d %d\n", a, b, c);
//
//		}
//		else if (a >= b && b <= c)
//		{
//			printf("%d %d %d\n", a, c, b);
//		}
//
//	}
//	else if(a<=b&&b<=c)
//	{
//	
//		printf("%d %d %d\n", c,b,a);
//
//	}
//	else if (a >= b && a <= c)
//	{
//		printf("%d %d %d\n", c,a,b);
//
//	}
//	else if(a<=b&&c<=a)
//	{
//		printf("%d %d %d\n", b,a,c);
//	}
//	else if (a <= b && a <= c)
//	{
//		printf("%d %d %d\n", b,c,a);
//	}
//		
//	return 0;
//
//}