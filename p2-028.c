#include <stdio.h>

int main()
{
	int i,j;
	i = 85;
	j = 10;
	i /= j;
	
	switch(i)
	{
		case 9 : printf("90���̻��̱���.");
		break;
		case 8 : printf("80�� �̻��̱���.");
		break;
		case 7 : printf("70�� �̻��̱���.");
		break;
		default : printf("70�� �̸��̱���."); 
	}
	return 0;
}
