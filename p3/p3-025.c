#include <stdio.h>

int main()
{
	char *po;
	po = "대한민국";
	po += 2;
	printf("포인터 변수에 들어있는 데이터 : %s",po);
	return 0;
}
