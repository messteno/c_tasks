#include <stdio.h>
#include <stdlib.h>
char * strcpy_(char * dest, const char * src)
{
	int i = 0;
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return dest;
}
int main()
{
	char * src = "Burger";
	char * dest = (char *) malloc (20);
	strcpy_(dest, src);
	printf("%s \n", dest);
	free (dest);
	return 0;
}
