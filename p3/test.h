#include <stdio.h>

test1()
{
	extern int a;
	a++;
	printf("\n ù ��° �Լ������� ���� �����ǰ� = %d",a);
}

test2()
{
	extern int a;
	a++;
	printf("\n �� ��° �Լ������� ���� �����ǰ�= %d",a);
}

test3()
{
	int a=10;
	a++;
	printf("\n �� ��° �Լ������� ���� ������ �� = %d",a);	
}
