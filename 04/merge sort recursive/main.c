#include <stdio.h>
#include <stdlib.h>

void merge_sort_recursive (double * arr, double * temp, int n)
{
	int c;
	int i;
	int j;
	int k = 0;
	if (n == 1)
	{
		return;
	}
	c = n / 2;
	merge_sort_recursive (arr, temp, c);
	merge_sort_recursive (arr + c, temp + c, n - c);
	i = 0;
	j = c;
	while (i < c && j < n)
	{
		if (arr[i] > arr[j])
		{
			temp[k++] = arr[j++];
		}
		else 
		{
			temp[k++] = arr[i++];
		}
	}
	for (; i < c; i++)
	{
		temp[k++] = arr[i++];
	}
	for (; j < n; j++)
	{
		temp[k++] = arr[j++];
	}
	for (i = 0; i < n; i++)
	{
		arr[i] = temp[i];
	}
}

void merge_sort(double * arr, int n)
{
	double * arrtemp = (double *) malloc(n * sizeof(double));
	merge_sort_recursive (arr, arrtemp, n);
	free (arrtemp);
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
	merge_sort(arr, n);
	for (i = 0; i < n; i++)
	{
		printf("%lf \n", arr[i]);
	}
	free (arr);
	return 0;
}