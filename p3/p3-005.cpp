#include <stdio.h>
#include <stdlib.h>

int fac(int);

int main()
{
	int a;
	
	while(1) 
	{
		printf("\n계승을 구하고자 하는 값을 구하시오.");
		printf("\n입력한 값은 정수여야하고, 끝내려면 0을 입력하세요.");
		printf("\n\n입력 : ");
		scanf("%d",&a);
		if(a==0)
			exit(0);
		printf("%d! =",a);
		printf("1 = %d",fac(a));
	}
	return 0;
}

fac(int data) 
{
	int fact;
	if(data==0)
		fact = 1;
	else
	{
		printf(" %d * ",data);
		fact = data * fac(data-1);
	}
	return(fact);
}
