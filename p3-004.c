#include <stdio.h>

void swap(int *p, int *q);

void main()
{
	int i, j;
	
	printf("\n두 수를 입력하세요 ====> ");
	scanf("%d %d",&i,&j);
	
	printf("\n\ni = %d,\nj = %d",i,j);
	/* printf("\n\ni = %d,\nj = %d",*&i,*&j); */
	printf("\ni의주소 = %d,\nj의주소 = %d",&i,&j);
	
	swap(&i, &j); /* i와 j의 주소값을 넣는다.  */
	printf("\n\n두 수를 바꾼 결과는 %d, %d 입니다.",i,j);
	
	printf("\n\ni = %d,\nj = %d",i,j);
	printf("\ni의주소 = %d,\nj의주소 = %d",&i,&j);
	
	printf("\n\n즉, 주소는 그대로이지만, 주소 안의 값이 변경된 것이다.");
}

void swap(int *p, int *q) /* p=&i, q=&j 를 했으며, *p = i, *q = j 가 된다.  */
{
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
}

/* 
	*x의 주소 = *&x = x
	x의 주소 = &x 
	
	&x 위치의 값 = *&x = x
	x 위치의 값 = *x 
*/
