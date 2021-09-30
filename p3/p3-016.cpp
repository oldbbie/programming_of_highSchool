#include <stdio.h>
#define NUM 80
#define NUM2 20

int main()
{
	printf("NUM = %d\n",NUM);
	printf("NUM2 = %d\n",NUM2);
	
	#undef NUM
	
	#ifdef NUM
		printf("NUM = %d\n",NUM);
	#else
		printf("NUM 없음\n");
	#endif
	
	#ifdef NUM2
		printf("NUM2 = %d\n",NUM2);
	#else
		printf("NUM2 없음\n");
	#endif
	
	return 0;
}
