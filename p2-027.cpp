#include <stdio.h>

int main()
{
	int i = 80, j=10;
	i/= j;
	
	switch(i) 
	{
		case 9 : printf("90�� �̻��̱���.\n");
		case 8 : printf("80�����̱���.\n");
		case 7 : printf("70���뱺��.\n");
		default : printf("70�� �̸��̱���.\n");	
	}
	
	return 0;
}
