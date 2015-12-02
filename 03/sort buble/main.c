#include <stdio.h>
#include <stdlib.h>

void buble_sort(double * arr, int n)
{
	int k;
	int i;
	double t;
	for (k = n; k > 0; k--)
	{
		for (i = 0; i < k - 1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				t = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = t; 
			}
		}
	}
}
int main ()
{
	double *arr;
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
	arr = (double *) malloc(n * sizeof(double));
	for (i = 0; i < n; i++)
	{
		if (fscanf(fp, "%lf", &arr[i]) != 1)
		{
			printf("Wrong content \n");
			fclose(fp);
			return -2;
		}
	}
	fclose(fp);
	buble_sort(arr, n);
	for (i = 0; i < n; i++)
	{
		printf("%lf \n", arr[i]);
	}
	free (arr);
	return 0;
}