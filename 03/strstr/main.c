#include <stdio.h>

char * strstr_(const char * src, const char * foo)
{
	int i = 0;
	int j = 0;
	const char * substr;
	while (src[i] != 0)
	{
		substr = src + i;
		j = 0;
		while (substr[j] == foo[j] && substr[j] != 0 && foo[j] != 0)
		{
			j++;
		}
		if (foo[j] == 0)
		{
			return (char *) substr;
		}
		if (substr[j] == 0)
		{
			return NULL;
		}
		i++;
	}
	return NULL;
}
int main()
{
	char * src = "abopcdefghijklmnopqrstuvwxyz";
	char * foo = "opq";
	char * found = strstr_(src, foo);
	if (found != NULL)
	{
		printf("%s \n", found);
	}
	else
	{
		printf("Not found\n");
	}
	return 0;
}