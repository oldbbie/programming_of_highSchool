#include <stdio.h>
#define NUM 80

int main()
{
	#if NUM >= 90
		printf("NUM�� 90 �̻��̹Ƿ� �������մϴ�.");
	#else
		printf("NUM�� 90 �̸��̹Ƿ� ���������� �ʽ��ϴ�.");
	#endif
	return 0;
}
