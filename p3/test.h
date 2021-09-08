#include <stdio.h>

test1()
{
	extern int a;
	a++;
	printf("\n 첫 번째 함수에서의 전역 변수의값 = %d",a);
}

test2()
{
	extern int a;
	a++;
	printf("\n 두 번째 함수에서의 전역 변수의값= %d",a);
}

test3()
{
	int a=10;
	a++;
	printf("\n 세 번째 함수에서의 지역 변수의 값 = %d",a);	
}
