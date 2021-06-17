#include <stdio.h>

int main()
{
	float i = 123.45;
	double j = 123.4567;
	char a = 'A';
	char *b = "¥Î«—πŒ±π";
	printf("%f %lf %c %s\n",i,j,a,b);
	printf("%7.3f %7.4lf %10c %20s\n",i,j,a,b);
	printf("%7.3f %7.4lf %-10c %-20s\n",i,j,a,b); 
	return 0;
}
