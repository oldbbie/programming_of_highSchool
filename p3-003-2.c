#include <stdio.h>

int main()
{
	int kuk, eng, math;
	printf("����, ����, ���� ������ �Է��Ͻÿ�.\n");
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
	printf("\n���� ������ �� = %d",sum);
	printf("\n��� = %d",avg);
}
