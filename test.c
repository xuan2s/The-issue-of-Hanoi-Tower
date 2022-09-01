#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>


//累乘后期累加的联系

//int main()
//{
//	int i;
//	int ret = 1;
//	int sum = 0;
//	int n;
//	
//	
//	for (i = 1;i<= 3;i++)
//	{
//		
//		ret = ret * i;
//		sum = sum + ret;
//	}
//	printf("累乘=%d\n", ret);
//	printf("sum=%d\n", sum);
//	return 0;
//
//
////}

//二分法示范

//int main()
//{
//	int arr[] = {1,2,3,4,7,8,12};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int k;
//	printf("输入一个1~12的数>:");
//	scanf("%d", &k);
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("下标=%d\n", mid);
//			break;
//		}
//	}
//	if (right < left)
//	{
//		printf("404not found\n");
//	}
//	return 0;
//}


//归拢

//int main()
//{
//	char arr1[]="welcome to bit!!!!!";
//	char arr2[]="###################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	for (left,right;left <= right;left++,right--)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(100);//停顿，单位（ms）
//		system("cls");//清屏
//	}
//	if (left > right)
//		printf("welcome to bit!!!!!");
//	return 0;
//}


//比较大小


//int main()
//{
//	int a;
//	int b;
//	int c;
//	int d;
//	scanf("%d%d%d%d", &a,&b,&c,&d);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (a < d)
//	{
//		int tmp=a;
//		a = d;
//		d = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	if (b < d)
//	{
//		int tmp=b;
//		b = d;
//		d = tmp;
//	}
//	if (c < d)
//	{
//		int tmp=c;
//		c = d;
//		d = tmp;
//	}
//	printf("%d%d%d%d", a, b, c, d);
//	return 0;
//}



//int main()
//{
//	int count=0;
//	int i;
//	for (i = 0;i <= 100;i++)
//	{
//		if (i % 10 == 9)
//		{
//			printf("%d\n", i);
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			printf("%d\n", i);
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
//
//
//int main()
//{
//	int i;
//	double add=0.0;
//	int fl = 1;
//	for (i = 1;i <= 100;i++)
//	{
//		add += fl * 1.0/ i;
//			fl = -fl;
//	}
//	printf("%lf",add);
//	return 0;
//}

//九九乘法表

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1;i <= 9;i ++)
//	{
//		for (j = 1;j <= i;j++)
//		{
//			printf("  %d*%d=%-2d", i,j,i*j);//"-2d"表示数字打印两位，数位不够用空格填充达到对其效果，“-”是左对齐
//		}
//		printf("\n");
//	}
//	return 0;
//}




//int main()
//{
//	int t = 60;
//	system("shutdown -s -t 60");
//	char input[20] = { 0 };
//	again:
//	printf("请输入立马就去写暑假作业，否则电脑将在60s内关机>:");
//	scanf("%s", input);
//	printf("\n");
//	if (strcmp(input,"立马就去写暑假作业"))
//	{
//		goto again;
//	}
//	else
//	{
//		system("shutdown -a");
//	}
//}
//

//void swp(int* x, int* y)//传值调用
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	swp(&a,&b);
//	printf("%d%d", a, b);
//}

#include<math.h>

//int get_prime(int n)
//{
//	int a;
//	for (a = 2;a <= sqrt(n);a++)
//	{
//		if (n % a == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int i;
//	int count = 0;
//	for (i = 100;i <= 200;i++)
//	{
//		if (get_prime(i) == 1)
//		{
//			printf("  %d", i);
//			count++;
//		}
//	}
//	printf("\n");
//	printf("  %3d", count);
//	return 0;
//}

//int is_leap_year(int x)
//{
//	if ((x % 4 == 0 && x % 100 != 0)||(x%400==0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000;year <= 2000;year++)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			printf("  %d", year);
//		}
//	}
//	return 0;
//}

//int binary_search(int arr[], int k,int sz)//错误示范——此处的形参arr[]并不是接收了实参arr数组，而仅是接收了实参arr[]中的首个元素的地址（所以arr[]再次属于指针），因此下面计算right时的运算结果是错误的，因此要函数内部无法求出数组元素个数，其个数要在主函数内求出，再以参数的形式传至函数  *注：  arr[]实质是一个连续地址，因此可以找到arr[mid]的对应值
//{
//	int right = sz - 1;
//	int left = 0;
//	while (left <=right)
//	{
//		int mid = (left + right) / 2;
//		if (k > arr[mid])
//			left = mid + 1;
//		else if (k < arr[mid])
//				right = mid - 1;
//		else if (k = arr[mid])
//			return mid;
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k,sz);
//	if (ret == 0)
//		printf("NOT FOUND");
//	else
//		printf("%d", ret);
//	return 0;
//}
//
//int add1(int num)
//{
//	int y = num + 1;
//	return y;
//}
//
//int main()
//{
//	int num = 0;
//	do
//	{
//		num = add1(num);
//		printf("%d\n", num);
//	} while (num != 100);
//	return 0;
//}

//void Add(int* num)
//{
//	* num++;//由于++的优先级比较高，因此是指针变量num先+1，再进行解引用，因此要写（*p）++
//}

//#include "Add.h"

//int main()
//{
//	int num = 0;
//	while (num != 100)
//	{
//		Add(&num);
//		printf("%d\n", num);
//	}
//	return 0;
//}

//递归

//int str_len(char* arr)
//{
//	if (*arr != '\0')
//		return 1 + str_len(++arr);//*思考：为何此处不能用arr++ ？
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "hello";
//	int len = str_len(arr);
//	printf("%d", len);
//	return 0;
//}

//int fac(int i)
//{
//	if (i != 1)
//	{
//		return i = i * fac(i - 1);
//	}
//	else
//		return 1;
//}
//
//int main()
//{
//	int a;
//	int ret;
//	scanf("%d", &a);
//	ret = fac(a);
//	printf("%d", ret);
//}

//int fib1(int n)
//{
//	if (n>2)
//		return fib(n - 1) + fib(n - 2);
//	else
//		return 1;
//}


int fib2(n)
{
	int i;
	int a=1;
	int b=1;
	long long c;
	for (i = 3;i <= n;i++)
	{
		c = a + b;
		a=b;
		b=c;
	}
	return c;
}

int main()
{
	int n;
	long long ret;
	scanf("%d", &n);
	/*ret = fib1(n);*/
	ret = fib2(n);
	printf("%mld", ret);
	return 0;
}