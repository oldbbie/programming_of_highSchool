#include <stdio.h>

int main()
{
	/* 형(type)이 다른 자료(date)끼리의 계산 */
	int money;
	float interest_rate,interest;
	
	money=10000;
	interest_rate=0.04;
	interest=money*interest_rate;
	
	printf("\n원금 = %d원",money);
	printf("\n년 이자율 = %0.2f",interest_rate);
	printf("\n이자 %0.2f원\n",interest);
	
	return 0;
}
