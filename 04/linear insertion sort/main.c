#include <stdio.h>
#include <stdlib.h>
int find_position(double * arr, int n, double t)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (arr[i] > t)
		{
			return i;
		}	
	}
	return n;
}

void shift_right(double * arr, int n)
{
	int i;
	for (i = n - 1; i >= 0; i--)
	{
		arr[i + 1] = arr[i];
	}
}

void linear_insertion_sort(double * arr, int n)
{
	int k;
	int i;
	int t;
	for (k = 1; k < n; k++)
	{
		t = arr[k];
		i = find_position(arr, k, t);
		shift_right(arr + i, k - i);
		arr[i] = t;			
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
	linear_insertion_sort(arr, n);
	for (i = 0; i < n; i++)
	{
		printf("%lf \n", arr[i]);
	}
	free (arr);
	return 0;
}