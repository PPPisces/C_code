#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	
	return 0;
}
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//����������Ԫ�ص�ַ�����������⣩
//	//1.sizeof�ڲ�������������--��ʾ�������� ������������Ĵ�С����λ���ֽ�
//	//2.ȡ��ַ������ &arr �����������������飬ȡ��������������ĵ�ַ
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr);//ȡ��������ĵ�ַ
//	
//	return 0;
//}
//void bubble_sort(int arr[], int sz)//ð�������Ż�
//{
//	int i = 0;
//	int flag = 1;//������һ��Ҫ����������Ѿ�����
//	for (i; i < sz - 1; i++)
//	{
//		int j = 0;//ÿһ������
//		for (j; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//������������ֲ���ȫ����
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 2,1,3,4,5,6,7,8,9 };//��arr���򣬱������
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);//arr�����飬��arr��������ʱ��ʵ���ϴ��ݹ�ȥ��������arr���׵�ַ
//	//&arr[0]
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//void bubble_sort(int arr[],int sz)//ð������
//{
//	int i = 0;
//	
//	for (i; i < sz - 1; i++)
//	{
//		int j = 0;//ÿһ������
//		for (j; j <sz-i-1 ; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };//��arr���򣬱������
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort (arr,sz);//arr�����飬��arr��������ʱ��ʵ���ϴ��ݹ�ȥ��������arr���׵�ַ
//	//&arr[0]
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}