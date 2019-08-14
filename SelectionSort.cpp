#include<stdio.h>
#define ARRAY_SIZE 10

void selectionSort(int array[], int n);

int main()
{
	printf("Please enter 10 integer numbers: \n");
	int a[ARRAY_SIZE], i;
	for (i = 0; i < ARRAY_SIZE; i++)
		scanf_s("%d", &a[i]);
	selectionSort(a, ARRAY_SIZE);
	printf("The sorted array is: \n");
	for (i = 0; i < ARRAY_SIZE; i++)
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}

void selectionSort(int array[], int n)
{
	int i, j, k, temp;
	for (i = 0; i < n - 1; i++)
	{
		k = i;
		for (j = i + 1; j < n; j++)
		{
			if (array[k] > array[j])
				k = j;
		}
		temp = array[k];
		array[k] = array[i];
		array[i] = temp;
	}
}

