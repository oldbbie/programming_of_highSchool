#include <stdio.h>

void test();

int main()
{
	int i, j;
	i = 1;
	for(j=1; j<=10; j++) 
	{
		test();
		printf("	�ڵ� ���� i�� �� %d\n",i);
		i++;	
	}
	return 0;
}

void test()
{
	int i=10;
	printf("�Լ� ���� �ڵ� ���� i�� �� = %d	",i);
	i++;
}
