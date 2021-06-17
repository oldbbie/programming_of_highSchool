#include <stdio.h>

int main()
{
	/* 형이 다른 데이터 입력 */ 
	char C_a,C_b;
	int I_a,I_b;
	
	C_a=10;
	I_a=C_a;
	
	I_b=129;
	C_b=I_b;
	
	printf("C_a=%d I_a=%d\n",C_a,I_a);
	printf("C_b=%d I_b=%d",C_b,I_b);
	return 0;
}
