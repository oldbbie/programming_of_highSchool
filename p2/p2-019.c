#include <stdio.h>

int main()
{
	int a = 10,b = 20;
	printf("\na의 값은 %d이고, b의 값은%d이다.\n",a,b);
	printf("\n두 수를 비교한 결과 1이면 a가 b보다 크고, 0이면 b가 a보다 크거나 같다.");
	printf("\n두 수의 비교 결과는 %d이다.\n\n",a>b);
	a *= 2;
	printf("\na에 2를 곱한 a의 값은 %d이고, b의 값은 %d이다.\n",a,b);
	printf("\n두 수를 비교한 결과 1이면 a와 b와 같고, 0이면 a와 b가 다르다.");
	printf("\n두 수의 비교 결과는 %d이다.\n\n",a==b); 
	return 0;
}
