#include <stdio.h>
int main()
{
	int j = 0;
	int i;
	int k = 12;
	for (i = 0; i < 10; i++)
	{
		printf ("%d \n", i);
	}
	printf ("Cycle for i is done\n");
	while (j < 8)
	{
		printf ("%d \n", j);
		j++;
	}
	printf ("Cycle for j is done\n");
	do
	{
		printf ("%d \n", k);
	} while (k < 10);
	return 0;
}