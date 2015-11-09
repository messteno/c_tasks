#include <stdio.h>
#include <stdlib.h>
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
	arr = (int *) malloc(n * sizeof(int));
	for (i = 0; i < n; i++)
	{
		if (fscanf(fp, "%d", &arr[i]) != 1)
		{
			printf("Wrong content \n");
			fclose(fp);
			return -2;
		}
	}
	fclose(fp);
	for (i = 0; i < n; i++)
	{
		printf("%d \n", arr[i]);
	}
	free (arr);
	return 0;
}