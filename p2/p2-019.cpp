#include <stdio.h>

int main()
{
	int a=10,b=20;
	
	printf("\na=%d, b=%d",a,b);
	printf("\na�� b���� ũ��.");
	printf("\n���̸� 1, �����̸� 0");
	printf("\n��� %d\n",a>b);
	
	a *= 2;
	printf("\na=%d, b=%d",a,b);
	printf("\na�� b�� ����.");
	printf("\n���̸� 1, �����̸� 0");
	printf("\n��� %d\n",a==b);
	return 0;
}
