#include <stdio.h>

int main()
{
	int i;
	static int a[10] = {1,2,3,4,5,6,7,8,9,10};
	int *po;
	
	po=a;
	
	//%u�� �ּ� ��� 
	for(i=0;i<10;i++)
		printf("%d��°�� ���� �ּ�) %u, ����ִ� ���� %d \n",i,po+i,*(po+i));
	printf("\n");
	
	return 0;
}
