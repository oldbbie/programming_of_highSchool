#include <stdio.h>
#define NUM 80

int main()
{
	#ifdef NUM
		printf("NUM ����� ���ǵǾ����Ƿ� �������մϴ�.");
	#else
		printf("NUM ����� ���ǵ��� �ʾ����Ƿ� ���������� �ʽ��ϴ�.");
	#endif
	
	#ifdef YOU
		printf("YOU ����� ���ǵǾ����Ƿ� �������մϴ�.");
	#else
		printf("YOU ����� ���ǵ��� �ʾ����Ƿ� ���������� �ʽ��ϴ�.");
	#endif
	return 0;
}
