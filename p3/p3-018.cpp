#include <stdio.h>

int main()
{
	int i,j,k[9][9];
	
	for(i=0;i<9;i++) 
	{
		for(j=0; j<9; j++)
			k[i][j]	= (i+1) * (j+1);
	}
	
	for(i=0; i<9; i++)
	{
		printf("\n%d ´Ü \n",i+1);
		for(j=0; j<9; j++)
			printf("%d * %d = %d	",i+1,j+1,k[i][j]);
	}
	return 0;
}
