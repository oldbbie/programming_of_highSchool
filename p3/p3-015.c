#include <stdio.h>
#define NUM 80

int main()
{
	#ifdef NUM
		printf("NUM 상수가 정의 되어 있어서 컴파일 합니다.");
	#else
		printf("NUM 상수가 정의 되어 있지 않아 컴파일 하지 않는다.")
	#endif 
	return 0;
}
