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
	
	printf("1에서 100까지의 합은 %d이다.",sum);
	
	return 0;
}
