#include <stdio.h>

int main()
{
	int i = 80, j=10;
	i/= j;
	
	switch(i) 
	{
		case 9 : printf("90점 이상이군요.\n");
		case 8 : printf("80점대이군요.\n");
		case 7 : printf("70점대군요.\n");
		default : printf("70점 미만이군요.\n");	
	}
	
	return 0;
}
