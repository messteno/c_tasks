#include <stdio.h>
#include <stdlib.h>
void merge (double * arr, double * temp, int l1, int r1, int l2, int r2)
{
	int i = l1;
	int j = l2;
	int k = l1;
	while (i < r1 && j < r2)
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
	for (; i < r1; i++)
	{
		temp[k++] = arr[i++];
	}
	for (; j < r2; j++)
	{
		temp[k++] = arr[j++];
	}
}

void merge_sort(double * arr, int n)
{
	double * arrtemp = (double *) malloc(n * sizeof(double));
	int block_size = 1;
	int r1;
	int l1;
	int r2;
	int l2;
	int i;
	double * currarray = arr;
	double * currtemp = arrtemp;
	double * swag;
	while (block_size < n)
	{
		l1 = 0;
		do
		{
			r1 = l1 + block_size;
			l2 = r1;
			r2 = l2 + block_size;
			if (r2 > n)
			{
				r2 = n;
			}
			merge (currarray, currtemp, l1, r1, l2, r2);
			l1 += 2 * block_size;

		}
		while (l1 + block_size < n);
		swag = currtemp;
		currtemp = currarray;
		currarray = swag;
		/* 3 строки выше аналогичны следующему
		for (i = 0; i < n; i++)
		{
			arr[i] = arrtemp[i];
		}
		*/ 
		block_size <<= 1;
	}
	if (currtemp == arrtemp)
	{
		for (i = 0; i < n; i++)
		{
			arr[i] = arrtemp[i];
		}
	}
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