#include <stdio.h>
int max_num(int i, int j, int k);

int main()
{
	int i,j,k;
	printf("�� ���� ���ڸ� �Է��Ͻÿ�.\n\n");
	scanf("%d%d%d",&i,&j,&k);
	printf("�Է¹��� �� ���� ���ڴ� %d, %d, %d �Դϴ�.\n\n",i,j,k);
	printf("�� ���� ���� �� ���� ū ���ڴ� %d �Դϴ�.",max_num(i,j,k));
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
