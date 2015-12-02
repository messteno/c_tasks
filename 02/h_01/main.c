#include <stdio.h>
int main ()
{
	int p;
	int c;
	FILE *fp;
	fp = fopen("data.txt", "r");
	if (fp == NULL)
	{
		printf("Can't open file \n");
		return -1;
	}
	if (fscanf(fp, "%d", &p) != 1)
	{
		printf("Wrong content \n");
		fclose(fp);
		return -2;
	}
	printf("%d \n", p);
	while (!feof (fp))
	{
		if (fscanf(fp, "%d", &c) != 1)
			break;
		if (c > p)
		{
			printf("%d \n", c);
			p = c;
		}
	}
	fclose(fp);
	return 0;
}
