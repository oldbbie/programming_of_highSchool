#include <stdio.h>
#define NUM 80

int main()
{
	#ifdef NUM
		printf("NUM ����� ���� �Ǿ� �־ ������ �մϴ�.");
	#else
		printf("NUM ����� ���� �Ǿ� ���� �ʾ� ������ ���� �ʴ´�.")
	#endif 
	return 0;
}
