#include <stdio.h>
#define MAX(a,b) (a,b) ? a:b

int main()
{
	int i,j;
	
	i=5;
	j=2;
	
	printf("�� �� %d, %d �� ū ���� %d �Դϴ�.",i,j,MAX(i,j));
	
	return 0;
}
