#include <stdio.h>

int main()
{
	int i,j;
	
	i = 85;
	j = 10;
	i /= j;
	
	switch(i)
	{
		case 9 : printf("90점 이상이군요.");
		case 8 : printf("80점 이상이군요.");
		case 7 : printf("70점 이상이군요.");
		default : printf("70점 미만이군요."); 
	}
	 
	return 0;
}
