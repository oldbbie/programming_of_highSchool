#include <stdio.h>

int main()
{
	int i,j;
	i = 85;
	j = 10;
	i /= j;
	
	switch(i)
	{
		case 9 : printf("90점이상이군요.");
		break;
		case 8 : printf("80점 이상이군요.");
		break;
		case 7 : printf("70점 이상이군요.");
		break;
		default : printf("70점 미만이군요."); 
	}
	return 0;
}
