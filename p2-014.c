#include <stdio.h>

int main()
{
	/* ��(type)�� �ٸ� �ڷ�(date)������ ��� */
	int money;
	float interest_rate,interest;
	
	money=10000;
	interest_rate=0.04;
	interest=money*interest_rate;
	
	printf("\n���� = %d��",money);
	printf("\n�� ������ = %0.2f",interest_rate);
	printf("\n���� %0.2f��\n",interest);
	
	return 0;
}
