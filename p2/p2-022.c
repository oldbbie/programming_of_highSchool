#include <stdio.h>

int main()
{
	int i = 3;
	printf("\n������ = %d",i);
	printf("\n�������� 1��Ʈ �̵���Ų ��� = %d",i<<1);
	printf("\n011 -> 110\n");
	i=3;
	printf("\n������ = %d",i);
	printf("\n���������� 1��Ʈ�̵���Ų ��� = %d",i>>1);
	printf("\n011 -> 001\n");
	i=-4;
	printf("\n������ = %d",i);
	printf("\n���������� 1��Ʈ�̵���Ų ��� = %d",i<<1);
	printf("\n0100 -> 1000\n");
	
	return 0;
}
