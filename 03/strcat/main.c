#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * strcat_(char * dest, const char * src)
{
	int i = 0;
	int e = strlen (dest);
	while (src[i] != 0)
	{
		dest[i + e] = src[i];
		i++;
	}
	dest[i + e] = 0;
	return dest;
}
int main()
{
	char * src = "world";
	char * dest = (char *) malloc (20);
	strcpy(dest, "hello, ");
	strcat_ (dest, src);
	printf("%s \n", dest);
	free (dest);
	return 0;
}
