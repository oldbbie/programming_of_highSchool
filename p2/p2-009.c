#include <stdio.h>

int main()
{
	int size = 0;
	float i = 123.4567;
	double j = 3.141592653589793;
	long double k= 3.141592653589793238462643383279505L;
	
	size = sizeof(i);
	
	printf("float ������ : %d, �Ǽ��� ǥ�� : %f\n",size,i);
	
	size = sizeof(j);
	printf("double ������ : %d, ������ �Ǽ��� ǥ�� : %lf\n",size,j);
	
	size = sizeof(k);
	printf("long double ������ : %d, �� ������ �Ǽ��� ǥ�� : %Lf\n",size,k);
	return 0;
}
