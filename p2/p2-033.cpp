#include <stdio.h>

int main()
{
	int i, sum;
	
	i=0;
	sum=0;
	
	do
	{
		sum += i++;
		
	} while(i<=100);
	
	printf("1���� 100������ ���� %d�̴�.",sum);
	
	return 0;
}
