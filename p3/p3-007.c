#include <stdio.h>

int main()
{
	int i,j;
	
	i=1;
	
	for(j=i; j<=10; j++)
	{
		test();
		printf("	�ڵ� ���� i�� �� = %d\n",i);
		i++;
	}
	return 0;
}

test()
{
	static int i = 10;
	printf("�Լ� ���� �ڵ� ���� i�� �� = %d ",i);
	i++;
}
