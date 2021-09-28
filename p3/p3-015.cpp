#include <stdio.h>
#define NUM 80

int main()
{
	#ifdef NUM
		printf("NUM 상수가 정의되었으므로 컴파일합니다.");
	#else
		printf("NUM 상수가 정의되지 않았으므로 컴파일하지 않습니다.");
	#endif
	
	#ifdef YOU
		printf("YOU 상수가 정의되었으므로 컴파일합니다.");
	#else
		printf("YOU 상수가 정의되지 않았으므로 컴파일하지 않습니다.");
	#endif
	return 0;
}
