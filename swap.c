#define _CRT_SECURE_NO_WARNINGS 1

//���õ�����������������

#include <stdio.h>

int main()
{
	//��һ��
	int a = 1, b = 2;
	printf("����ǰ��a = %d,b = %d\n", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("��һ�ַ�ʽ������a = %d,b = %d\n", a, b);

	//�ڶ���
	a = 1;
	b = 2;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("�ڶ��ַ�ʽ������a = %d,b = %d\n", a, b);
	printf("%d\n", -1 % 2);
}