#include <stdio.h>
#define NUM 80

int main()
{
	#if NUM >= 90
		printf("NUM이 90 이상이므로 컴파일합니다.");
	#else
		printf("NUM이 90 미만이므로 컴파일하지 않습니다.");
	#endif
	return 0;
}
