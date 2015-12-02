#include <stdio.h> 
int binary ( int n )
{
	int r;
	int c;
	while (r%2 < 1)
	{
		r = n / 2;
		c = n % 2
	}
	else
	{
		r = binary (n / 2);
		return n*10 + (n % 2);
	}
}

int main ()
{
	int n;
	scanf ("%d", &n);
	printf ("%d \n", binary(n));
	return 0;
}