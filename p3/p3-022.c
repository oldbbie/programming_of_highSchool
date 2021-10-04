#include <stdio.h>

int main()
{
	int i,*j;
	i=8;
	j=&i;
	printf("i의 값 = %d\n",i);
	printf("i의 값 = %d\n",*j);
	
	printf("i의주소= %d\n",&i); 
	printf("i의주소= j의 값 = %d\n",j); 
	return 0;
}
