#include <stdio.h>

int main()
{
	int i, sum;
	
	i = 0;
	sum = 0;
	
	while(1)
	{
		sum += ++i;
		if(i>=100)
			goto stop;
	}
	
	stop:
	printf("1에서 100까지 합은 %d입니다.",sum);
	
	return 0;
}
