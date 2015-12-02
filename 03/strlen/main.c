#include <stdio.h>
int strlen_(const char * str)
{
	int length = 0;
	while (str[length] != 0)
	{
		length++;
	}
	return length;
}

int main()
{
	char * str = "Good morning!";
	int length = strlen_ (str);
	printf ("%d \n", length);
	return 0;
}



