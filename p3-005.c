#include <stdio.h>
#include <stdlib.h> /* exit(0); ��� */

/*
 �Ǻθ� �Լ� recursive function
 : �ڱ� �ڽŸ� �Ǻθ��� �Լ�
 
 �Լ��� �θ��� ���� ������ ���̰� �ڵ��Ѵ�. 
*/

int main()
{
	int a;
	
	while(1)
	{
		printf("\n����� ���ϰ��� �ϴ� ���� �Է��Ͻÿ�.");
		printf("\n�Է� ���� ������� �ϰ�, �������� 0�� �Է��Ͻÿ�.");
		printf("\n\n�Է� : ");
		scanf("%d",&a);
		if(a==0) /* �Էµ� ���� 0�̸� ���α׷��� ������. */
			exit(0);
		printf("%d! =",a);
		printf("1 = %d",fac(a));
	}
	
	return 0;
}

fac(int data)
{
	int fact;
	if(data==0)
		fact=1;
	else
	{
		printf(" %d * ",data);
		fact = data*fac(data-1);
	}
	return(fact);
}
