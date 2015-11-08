#include <stdio.h>
int main()
{
	char c;
	if (scanf("%c", &c) != 1) 
	{
		printf ("Wrong input!\n");
		return -1;
	}
	switch (c)
	{
		case 'a':
			printf ("Alphabet\n");
			break;
		case 'b':
			printf ("Beta\n");
			break;
		case 'c':
			printf ("Comcast\n");
			break;
		default:
			printf ("Try again\n");
			break;
	}
	return 0;
}