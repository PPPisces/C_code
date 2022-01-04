#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>

//递归经典问题
//1. 汉诺塔问题 2. 青蛙跳台阶问题《剑指offer》
//迭代方法
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
//int fib(int n)//递归
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//求斐波那契数列： 第n个斐波那契数 有大量重复计算 故递归并不合适
//考虑迭代
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fib(n);
//	printf("%d\n", ret);
//	return 0;
//}

//求n的阶乘
//int fac(int n)
//{
//	if (n == 1)//递归
//		return 1;
//	else
//		return n * fac(n - 1);
//}
//int fac(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 0; i <= n; i++)//循环
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

//编写函数不允许创建临时变量，求字符串长度
//int my_strlen(char* str)
//{
//	int count = 0;
//	//计算字符串长度
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int my_strlen(char* str)
//{
//	//递归--把大事化小
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
//	//接受一个整型值（无符号），按照顺序打印每一位。如输入：1234，输出：1234
//	//递归 recursion	
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
//	//调用函数，使得num每次增加1
//
//	return 0;
//}
//						//传递的是数组首元素地址，本质上是指针
//int binary_search(int arr[],int key,int sz)
//{
//	//算法实现
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
//	//二分查找-- 在一个有序数组中查找具体的数字
//	//如果找到返回这个数的下标，找不到返回-1
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	
//	int key = 17;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	
//	int ret = binary_search(arr, key,sz);
//	if (ret == -1)
//	{
//		printf("找不到该数字\n");
//	}
//	else
//	{
//		printf("找到了：%d\n", ret);
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
//		//判断是否为闰年
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
//	//打印100-200之间的素数
//	int i = 0;
//	scanf("%d", &i);
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		if (is_prime(i) == 1)
//		{
//			printf("素数为%d\n", i);
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
//	//memset--内存设置
//	//strcpy--字符串拷贝
//	//strlen --字符串长度有关
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