#include <stdio.h>

int main()
{
	short a = 32767;
	int i = 2147483647;
	unsigned int j = 4294967295;
	long k = 2147483647;
	unsigned long l = 4294967295; 
	long long b = 9223372036854775807;
	unsigned long long c= 18446744073709551615;
	
	printf("[�ִ�]\n");
	printf("���� ������ ��� : %hd\n",a);
	printf("�Ϲ����� ������ ��� : %d\n",i);
	printf("��ȣ���� ������ ��� : %u\n",j);
	printf("ū ������ ��� : %ld\n",k);
	printf("��ȣ���� ū ������ ��� : %lu\n",l);
	printf("�� ū ������ ��� : %lld\n",b);
	printf("��ȣ���� �� ū ������ ��� : %llu\n",c);
	
	a++;
	i++;
	j++;
	k++;
	l++;
	b++;
	c++;
	
	printf("\n");
	printf("[����]\n",i);
	printf("���� ������ ��� : %hd\n",a);
	printf("�Ϲ����� ������ ��� : %d\n",i);
	printf("��ȣ���� ������ ��� : %u\n",j);
	printf("ū ������ ��� : %ld\n",k);
	printf("��ȣ���� ū ������ ��� : %lu\n",l);
	printf("�� ū ������ ��� : %lld\n",b);
	printf("��ȣ���� �� ū ������ ��� : %llu\n",c);
	
	return 0;
}
