#include <stdio.h>

int main()
{
	int i,sum;
	
	sum = 0;
	
	for(i=1; i<=50; i++)
		sum += i;
		
	printf("1부터 50까지의 합은 %d 이다.",sum);
	
	return 0;
}
