#include <stdio.h>

void test();

int main()
{
	int i, j;
	i = 1;
	for(j=1; j<=10; j++) 
	{
		test();
		printf("	자동 변수 i의 값 %d\n",i);
		i++;	
	}
	return 0;
}

void test()
{
	int i=10;
	printf("함수 내의 자동 변수 i의 값 = %d	",i);
	i++;
}
