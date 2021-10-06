#include <stdio.h>

int main()
{
	int i;
	char a[10],b[10],*po[2];
	
	a[0] = 'A';
	a[1] = 'B';
	a[2] = '\0';
	
	b[0] = 'C';
	b[1] = 'D';
	b[2] = '\0';
	
	po[0] = a;
	po[1] = b;
	
	for(i=0; i<2; i++)
	{
		printf("%s\n",po[i]);
	}
	
	return 0;
}
