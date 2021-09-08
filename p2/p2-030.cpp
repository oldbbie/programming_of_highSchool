#include <stdio.h>

int main()
{
	int i,j;
	
	for(i = 1; i <= 9; i++)
	{
		printf("\n\n%d´Ü\n",i);
		
		for(j=1; j <= 9; j++)
		{
			printf("%d * %d = %d	",i,j,i*j);
		}
	}
	
	return 0;
}
