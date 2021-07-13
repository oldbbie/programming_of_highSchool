#include <stdio.h>

int main()
{
	int i,j,sum;
	printf("시작값과 마지막 값 사이의 정수를 모두 더합니다.\n");
	printf("시작값과 마지막값을 입력하세요.\n");
	scanf("%d%d",&i,&j);
	sum = i;
	printf("%d ",i);
	for(;;)
	{
		sum += ++i;
		printf(" + %d",i);
		if(i>=j)
			break;
	}
	printf("\n두 수 사이의 정수를 합한 값은 %d입니다.",sum);
	return 0;
}
