#include <stdio.h>

int main()
{
	int i,j,k;
	printf("�� ���� ���ڸ� �Է��Ͻÿ�. \n\n");
	scanf("%d%d%d",&i,&j,&k);
	printf("�Է¹��� �� ���� �G�ڴ� %d, %d, %d �Դϴ�.\n\n",i,j,k);
	printf("������ ���� �߿� ���� ū ���� %d �Դϴ�.",max_num(i,j,k));
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
