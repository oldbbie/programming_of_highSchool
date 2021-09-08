#include <stdio.h>

int a;
void test1();
void test2();
void test3();


int main()
{
	int i;
	
	a=15;
	
	for(i=1; i<5; i++)
	{
		test1();
		test2();
		test3();
		printf("\n");
	}
	
	return 0;
}

void test1()
{
	a++;
	printf("\n 전역변수 a = %d",a);
}

void test2()
{
	extern int a;
	a++;
	printf("\n 전역변수 a = %d",a);
}

void test3()
{
	int a=10;
	a++;
	printf("\n 지역변수 a = %d",a);
}
