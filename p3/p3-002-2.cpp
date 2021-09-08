#include <stdio.h>
int max_num(int i, int j, int k);

int main()
{
	int i,j,k;
	printf("세 개의 숫자를 입력하시오.\n\n");
	scanf("%d%d%d",&i,&j,&k);
	printf("입력받은 세 개의 숫자는 %d, %d, %d 입니다.\n\n",i,j,k);
	printf("세 개의 숫자 중 가장 큰 숫자는 %d 입니다.",max_num(i,j,k));
	return 0;
}

int max_num(int i, int j, int k)
{
	int a;
	a=i;
	if(a<j)
		a=j;
	if(a<k)
		a=k;
	return a;	
} 
