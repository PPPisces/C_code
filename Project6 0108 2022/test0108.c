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
//	//数组名是首元素地址（有两个例外）
//	//1.sizeof内部单独放数组名--表示整个数组 计算整个数组的大小，单位是字节
//	//2.取地址数组名 &arr 数组名代表整个数组，取出的是整个数组的地址
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr);//取的是数组的地址
//	
//	return 0;
//}
//void bubble_sort(int arr[], int sz)//冒泡排序优化
//{
//	int i = 0;
//	int flag = 1;//假设这一趟要排序的数字已经有序
//	for (i; i < sz - 1; i++)
//	{
//		int j = 0;//每一趟排序
//		for (j; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//本趟排序的数字不完全有序
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
//	int arr[] = { 2,1,3,4,5,6,7,8,9 };//对arr排序，变成升序
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);//arr是数组，对arr传参数的时候，实际上传递过去的是数组arr的首地址
//	//&arr[0]
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//void bubble_sort(int arr[],int sz)//冒泡排序
//{
//	int i = 0;
//	
//	for (i; i < sz - 1; i++)
//	{
//		int j = 0;//每一趟排序
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
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };//对arr排序，变成升序
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort (arr,sz);//arr是数组，对arr传参数的时候，实际上传递过去的是数组arr的首地址
//	//&arr[0]
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}