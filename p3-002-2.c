#include <stdio.h>

int main()
{
	int i,j,k;
	printf("세 개의 숫자를 입력하시오. \n\n");
	scanf("%d%d%d",&i,&j,&k);
	printf("입력받은 세 개의 숮자는 %d, %d, %d 입니다.\n\n",i,j,k);
	printf("세개의 숫자 중에 가장 큰 수는 %d 입니다.",max_num(i,j,k));
	return 0;
}

max_num(i,j,k)
int i, j, k;
{
	int a;
	a=i; 
	if(a<j)
	a=j;
	if(a<k)
	a=k;
	return a;
}
