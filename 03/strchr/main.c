#include <stdio.h>

char * strchr_(const char * src, char foo)
{
	int i = 0;
	while (src[i] != 0)
	{
		if (foo == src[i])
		{
			return (char *) (src + i);
		}
		i++;
	}
	return NULL;
}
int main()
{
	char * src = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char * found = strchr_(src, 'P');
	if (found != NULL)
	{
		printf ("%s \n", found);
	}
	else 
	{
		printf ("Not found\n");
	}
	return 0;
}