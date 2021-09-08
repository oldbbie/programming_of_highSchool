#include <stdio.h>

int main()
{
	int a=10,b=20;
	
	printf("\na=%d, b=%d",a,b);
	printf("\na에 b보다 크다.");
	printf("\n참이면 1, 거짓이면 0");
	printf("\n결과 %d\n",a>b);
	
	a *= 2;
	printf("\na=%d, b=%d",a,b);
	printf("\na와 b는 같다.");
	printf("\n참이면 1, 거짓이면 0");
	printf("\n결과 %d\n",a==b);
	return 0;
}
