#include <stdio.h>

int main()
{
	int a = 74;
	if(a>=90)
		printf("90점 이상으로 수입니다.");
	else if(a>=80)
		printf("80점대로 우입니다.");
	else if(a>=70)
		printf("70점대로 미입니다.");
	else
		printf("70점미만으로 양입니다.");
	return 0;
}
