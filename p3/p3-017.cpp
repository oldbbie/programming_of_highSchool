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
		printf("%d 번째 방에 저장된 문자와 숫자는 %c 와 %d 입니다.\n",i,a[i],j[i]);
	return 0;
}
