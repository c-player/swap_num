#define _CRT_SECURE_NO_WARNINGS 1

//不用第三变量交换两个数

#include <stdio.h>

int main()
{
	//第一种
	int a = 1, b = 2;
	printf("交换前：a = %d,b = %d\n", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("第一种方式交换后：a = %d,b = %d\n", a, b);

	//第二种
	a = 1;
	b = 2;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("第二种方式交换后：a = %d,b = %d\n", a, b);
	printf("%d\n", -1 % 2);
}