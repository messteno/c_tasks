#include <stdio.h>
int fibonacci (int  n)
{
	if (n <= 2)
	{
		return 1;
	}
	return  fibonacci (n - 1) + fibonacci (n - 2);
}
int main ()
{
	int n;
	int fibo_n;
	if (scanf ("%d", &n) != 1)
	{
		printf ("type number \n");
		return -1;
	}
	else if (n <= 0 )
	{
		printf ("Fibonacci dreamed only about positive number \n");
		return -2;
	}
	fibo_n =  fibonacci (n);
	printf("%d \n", fibo_n);
	return 0;
}