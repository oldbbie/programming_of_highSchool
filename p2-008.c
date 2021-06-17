#include <stdio.h>

int main()
{
	short a = 32767;
	int b = 2147483647;
	long c = 2147483647;
	long long d = 9223372036854775807;
	
	printf("[[최대]]\n");
	printf("short : (2비트)  %hd\n",a);
	printf("int : (4비트) %d\n",b);
	printf("long : (4비트) %ld\n",c);
	printf("long long : (8비트) %lld\n",d);
	
	a++,b++,c++,d++;
	
	printf("[[최소]]\n");

	printf("[[최대]]\n");
	printf("short : (2비트)  %hd\n",a);
	printf("int : (4비트) %d\n",b);
	printf("long : (4비트) %ld\n",c);
	printf("long long : (8비트) %lld\n",d);
	
	return 0;
}
