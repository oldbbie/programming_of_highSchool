#include <stdio.h>

int main()
{
	int i,j[3];	
	char a[3];
	
	j[0]=123;
	j[1]=345;
	j[2]=678;
	
	a[0]='a';
	a[1]='b';
	a[2]='c';
	
	for(i=0;i<3;i++)
		printf("%d ��° �濡 ����� ���ڿ� ���ڴ� %c �� %d �Դϴ�.\n",i,a[i],j[i]);
	return 0;
}
