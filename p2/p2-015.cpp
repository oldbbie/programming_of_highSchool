#include <stdio.h>

int main()
{
	/* 강제 형변환 */
	int type_int;
	long type_long,sum_vars,multiply_vars;
	
	type_int = 127;
	type_long = 325600;
	
	sum_vars = type_long + type_int;
	multiply_vars = type_int * type_long;
	
	printf("\n%ld + %d = %ld\n",type_long,type_int,sum_vars);
	printf("%ld * %d = %ld\n",type_long,type_int,multiply_vars);
	
	sum_vars = type_long + (long)type_int;
	multiply_vars = type_int * (long)type_long;
	
	printf("\n%ld + %d = %ld\n",type_long,type_int,sum_vars);
	printf("%ld * %d = %ld\n",type_long,type_int,multiply_vars);
	
	return 0;
}
