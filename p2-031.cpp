#include <stdio.h>

int main()
{
	int i,j,sum;
	printf("���۰��� ������ �� ������ ������ ��� ���մϴ�.\n");
	printf("���۰��� ���������� �Է��ϼ���.\n");
	scanf("%d%d",&i,&j);
	sum = i;
	printf("%d ",i);
	for(;;)
	{
		sum += ++i;
		printf(" + %d",i);
		if(i>=j)
			break;
	}
	printf("\n�� �� ������ ������ ���� ���� %d�Դϴ�.",sum);
	return 0;
}
