#include <stdio.h>
#include <stdlib.h> /* exit(0); 사용 */

/*
 되부름 함수 recursive function
 : 자기 자신를 되부르는 함수
 
 함수를 부를때 마다 스택이 쌓이게 코딩한다. 
*/

int main()
{
	int a;
	
	while(1)
	{
		printf("\n계승을 구하고자 하는 값을 입력하시오.");
		printf("\n입력 값은 정수어야 하고, 끝내려면 0을 입력하시오.");
		printf("\n\n입력 : ");
		scanf("%d",&a);
		if(a==0) /* 입력된 값이 0이면 프로그램을 끝낸다. */
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
		fact=1;
	else
	{
		printf(" %d * ",data);
		fact = data*fac(data-1);
	}
	return(fact);
}
