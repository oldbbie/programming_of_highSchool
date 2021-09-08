#include <stdio.h>

int main()
{
	int kuk, eng, math;
	printf("국어, 영어, 수학 점수를 입력하시오.\n");
	scanf("%d%d%d",&kuk, &eng, &math);
	sum_avg(kuk, eng, math);
	return 0;
}

sum_avg(int kuk,int eng,int math)
{
	int sum;
	int avg;
	sum=kuk+eng+math;
	avg=sum/3;
	printf("\n과목 점수의 합 = %d",sum);
	printf("\n평균 = %d",avg);
}
