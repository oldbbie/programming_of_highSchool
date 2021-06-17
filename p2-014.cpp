#include <stdio.h>

int main()
{
	int money;
	float rate_interest,interest;
	money = 10000;
	rate_interest = 0.04;
	interest = money * rate_interest;
	printf("\n원금 = %d원",money);
	printf("\n이자율 = %0.2f",rate_interest);
	printf("\n이자 = %0.2f원",interest);
	return 0;
}
