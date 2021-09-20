#include <stdio.h>
#define MAX(a,b) (a,b) ? a:b

int main()
{
	int i,j;
	
	i=5;
	j=2;
	
	printf("두 수 %d, %d 중 큰 값은 %d 입니다.",i,j,MAX(i,j));
	
	return 0;
}
