#include <stdio.h>

int main()
{
	int i,j;
	
	i = 85;
	j = 10;
	i /= j;
	
	switch(i)
	{
		case 9 : printf("90�� �̻��̱���.");
		case 8 : printf("80�� �̻��̱���.");
		case 7 : printf("70�� �̻��̱���.");
		default : printf("70�� �̸��̱���."); 
	}
	 
	return 0;
}
