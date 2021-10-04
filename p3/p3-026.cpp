#include <stdio.h>

int main()
{
	int i;
	static int a[10] = {1,2,3,4,5,6,7,8,9,10};
	int *po;
	
	po=a;
	
	//%u는 주소 출력 
	for(i=0;i<10;i++)
		printf("%d번째의 방의 주소) %u, 들어있는 값은 %d \n",i,po+i,*(po+i));
	printf("\n");
	
	return 0;
}
