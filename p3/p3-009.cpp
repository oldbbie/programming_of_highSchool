#include <stdio.h>
#include "test.h"

int a;

int main()
{
	int i;
	
	a=15;
	
	for(i=1;i<4;i++)
	{
		test1();
		test2();
		test3();	
	}
	return 0;
}
