#include <stdio.h>

void swap(int *p, int *q);

int main()
{
	int i, j;
	printf("\n두 수를 입력하세요===> ");
	scanf("%d %d",&i, &j);
	swap(&i, &j);
	printf("\n두 수를 바꾼 결과는 %d, %d 입니다.", i, j);
	return 0;
}

void swap(int *p,int *q)
{
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
}

/*
	i의 주소 : &i
	*i의 주소 = *&i = i
	
	p = &i
	*p = *&i = i
	
	q = &j
	*q = *&j = j 
*/
