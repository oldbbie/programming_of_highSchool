#include <stdio.h>
#define NUM 120

int main()
{
	#if NUM >= 90
		printf("NUM이 90 이상이므로 컴파일 합니다.");
	#else
		printf("NUM이 90 미만이므로 컴파일 하지 않습니다.");
	#endif 
	return 0;
}
