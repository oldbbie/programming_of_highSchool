#include <stdio.h>

int main()
{
	int a, b, c;
	
	a = 1;
	b = 1;
	c = 0;
	
	printf("%d AND %d = %d\n",(a>c),(b>c),(a>c)&&(b>c));
	printf("%d AND %d = %d\n",(b>a),(b>c),(b>a)&&(b>c));
	
	printf("%d OR %d = %d\n",(a>c),(b>c),(a>c)||(b>c));
	printf("%d OR %d = %d\n",(b>a),(b>c),(b>a)||(b>c));
	
	printf("NOT %d = %d\n",(a<c),!(a<c));
	
	return 0;
}
