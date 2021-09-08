#include <stdio.h>

int main()
{
	int i = 3;
	printf("\n원래값 = %d",i);
	printf("\n왼쪽으로 1비트 이동시킨 결과 = %d",i<<1);
	printf("\n011 -> 110\n");
	i=3;
	printf("\n원래값 = %d",i);
	printf("\n오른쪽으로 1비트이동시킨 결과 = %d",i>>1);
	printf("\n011 -> 001\n");
	i=-4;
	printf("\n원래값 = %d",i);
	printf("\n오른쪽으로 1비트이동시킨 결과 = %d",i<<1);
	printf("\n0100 -> 1000\n");
	
	return 0;
}
