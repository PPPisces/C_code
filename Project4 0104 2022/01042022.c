#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>

//�ݹ龭������
//1. ��ŵ������ 2. ������̨�����⡶��ָoffer��
//��������
//int fib(int n)
//{	
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//
//	}
//	return c;
//	
//
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fib(n);
//	printf("%d\n", ret);
//	return 0;
//}
//int fib(int n)//�ݹ�
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//��쳲��������У� ��n��쳲������� �д����ظ����� �ʵݹ鲢������
//���ǵ���
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fib(n);
//	printf("%d\n", ret);
//	return 0;
//}

//��n�Ľ׳�
//int fac(int n)
//{
//	if (n == 1)//�ݹ�
//		return 1;
//	else
//		return n * fac(n - 1);
//}
//int fac(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 0; i <= n; i++)//ѭ��
//	{
//		ret *= i;
//	}
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);//
//	ret = fac(n);
//	printf("%d\n", ret);
//	return 0;
//
//}

//��д��������������ʱ���������ַ�������
//int my_strlen(char* str)
//{
//	int count = 0;
//	//�����ַ�������
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int my_strlen(char* str)
//{
//	//�ݹ�--�Ѵ��»�С
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//} 
//int main()
//{
//	char arr[] = "hello";
//	//int len = strlen(arr);
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10); 
//}
//int main()
//{
//	//����һ������ֵ���޷��ţ�������˳���ӡÿһλ�������룺1234�������1234
//	//�ݹ� recursion	
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	
//	return 0;
//}
//void add_1(int* n)
//{
//	(*n)++;
//}
//int main()
//{
//	int num = 0;
//	add_1(&num);
//	printf("%d ", num);
//	//���ú�����ʹ��numÿ������1
//
//	return 0;
//}
//						//���ݵ���������Ԫ�ص�ַ����������ָ��
//int binary_search(int arr[],int key,int sz)
//{
//	//�㷨ʵ��
//	int low = 0;
//	int high = sz - 1;
//	
//	while (low <= high)
//	{
//		int mid = (low + high) / 2;
//		if (arr[mid] < key)
//		{
//			low = mid + 1;
//
//		}
//		else if (arr[mid] > key)
//		{
//			high = mid - 1;
//
//		}
//		else
//			return mid;
//		
//	}
//	if (low > high)
//		return -1;
//	
//
//}
//
//int main()
//{
//	//���ֲ���-- ��һ�����������в��Ҿ��������
//	//����ҵ�������������±꣬�Ҳ�������-1
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	
//	int key = 17;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	
//	int ret = binary_search(arr, key,sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ�%d\n", ret);
//	}
//	
//	return 0;
//}
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		return 1;	
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж��Ƿ�Ϊ����
//		if ((is_leap_year(year)==1))
//		{
//			printf("%d ",year);
//		}
//	}
//	return 0;
//}
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	//��ӡ100-200֮�������
//	int i = 0;
//	scanf("%d", &i);
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		if (is_prime(i) == 1)
//		{
//			printf("����Ϊ%d\n", i);
//		}
//	}
//	return 0;
//}
//void swap(int* x, int* y)
//{
//	int temp = 2;
//	temp = *x;
//	*x = *y;
//	*y = temp;
//
//	return 0;
//}
//int main()
//{
//	int a = 15;
//	int b = 20;
//	
//	printf("%d%d\n", a, b);
//	swap(&a, &b);
//	printf("%d%d\n", a, b);
//	return 0;
//
//}
//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("%d\n", max);
//	return 0;
//}
//int main()
//{
//	char arr[] = "Hello  world";
//	memset(arr, '*', 5);
//	printf("%s", arr);
//	//memset--�ڴ�����
//	//strcpy--�ַ�������
//	//strlen --�ַ��������й�
//	return 0;
//
//}
//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}