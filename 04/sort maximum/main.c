#include <stdio.h>
#include <stdlib.h>

void maximum_sort(double * arr, int n)
{
	int k;
	int i;
	double max;
	int p;
	for (k = n; k > 0; k--)
	{
		max = arr[0];
		p = 0;
		for (i = 1; i < k; i++)
		{
			if (max < arr[i])
			{
				max = arr[i];
				p = i;
			}
		}
		arr[p] = arr[k - 1];
		arr[k - 1] = max;
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
	maximum_sort(arr, n);
	for (i = 0; i < n; i++)
	{
		printf("%lf \n", arr[i]);
	}
	free (arr);
	return 0;
}