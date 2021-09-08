#include <stdio.h>

int main()
{
	short a = 32767;
	int i = 2147483647;
	unsigned int j = 4294967295;
	long k = 2147483647;
	unsigned long l = 4294967295; 
	long long b = 9223372036854775807;
	unsigned long long c= 18446744073709551615;
	
	printf("[최대]\n");
	printf("작은 정수의 출력 : %hd\n",a);
	printf("일반적인 정수의 출력 : %d\n",i);
	printf("부호없는 정수의 출력 : %u\n",j);
	printf("큰 정수의 출력 : %ld\n",k);
	printf("부호없는 큰 정수의 출력 : %lu\n",l);
	printf("더 큰 정수의 출력 : %lld\n",b);
	printf("부호없는 더 큰 정수의 출력 : %llu\n",c);
	
	a++;
	i++;
	j++;
	k++;
	l++;
	b++;
	c++;
	
	printf("\n");
	printf("[최하]\n",i);
	printf("작은 정수의 출력 : %hd\n",a);
	printf("일반적인 정수의 출력 : %d\n",i);
	printf("부호없는 정수의 출력 : %u\n",j);
	printf("큰 정수의 출력 : %ld\n",k);
	printf("부호없는 큰 정수의 출력 : %lu\n",l);
	printf("더 큰 정수의 출력 : %lld\n",b);
	printf("부호없는 더 큰 정수의 출력 : %llu\n",c);
	
	return 0;
}
