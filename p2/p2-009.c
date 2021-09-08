#include <stdio.h>

int main()
{
	int size = 0;
	float i = 123.4567;
	double j = 3.141592653589793;
	long double k= 3.141592653589793238462643383279505L;
	
	size = sizeof(i);
	
	printf("float 사이즈 : %d, 실수의 표현 : %f\n",size,i);
	
	size = sizeof(j);
	printf("double 사이즈 : %d, 배정도 실수의 표현 : %lf\n",size,j);
	
	size = sizeof(k);
	printf("long double 사이즈 : %d, 긴 배정도 실수의 표현 : %Lf\n",size,k);
	return 0;
}
