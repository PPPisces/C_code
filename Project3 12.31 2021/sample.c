#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAXSIZE 50
#include <string.h>
#include<windows.h>
#include<stdlib.h>

enum Sex {

	male,
	female,
	secret
};
typedef unsigned int ul;
int add(int x, int y) 
{
	int z = x + y;
	return z;

}
void test()
{
	static int a = 1;
	a++;
	printf("a=%d\n", a);
}
struct Book
{
	char name[20];
	short int price;
};
int fact(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{

		return n * fact(n - 1);
	}

}
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i=0; i < 3; i++)
	{
		printf("����������\n");
		scanf("%s", password);
		if (strcmp(password,"123456")==0)//�ȺŲ����ж��ַ����Ƿ���ȣ�ʹ��strcmp
		{
			printf("��½�ɹ�\n");
			break;
		}

	}
	if (i == 3)
	{
		printf("������������˳�����\n");
		 
	}

	return 0;
}
//int main()
//{
//	char arr1[] = "welcome to my house!!!!";
//	char arr2[] = "#######################";
//	int low = 0;
//	//int high = sizeof(arr1) / sizeof(arr1[0])-2;
//	int high = strlen(arr1) - 1;
//	while (low<=high)
//	{
//		arr2[low] = arr1[low];
//		arr2[high] = arr1[high];
//		printf("%s\n", arr2);
//		//��Ϣһ��
//		Sleep(1000);
//		system("cls");//ִ��ϵͳ����ĺ���
//		low++;
//		high--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k =6;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int low = 0;
//	int high = sz - 1;
//	while(low<=high)
//	{
//		int mid = (low + high) / 2;
//
//		if (arr[mid] > k)
//		{
//			high = mid - 1;
//
//		}
//		else if (arr[mid] < k)
//		{
//			low = mid + 1;
//		}
//		else
//		{
//			printf("%d", mid);
//			break;
//		}
//	}
//	if (low > high)
//	{
//		printf("�Ҳ���"); 
//	}
//	
//	return 0;
//
//}
//int main()
//{
//	int x = 0;
//	int sum = 0;
//	
//	
//	for (x = 1;x <= 10; x++)
//	{
//		sum = fact(x) + sum;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0; 
//	int sum = 1;
//	int ret = 0;
//	for(n=1;n<=3;n++)
//	{
//		sum = 1;
//		for (i = 1; i <= n; i++)
//		{
//
//			sum = sum * i;
//		}
//		ret = ret + sum;
//	}
//	
//	printf("%d\n", ret);
//	return 0;
//}

	/*int x = 0;
	scanf("%d", &x);
	printf("%d", fact(x));



	return 0;*/

	/*int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch>'9')
			continue;
		putchar(ch);

	}
	return 0;*/



	//int ch = 0;
	//int ret = 0;
	//char password[20] = {0};
	//printf("���������룺");
	//scanf("%s", &password);
	//while ((ch = getchar()) != '\n')
	//{
	//	;
	//}
	//printf("��ȷ�ϣ�Y/N����");
	//ret = getchar();
	//if (ret == 'Y')
	//{

	//	printf("ȷ�ϳɹ���");

	//}
	//else
	//{
	//	printf("ȷ��ʧ��");
	//}


	///*putchar(ch);*/
	//return 0;

//int main()
//{
//
//
//	int i = 1;
//	while (i < 11)
//	{	
//		if (5 == i)
//			continue;
//
//		printf("%d\n", i);
//		i++;
//	}
//	
//	return 0;
//
//
//}
//int main()
//{
//
//
//
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("����3\n");
//		break;
//
//	case 4:
//		printf("����4\n");
//		break;
//	case 5:
//		printf("����5\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//	return 0;

	/* int i = 1;
	 while (i<101)
	 {
		 if (i % 2 == 1)
		{
			 printf("%d\n", i);

		}
		 i++;
	 }

	 return 0;*/

 
	 
	 /*
	 int num = 4;
	 if (num == 6)
	 {
		 printf("�Ǻ�\n");
	 }
	 else
		 printf("sb\n");*/
	/* int age;
	 scanf("%d", &age);
	 if (age < 18)
	 { 
		 printf("δ����\n");
		 printf("����̸������\n");
	 }
		 
	 else if (age >= 18 && age < 28)
		 printf("����\n");
	 else if (age >= 28 && age < 50)
		 printf("׳��\n");
	 else if (age >= 50 && age < 90)
		 printf("����\n");
	 else
		 printf("�ϲ���");*/

	
	/*int a ;
	int b ;
	int c;
	c = max(a, b);
	scanf("%d%d", &a, &b);*/
	

	/*int i = 0;
	
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d\n", arr1[4]);
	while (i < 10) 
	{
		printf("%d\n", arr1[i]);
		i++;

	}*/

	/*int line = 0;

	printf("��ʼ�ô���\n");
	while (line < 20000) 
	{
		printf("��һ�д��� ������%d\n",line);
		line++;
	}
	printf("good offer\n");*/
	/*int input ;
	printf("ѡ���������\n");
	scanf("%d", &input);
	if (input == 1)

		printf("���\n");


	else
		printf("shibaile\n");*/
	/*const int num1 = 4;
	enum Sex s = male;
	int arr[44];
	int a = 1;
	int b = 2;
	char q = 'a';
	int sum = 0;
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c'};*/
	/*printf("%s\n", arr2);
	printf("%s\n", arr1);
	printf("%d\n", q);
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));*/
	//printf("%d\n", sizeof(char));
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof(double));
	//printf("%d\n", sizeof(long));
	//printf("%d\n", sizeof(long long));
	//printf("%d\n", sizeof(short));
	//printf("%d\n", sizeof(float));
	///*char ch = 'A';
	
	//short int������
	//long
	///float f = 5.0;
	/*double b = 3.14;
	printf("%lf\n", b);
	printf("%f\n", f);
	printf("%d\n", age);
	printf("%c\n",ch);*/
