#include <stdio.h>

int main()
{
	int i,*j;
	i=8;
	j=&i;
	printf("i�� �� = %d\n",i);
	printf("i�� �� = %d\n",*j);
	
	printf("i���ּ�= %d\n",&i); 
	printf("i���ּ�= j�� �� = %d\n",j); 
	return 0;
}
