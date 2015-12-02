#include <stdio.h>
int main()
{
	char c;
	if (scanf("%c", &c) != 1) 
	{
		printf ("Wrong input!\n");
		return -1;
	}
	if (c == 'h')
	{
		printf ("Hello, world!\n");
	}
	else if (c == 'm')
	{
		printf ("May is a dream\n");
	}
	else
	{
		printf ("Try again\n");
	}
	return 0;
}
