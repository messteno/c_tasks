#include <stdio.h>
int main ()
{
	int *arr;
	int n;
	int i;
	FILE *fp;
	fp = fopen("data.txt", "r");
	if (fp == NULL)
	{
		printf("Can't open file \n");
		return -1;
	}
	if (fscanf(fp, "%d", &n) != 1)
	{
		printf("Wrong content \n");
		fclose(fp);
		return -2;
	}
	