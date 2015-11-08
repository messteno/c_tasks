#include <stdio.h>
unsigned long long factorial (int  n)
{
	if (n <= 0)
	{
		return 1;
	}
	return factorial (n - 1) * n;
}
int main ()
{
	int n;
	unsigned long long  factor_n;
	if (scanf ("%d", &n) != 1)
	{
		printf ("try again \n");
		return -1;
	}
	else if (n < 0 )
	{
		printf ("input positive number \n");
		return -2;
	}
	factor_n = factorial (n);
	printf("%llu\n", factor_n);
	return 0;
}