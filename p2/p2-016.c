#include <stdio.h>

int main()
{
	int a=20,b=10,c=5;
	
	a=b+c;
	printf("\n%d + %d = %d\n",b,c,a);
	
	a=b-c;
	printf("\n%d - %d = %d\n",b,c,a);
	
	a=b*c;
	printf("\n%d * %d = %d\n",b,c,a);
	
	a=b/c;
	printf("\n%d / %d = %d\n",b,c,a);
	
	a=b%c;
	printf("\n%d����%d�� ���� ������=%d\n",b,c,a);
	
	return 0;
}
