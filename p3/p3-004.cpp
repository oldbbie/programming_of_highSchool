#include <stdio.h>

void swap(int *p, int *q);

int main()
{
	int i, j;
	printf("\n�� ���� �Է��ϼ���===> ");
	scanf("%d %d",&i, &j);
	swap(&i, &j);
	printf("\n�� ���� �ٲ� ����� %d, %d �Դϴ�.", i, j);
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
	i�� �ּ� : &i
	*i�� �ּ� = *&i = i
	
	p = &i
	*p = *&i = i
	
	q = &j
	*q = *&j = j 
*/
