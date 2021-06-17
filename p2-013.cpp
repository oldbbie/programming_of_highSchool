#include <stdio.h>

int main()
{
	char a_char,b_char;
	int a_int,b_int;
	
	a_char = 10;
	a_int = a_char;
	
	b_int = 129;
	b_char = b_int;
	
	printf("a_char=%d a_int=%d \n",a_char,a_int);
	printf("b_char=%d b_int=%d",b_char,b_int);
	
	return 0;
}
