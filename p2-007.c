#include <stdio.h>

int main()
{
	int i;
	char c;
	printf("정수와 문자를 콤마(,)로 구분하여 순서대로 입력하세요.\n");
	scanf("%d,%c",&i,&c);
	printf("\n입력된 정수는 %d이고, 문자는 %c입니다.",i,c);
	return 0;
}
