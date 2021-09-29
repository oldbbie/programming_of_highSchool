#include <stdio.h>
#define NUM 100
#define NUM2 50

int main()
{
	printf("1. 미리 정의된 매크로 상수 NUM의 값 = %d\n",NUM);
	printf("2. 미리 정의된 매크로 상수 NUM2의 값 = %d\n",NUM2);
	
	#undef NUM
	
	#ifdef NUM
	printf("3. 미리 정의된 매크로 상수 NUM의 값 = %d\n",NUM);
	#endif
	
	#ifdef NUM2
	printf("4. 미리 정의된 매크로 상수 NUM2의 값 = %d\n",NUM2);
	#endif
	return 0;
}
