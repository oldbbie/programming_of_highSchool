#include <stdio.h>

int main()
{
	int a = 10,b = 20;
	printf("\na�� ���� %d�̰�, b�� ����%d�̴�.\n",a,b);
	printf("\n�� ���� ���� ��� 1�̸� a�� b���� ũ��, 0�̸� b�� a���� ũ�ų� ����.");
	printf("\n�� ���� �� ����� %d�̴�.\n\n",a>b);
	a *= 2;
	printf("\na�� 2�� ���� a�� ���� %d�̰�, b�� ���� %d�̴�.\n",a,b);
	printf("\n�� ���� ���� ��� 1�̸� a�� b�� ����, 0�̸� a�� b�� �ٸ���.");
	printf("\n�� ���� �� ����� %d�̴�.\n\n",a==b); 
	return 0;
}
