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
	
	printf("1부터 100까지의 합은 %d이다.",sum);
	
	return 0;
}
