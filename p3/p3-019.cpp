#include <stdio.h>

int main()
{
	int num[10] = {10,35,20,12,34,21,89,234,123,38}, i, j, temp;
	
	printf("���ĵǱ� ���� ����\n");
	
	for(i=0; i<10; i++) printf(" %d ",num[i]);
	
	printf("\n\n");
	for(i=0; i<9;i++) {
		for(j=i+1; j<10; j++)
		{
			if(num[i]>num[j])
			{
				printf("%d <==> %d \n",num[i],num[j]);
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
		printf("%d ��°�� ���� ���� : %d\n\n",i,num[i]);
	}
	printf("\n\n���ĵ� ���� ���� \n");
	for(i=0; i<10; i++)
	{
		printf(" %d ",num[i]);
	}
	
	return 0;
}
