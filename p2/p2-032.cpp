#include <stdio.h>

int main()
{
	int i,sum;
	
	i = 1;
	sum = 0;
	
	while(i<=100)
	{
		sum += i++;
	}
	
	printf("1���� 100������ ���� %d�̴�.",sum);
	
	return 0;
}
