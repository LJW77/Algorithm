#include<stdio.h>

int main()
{
	int a[11];
	int i, j;
	printf("Please input 10 integer numbers: ");
	for (i = 1; i < 11; i++)
		scanf_s("%d", &a[i]);
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 10 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	printf("The sorted numbers: ");
	for (i = 1; i < 11; i++)
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}