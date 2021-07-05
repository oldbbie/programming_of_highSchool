#include <stdio.h>

int main()
{
	int i,sum;
	
	sum = 0;
	
	for(i=1;i<=10;i++)
		sum += i;
		
	printf("1에서 10까지의 합은 %d이다.",sum);
	
	return 0;
}
