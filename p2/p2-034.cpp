#include <stdio.h>

int main()
{
	int i, sum;
	
	i=0;
	sum=0;
	
	while(1) 
	{
		sum += ++i;
		if(i>=100)
			goto aa;	
	}
	aa:
	printf("1���� 100������ ���� %d�̴�.",sum);
	return 0;
}
