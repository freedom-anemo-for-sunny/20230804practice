#define  _CRT_SECURE_NO_WARNINGS  1
#pragma  warning(disable:6031)

#include<stdio.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
#include<assert.h>

////练习1
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int i = 0;
//	int x = 1;
//	int t = 0;
//	printf("输入一个数字(0~9)");
//	while (1)
//	{
//		scanf("%d", &a);
//		if (a >= 0 && a <= 9)
//			break;
//		else
//			printf("输入错误，请重新输入");
//	}
//	printf("输入位数：");
//	while (1)
//	{
//		scanf("%d", &n);
//		if (n > 0)
//			break;
//		else
//			printf("输入错误，请重新输入");
//	}
//	for(i=0;i<n;i++)
//	{
//		t += (n - i) * x;
//		x *= 10;
//	}
//	printf("%d", a * t);
//	return 0;
//}


////练习2-水仙花数
//int main()
//{
//	int i = 0, j = 0;
//	int t = 0;
//	int arr[6] = { 0 };
//	for (i = 1; i <= 100000; i++)
//	{
//		int n = 0;
//		t = 0;
//		for (j = i; j > 0; j /= 10, n++)
//		{
//			arr[n] = j % 10;
//		}
//		for (j = 0; j < n; j++)
//		{
//			t += pow(arr[j] / 1.0 , n / 1.0 );
//		}
//		if (i == t)
//		{
//			printf("%d ", i);
//			Sleep(100);
//		}
//	}
//	return 0;
//}


////练习3-打印菱形
//int main()
//{
//	int a = 0;
//	int i = 0, j = 0;
//    printf("请输入菱形边长：");
//	scanf("%d", &a);
//	for (i = 0; i < a; i++)
//	{
//		for (j = 0; j < a - i - 1; j++)
//			printf(" ");
//		for (j = 0; j < 2 * i + 1; j++)
//			printf("*");
//		printf("\n");
//	}
//	for (i = 0; i < a - 1; i++)
//	{
//		for (j = 0; j < i + 1; j++)
//			printf(" ");
//		for (j = 0; j < (2 * a - 2 * i - 3); j++)
//			printf("*");
//		printf("\n");
//	}
//	return 0;
//}


////练习4-空瓶换汽水
//int main()
//{
//	int a = 0;
//	int sum = 0;
//	int t = 0;//剩余空瓶数
//	int tmp = 0;
//	printf("请输入瓶子数：");
//	scanf("%d", &a);
//	while (a > 0)
//	{
//		sum += a;
//		tmp = t;
//		t = (a + t) % 2;
//		a = (a + tmp) / 2;
//	}
//	printf("%d", sum);
//	return 0;
//}


////练习5-排列-奇数位于偶数前方
//int compare(void* e1, void* e2)
//{
//	int p1 = 0, p2 = 0;
//	p1 = (*((int*)e1)) % 2;
//	p2 = (*((int*)e2)) % 2;
//	if (p1 > p2)
//		return -1;
//	else if (p1 < p2)
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = rand();
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	qsort(arr, 10, 4, compare);
//	for (i = 0; i < 10; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}


////练习6-打印杨辉三角
//int main()
//{
//	int *arr1, *arr2;
//	int a = 0;
//	int i = 0, j = 0;
//	printf("请输入需要打印的行数");
//	scanf("%d", &a);
//	assert(a > 0);
//	arr1 = (int*)malloc(4 * a);
//	arr2 = (int*)malloc(4 * a);
//	arr1[0] = 1, arr2[0] = 1;
//	printf("%d\n", arr1[0]);
//	for (i = 0; i < a - 1; i++)
//	{
//		for (j = 0; j < i; j++)
//			arr2[j + 1] = arr1[j] + arr1[j + 1];
//		arr2[i + 1] = 1;
//		printf("%d ", arr1[0]);
//		for (j = 1; j < i + 2; j++)
//		{
//			arr1[j] = arr2[j];
//			printf("%d ", arr1[j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


////练习7-赛马问题
////难，不会
//struct horse
//{
//	int number;
//	int speed;
//};
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	struct horse *arr1, *arr2;
//	int a = 0, b = 0;
//	int i = 0;
//	printf("请输入马的个数:");
//	scanf("%d", &a);
//	printf("请输入跑道数:");
//	scanf("%d", &b);
//	arr1 = (struct horse*)malloc(sizeof(struct horse) * a);
//	arr2 = (struct horse*)malloc(sizeof(struct horse) * b);
//	for (i = 0; i < a; i++)
//	{
//		arr1[i].number = i + 1;
//		arr1[i].speed = rand();
//		printf("第%2d只马的速度为%d\n", arr1[i].number, arr1[i].speed);
//	}
//}


//练习8-逻辑推理
int main()
{
	
}