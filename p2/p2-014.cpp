#include <stdio.h>

int main()
{
	int money;
	float rate_interest,interest;
	money = 10000;
	rate_interest = 0.04;
	interest = money * rate_interest;
	printf("\n���� = %d��",money);
	printf("\n������ = %0.2f",rate_interest);
	printf("\n���� = %0.2f��",interest);
	return 0;
}
