#include <stdio.h>

void swap(int *p, int *q);

void main()
{
	int i, j;
	
	printf("\n�� ���� �Է��ϼ��� ====> ");
	scanf("%d %d",&i,&j);
	
	printf("\n\ni = %d,\nj = %d",i,j);
	/* printf("\n\ni = %d,\nj = %d",*&i,*&j); */
	printf("\ni���ּ� = %d,\nj���ּ� = %d",&i,&j);
	
	swap(&i, &j); /* i�� j�� �ּҰ��� �ִ´�.  */
	printf("\n\n�� ���� �ٲ� ����� %d, %d �Դϴ�.",i,j);
	
	printf("\n\ni = %d,\nj = %d",i,j);
	printf("\ni���ּ� = %d,\nj���ּ� = %d",&i,&j);
	
	printf("\n\n��, �ּҴ� �״��������, �ּ� ���� ���� ����� ���̴�.");
}

void swap(int *p, int *q) /* p=&i, q=&j �� ������, *p = i, *q = j �� �ȴ�.  */
{
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
}

/* 
	*x�� �ּ� = *&x = x
	x�� �ּ� = &x 
	
	&x ��ġ�� �� = *&x = x
	x ��ġ�� �� = *x 
*/
