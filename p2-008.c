#include <stdio.h>

int main()
{
	short a = 32767;
	int b = 2147483647;
	long c = 2147483647;
	long long d = 9223372036854775807;
	
	printf("[[�ִ�]]\n");
	printf("short : (2��Ʈ)  %hd\n",a);
	printf("int : (4��Ʈ) %d\n",b);
	printf("long : (4��Ʈ) %ld\n",c);
	printf("long long : (8��Ʈ) %lld\n",d);
	
	a++,b++,c++,d++;
	
	printf("[[�ּ�]]\n");

	printf("[[�ִ�]]\n");
	printf("short : (2��Ʈ)  %hd\n",a);
	printf("int : (4��Ʈ) %d\n",b);
	printf("long : (4��Ʈ) %ld\n",c);
	printf("long long : (8��Ʈ) %lld\n",d);
	
	return 0;
}
