#include <stdio.h>
#define NUM 100
#define NUM2 50

int main()
{
	printf("1. �̸� ���ǵ� ��ũ�� ��� NUM�� �� = %d\n",NUM);
	printf("2. �̸� ���ǵ� ��ũ�� ��� NUM2�� �� = %d\n",NUM2);
	
	#undef NUM
	
	#ifdef NUM
	printf("3. �̸� ���ǵ� ��ũ�� ��� NUM�� �� = %d\n",NUM);
	#endif
	
	#ifdef NUM2
	printf("4. �̸� ���ǵ� ��ũ�� ��� NUM2�� �� = %d\n",NUM2);
	#endif
	return 0;
}
