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
	printf("1부터 100까지의 합은 %d이다.",sum);
	return 0;
}
